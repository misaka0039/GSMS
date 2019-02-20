#pragma once

#include <QMainWindow>
#include "ui_GSMS.h"
#include "initialization.h"
#include <QSqlQueryModel>
#include <QSplitter>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDate>
#include <QTableView>
#include <QStandardItemModel>
#include <QUrl>
#include <QDesktopServices>
#include <QtSql>

class GSMS : public QMainWindow
{
	Q_OBJECT

public:
	GSMS(QWidget *parent = Q_NULLPTR);

//²ÛµÄ¶¨Òå
	private slots:
	
	//Combox&SpinBox
	void on_sellGnameComboBox_currentIndexChanged(const QString &arg1);	//sell
	void on_sellBrandComboBox_currentIndexChanged(const QString &arg1);
	void on_sellNumSpinBox_valueChanged(int arg1);

	void on_staBrandCombobox_currentIndexChanged(const QString &arg1);	//sta

	void on_importBrandComboBox_currentIndexChanged(const QString &arg1);		//import
	
	
	
	//Btn
	void on_sellOkBtn_clicked();	//sell
	void on_sellCancelBtn_clicked();
	
	void on_TestBtn_clicked();      //Function
	void on_sellListBtn_clicked();
	
	void on_sortBtn_clicked();		//sta
	void on_searchBtn_clicked();
	void on_delBtn_clicked();
	void on_changeBtn_clicked();

	void on_importOkBtn_clicked();		//import
	void on_importCancelBtn_clicked();

	//action
	void on_actionManage_triggered();
	void on_actionQuit_triggered();
	void on_actionStatistics_triggered();
	void on_actionAbout_triggered();

private:
	Ui::GSMSClass ui;
};
