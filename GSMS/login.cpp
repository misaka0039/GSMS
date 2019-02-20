#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QtSql>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
	ui->setupUi(this);
	this->setWindowTitle(tr("Login"));
}

Login::~Login()
{
    delete ui;
}

void Login:: on_loginBtn_clicked()
{
	if (ui->userLineEdit->text().isEmpty())
	{
		QMessageBox::information(this, tr("please input username"), tr("please input username then...."));
		ui->userLineEdit->setFocus();
		//return;
	}
	else
	{
		if (ui->pwdLineEdit->text().isEmpty())
		{

			QMessageBox::information(this, tr("please input password"), tr("please input password then...."));
			ui->pwdLineEdit->setFocus();
		}
		else
		{
			
			QSqlQuery queryUser;
			queryUser.exec("select id from ap");
			queryUser.next();

			QSqlQuery queryPwd;
			queryPwd.exec("select password from ap");
			queryPwd.next();
			//Æ¥Åä
			if (queryPwd.value(0).toString() == ui->pwdLineEdit->text() && queryUser.value(0).toString() == ui->userLineEdit->text())
			{
				QDialog::accept();
			}
			else
			{//ÃÜÂë²»ÕýÈ·
				if (queryPwd.value(0).toString() != ui->pwdLineEdit->text())
				{
					QMessageBox::warning(this, tr("password error"), tr("please input right password"), QMessageBox::Ok);
					ui->pwdLineEdit->clear();
					ui->pwdLineEdit->setFocus();
				}
				else
				{
					QMessageBox::warning(this, tr("username error"), tr("please input right username"), QMessageBox::Ok);
					ui->userLineEdit->clear();
					ui->userLineEdit->setFocus();
				}

			}
		}

	}

}



void Login::on_quitBtn_clicked()
{
	QDialog::reject();
}