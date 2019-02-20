#include "GSMS.h"
#include <QtWidgets/QApplication>
#include "initialization.h"
#include <QMessageBox>//�ź����ӣ������������ݿ��Ƿ��ܳɹ��򿪵���Ϣ
#include <QSqlDatabase>//���ݿ��ͷ�ļ�
#include <QSqlError>//������ͷ�ļ�
#include "login.h"




void OpenDatabase()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");//QODBC֧��΢���sqlsever
	db.setDatabaseName(QString("DRIVER={SQL SERVER};"
		"SERVER=%1;"
		"DATABASE=%2;"
		"UID=%3;"
		"PWD=%4;")
		.arg("DESKTOP-4UJHJSL")//���������ƣ��ر����ѣ������ֱ�Ӵ�sqlsever��������¼���渴��ճ����������������
		.arg("GSMS")//���ݿ�����
		.arg("sa")//���ݿ��¼��
		.arg("123456"));//���Լ�������
	if (!db.open())
	{
		QMessageBox::warning(0, qApp->tr("Cannot open database"),
			db.lastError().databaseText(), QMessageBox::Cancel);
	}
	else
	{
		qDebug() << "Connect to Database Success!";
	}
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	OpenDatabase(); //�����ݿ�
	initialization();
	
	Login login;
	GSMS w;

	if (login.exec() == QDialog::Accepted)
	{

		w.show();
		return a.exec();
	}
	else
	{
		return 0;
	}
	
}
