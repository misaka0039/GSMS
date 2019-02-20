#ifndef INITIALIZATION_H
#define INITIALIZATION_H

#include <QtSql/QSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QTextStream>
#include <QDialog>
#include <QDebug>


static bool initialization()
{
	QSqlQuery query;

	//创建BRAND表
	query.exec("create table Brand(bid varchar(4) primary key, bname varchar(12))");
	query.exec(QString("insert into Brand(bid,bname) values('0', 'Please Select')"));
	query.exec(QString("insert into Brand(bid,bname) values('1', 'MUJIUSHI')"));
	query.exec(QString("insert into Brand(bid,bname) values('2', 'Rayban')"));
	query.exec(QString("insert into Brand(bid,bname) values('3', 'C.D.')"));

	//创建GLASS表
	query.exec("create table Glass(gid varchar(4) primary key, gname varchar(8), bname  varchar(10), price int, sum int, sell int , last int)");
	query.exec("insert into Glass(gid, gname, bname, price, sum, sell, last) values('1', 'JM1058', 'MUJIUSHI', 80, 50, 0, 50)");
	query.exec("insert into Glass(gid, gname, bname, price, sum, sell, last) values('2', 'JM1015', 'MUJIUSHI', 80, 80, 0, 80)");
	query.exec("insert into Glass(gid, gname, bname, price, sum, sell, last) values('3', 'JM1030', 'MUJIUSHI', 80, 30, 0, 30)");
	query.exec("insert into Glass(gid, gname, bname, price, sum, sell, last) values('4', '5238G', 'Rayban', 100, 150, 0, 150)");
	query.exec("insert into Glass(gid, gname, bname, price, sum, sell, last) values('5', '21037M', 'C.D.', 70, 500, 0, 500)");
	query.exec("insert into Glass(gid, gname, bname, price, sum, sell, last) values('6', 'FM1633', 'C.D.', 70, 600, 0, 600)");
	query.exec("insert into Glass(gid, gname, bname, price, sum, sell, last) values('7', 'FM1003', 'C.D.', 90, 400, 0, 400)");
	query.exec("insert into Glass(gid, gname, bname, price, sum, sell, last) values('8', 'JM1089', 'Rayban', 50, 80, 0, 80)");
	query.exec("insert into Glass(gid, gname, bname, price, sum, sell, last) values('9', 'C1083', 'Rayban', 50, 165, 0, 165)");
	
	//创建SELL表,FOR SAMPLE
	query.exec("create table Sell(sid varchar(4) primary key, gname varchar(8), bname  varchar(10), price int, num int)");
	query.exec("insert into Sell(sid, gname, bname, price, num) values('1', 'JM1058', 'MUJIUSHI', 80, 5)");

	return true;
}


#endif // INITIALIZATION_H
#pragma once
