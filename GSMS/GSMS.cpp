#include "GSMS.h"
#include <QSqlQueryModel>
#include "initialization.h"
#include <QMenu>  
#include <QAction> 

GSMS::GSMS(QWidget *parent)		//���캯��
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->setWindowTitle(tr("GlassSellMgrSys"));
	ui.stackedWidget->setCurrentIndex(0);
	

	//����bname
	QSqlQueryModel *brandModel1 = new QSqlQueryModel(this);
	brandModel1->setQuery("select BNAME from BRAND");
	ui.sellBrandComboBox->setModel(brandModel1);

	QSqlQueryModel *brandModel2 = new QSqlQueryModel(this);
	brandModel2->setQuery("select BNAME from BRAND");
	ui.importBrandComboBox->setModel(brandModel2);

 }



void GSMS::on_sellBrandComboBox_currentIndexChanged(const QString &arg1)	//ͬ����ʾ
{

		ui.sellGnameComboBox->setEditable(true);
		QSqlQueryModel *model = new QSqlQueryModel(this);
		model->setQuery(QString("select gname from GLASS where BNAME = '%1'").arg(arg1));

		ui.sellGnameComboBox->setModel(model);
		ui.sellCancelBtn->setEnabled(true);
}


void GSMS::on_TestBtn_clicked()				//��ʾGLASS��
{
	QSqlQueryModel *model = new QSqlQueryModel;
	model->setQuery("select * from GLASS");
	ui.tableView->setModel(model);

}


void GSMS:: on_sellGnameComboBox_currentIndexChanged(const QString &arg1)	//ͬ����ʾ
{
	ui.sellNumSpinBox->setValue(0);
	ui.sellNumSpinBox->setEnabled(false);
	ui.sellSumLineEdit->clear();
	ui.sellSumLineEdit->setEnabled(false);
	ui.sellOkBtn->setEnabled(false);
	
	//��ѯ����
	QSqlQuery query;
	query.exec(QString("select price from GLASS where gname = '%1' and Bname = '%2'").arg(arg1).arg(ui.sellBrandComboBox->currentText()));
	query.next();
	ui.sellPriceLineEdit->setEnabled(true);
	ui.sellPriceLineEdit->setReadOnly(true);
	ui.sellPriceLineEdit->setText(query.value(0).toString());
	//��ѯʣ������
	query.exec(QString("select last from glass where gname = '%1' and bname = '%2'").arg(arg1).arg(ui.sellBrandComboBox->currentText()));
	query.next();
	int num = query.value(0).toInt();
	if (num == 0)
	{
	QMessageBox::information(this, tr("TIP"), tr("ALL SOLD OUT��"), QMessageBox::Ok);
	}
	else
	{
		ui.sellNumSpinBox->setEnabled(true);
		ui.sellNumSpinBox->setMaximum(num);
		ui.sellLastNumLabel->setText(tr("LAST:%1").arg(num));
		ui.sellLastNumLabel->setVisible(true);
	}

}

void GSMS::on_sellNumSpinBox_valueChanged(int arg1)		
{
	double dis = ui.sellDisLineEdit->text().toDouble();

	if (arg1 == 0)
	{
		ui.sellSumLineEdit->clear();
		ui.sellSumLineEdit->setEnabled(false);
		ui.sellOkBtn->setEnabled(false);
	}
	else
	{
		ui.sellSumLineEdit->setEnabled(true);
		ui.sellSumLineEdit->setReadOnly(true);
		double sum = 0;
		
		if (dis == 0)
		{
			sum = arg1*ui.sellPriceLineEdit->text().toInt();

		}
		else
		{
			sum = dis*arg1*ui.sellPriceLineEdit->text().toInt();
		}
		
		ui.sellSumLineEdit->setText(QString::number(sum));
		ui.sellOkBtn->setEnabled(true);
	}
}

void GSMS::on_sellOkBtn_clicked()		//���ȷ����ť
{
	//1 �趨����
	QString Brand = ui.sellBrandComboBox->currentText();
	QString Gname = ui.sellGnameComboBox->currentText();
	QString Price = ui.sellPriceLineEdit->text();
	int value = ui.sellNumSpinBox->value();
	int last = ui.sellNumSpinBox->maximum() - value;

	QSqlQuery query;
	//��ȡ��ǰ��������
	query.exec(QString("select sell from glass where gname = '%1' and bname = '%2'").arg(Gname).arg(Brand));
	query.next();
	int sell = query.value(0).toInt() + value;
	//�α��ȡ����sid��+1
	query.exec(QString("select sid from sell"));
	query.last();
	int sid = query.value(0).toInt() + 1;

	//2 ����GLASS��
	QSqlDatabase::database().transaction();
	bool rtn = query.exec(QString("update glass set sell = %1, last = %2 where gname = '%3' and bname = '%4'").arg(sell).arg(last).arg(Gname).arg(Brand));
	if (rtn)
	{
	//3 ��¼д��SELL��
		QSqlDatabase::database().commit();
		QMessageBox::information(this, tr("TIP"), tr("SUCCEED"), QMessageBox::Ok);
		query.exec(QString("insert into Sell(sid, gname, bname, price, num) values(%1, '%2', '%3', %4, %5)").arg(sid).arg(Gname).arg(Brand).arg(Price).arg(value));
	}
	else
	{
	//����ع�
		QSqlDatabase::database().rollback();
	}
	//4 ������������б�
	QSqlQueryModel *brandModel = new QSqlQueryModel(this);
	brandModel->setQuery("select BNAME from BRAND");
	ui.sellBrandComboBox->setModel(brandModel);
	
	

}

