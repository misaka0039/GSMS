#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private:
    Ui::Login *ui;

private slots:
	void on_loginBtn_clicked();
	void on_quitBtn_clicked();

};

#endif // LOGIN_H
