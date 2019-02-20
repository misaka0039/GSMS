#include "GSMS.h"
#include <QtWidgets/QApplication>
#include "initialization.h"
#include <QMessageBox>//信号箱子，用来返回数据库是否能成功打开的信息
#include <QSqlDatabase>//数据库的头文件
#include <QSqlError>//出错处理头文件
#include "login.h"




void OpenDatabase()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");//QODBC支持微软的sqlsever
	db.setDatabaseName(QString("DRIVER={SQL SERVER};"
		"SERVER=%1;"
		"DATABASE=%2;"
		"UID=%3;"
		"PWD=%4;")
		.arg("DESKTOP-4UJHJSL")//服务器名称，特别提醒，最好是直接从sqlsever管理器登录界面复制粘贴过来，否则会出错
		.arg("GSMS")//数据库名称
		.arg("sa")//数据库登录名
		.arg("123456"));//你自己的密码
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
	
	OpenDatabase(); //打开数据库
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