void GSMS::on_sellCancelBtn_clicked()		//ȡ��
{
	ui.sellBrandComboBox->setCurrentIndex(0);
	ui.sellGnameComboBox->setCurrentIndex(0);
	ui.sellSumLineEdit->clear();
	ui.sellNumSpinBox->setValue(0);
	ui.sellLastNumLabel->setText(tr("LAST:000"));
}

void GSMS::on_sellListBtn_clicked()		//��ʾ�����嵥
{
	QSqlQueryModel *model = new QSqlQueryModel;
	model->setQuery("select * from Sell");
	ui.tableView->setModel(model);

}

void  GSMS::on_actionStatistics_triggered()		//����ڶ�ҳstatistics
{
	ui.stackedWidget->setCurrentIndex(1);
	QSqlQueryModel *brandModel =  new QSqlQueryModel(this);
	brandModel->setQuery("select bname from brand");
	ui.staBrandCombobox->setModel(brandModel);
}


void GSMS::on_staBrandCombobox_currentIndexChanged(const QString &arg1)		//����gname��
{
	QSqlQueryModel *model = new QSqlQueryModel(this);
	model->setQuery(QString("select gname from GLASS where BNAME = '%1'").arg(arg1));
	ui.staGnameCombobox->setModel(model);

	//QMessageBox::information(this, "ok", "lsdkfjkals");
}


void GSMS::on_importBrandComboBox_currentIndexChanged(const QString &arg1)
{
	ui.importGnameComboBox->setEditable(true);
	QSqlQueryModel *model = new QSqlQueryModel(this);
	model->setQuery(QString("select gname from GLASS where BNAME = '%1'").arg(arg1));

	ui.importGnameComboBox->setModel(model);
	ui.importCancelBtn->setEnabled(true);
}

void GSMS::on_searchBtn_clicked()		//����
{
	QString Gname = ui.staGnameCombobox->currentText();
	QSqlQuery query;
	if (ui.staGnameCombobox->currentText() == NULL)
	{
		QSqlQueryModel *model = new QSqlQueryModel;
		model->setQuery("select * from glass ");
		ui.statableView->setModel(model);
	}
	else
	{
		QSqlQueryModel *model2 = new QSqlQueryModel;
		model2->setQuery(QString("select * from sell where gname='%1'").arg(Gname));
		ui.statableView->setModel(model2);
	}


}

void GSMS::on_sortBtn_clicked()			//��last��desc����
{
	QSqlQueryModel *model = new QSqlQueryModel;
	model->setQuery(QString("select bname,gname,last from glass order by last desc"));
	ui.statableView->setModel(model);

}


void GSMS::on_delBtn_clicked()			//ɾ��sell�м�¼
{
	QString Index = ui.statableView->currentIndex().data().toString();
	//resultLineEdit
	QSqlQueryModel *model = new QSqlQueryModel;
	model->setQuery(QString("delete sell where sid ='%1'").arg(Index));
	
	QMessageBox::information(NULL, "TIP", "SUCCEED", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
}

void GSMS::on_changeBtn_clicked()		//����priceֵ
{

	QString Result = ui.resultLineEdit->text();
	QString Index = ui.statableView->currentIndex().data().toString();
	//resultLineEdit
	QSqlQueryModel *model2 = new QSqlQueryModel;
	model2->setQuery(QString("update glass set price =%1 where gname ='%2'").arg(Result).arg(Index));
	
	QMessageBox::information(NULL, "TIP", "SUCCEED", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

}


void GSMS::on_importOkBtn_clicked()
{
	//1 �趨����
	QString Brand = ui.importBrandComboBox->currentText();
	QString Gname = ui.importGnameComboBox->currentText();
	int value = ui.importNumSpinBox->value();
	int last = ui.sellNumSpinBox->maximum() + value;

	QSqlQuery query;
	//��ȡ��ǰ��������
	query.exec(QString("select sell from glass where gname = '%1' and bname = '%2'").arg(Gname).arg(Brand));
	query.next();

	//2 ����GLASS��
	QSqlDatabase::database().transaction();
	bool rtn = query.exec(QString("update glass set last = %1 where gname = '%2' and bname = '%3'").arg(last).arg(Gname).arg(Brand));
	if (rtn)
	{
		//3 ��¼д��SELL��
		QSqlDatabase::database().commit();
		QMessageBox::information(this, tr("TIP"), tr("SUCCEED"), QMessageBox::Ok);
	
	}
	else
	{
		//����ع�
		QSqlDatabase::database().rollback();
	}
	//4 ������������б�
	QSqlQueryModel *brandModel = new QSqlQueryModel(this);
	brandModel->setQuery("select BNAME from BRAND");
	ui.importBrandComboBox->setModel(brandModel);
}

void GSMS::on_importCancelBtn_clicked()
{
	ui.importBrandComboBox->setCurrentIndex(0);
	ui.importGnameComboBox->setCurrentIndex(0);
	ui.importNumSpinBox->setValue(0);
}

void GSMS::on_actionManage_triggered()
{
	ui.stackedWidget->setCurrentIndex(0);
}


void  GSMS::on_actionQuit_triggered()		//�˳�
{
	this->close();
}


void GSMS::on_actionAbout_triggered()
{
	
	QMessageBox::about(NULL, "About", "Dev version : Alpha 1 \nDeveloper : Zhong Chen \nFor DataBase Practicum 2016-2017-2");

}

