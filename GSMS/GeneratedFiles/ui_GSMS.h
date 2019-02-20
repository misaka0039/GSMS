/********************************************************************************
** Form generated from reading UI file 'GSMS.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GSMS_H
#define UI_GSMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GSMSClass
{
public:
    QAction *actionAbout;
    QAction *actionQuit;
    QAction *actionStatistics;
    QAction *actionManage;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *managePage;
    QToolBox *toolBox;
    QWidget *managePage1;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *sellOkBtn;
    QPushButton *sellCancelBtn;
    QComboBox *sellBrandComboBox;
    QComboBox *sellGnameComboBox;
    QLineEdit *sellPriceLineEdit;
    QLineEdit *sellDisLineEdit;
    QSpinBox *sellNumSpinBox;
    QLineEdit *sellSumLineEdit;
    QLabel *sellLastNumLabel;
    QWidget *page_4;
    QLabel *label_8;
    QComboBox *importBrandComboBox;
    QLabel *label_3;
    QComboBox *importGnameComboBox;
    QLabel *label_10;
    QSpinBox *importNumSpinBox;
    QPushButton *importOkBtn;
    QPushButton *importCancelBtn;
    QPushButton *TestBtn;
    QTableView *tableView;
    QPushButton *sellListBtn;
    QWidget *statisticsPage;
    QPushButton *sortBtn;
    QComboBox *staBrandCombobox;
    QPushButton *searchBtn;
    QTableView *statableView;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *staGnameCombobox;
    QPushButton *changeBtn;
    QPushButton *delBtn;
    QLineEdit *resultLineEdit;
    QLabel *label_13;
    QMenuBar *menuBar;
    QMenu *menuExtra_2;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GSMSClass)
    {
        if (GSMSClass->objectName().isEmpty())
            GSMSClass->setObjectName(QStringLiteral("GSMSClass"));
        GSMSClass->resize(1095, 714);
        actionAbout = new QAction(GSMSClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/Resources/help_normal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon);
        actionQuit = new QAction(GSMSClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icon/Resources/logout_normal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        actionStatistics = new QAction(GSMSClass);
        actionStatistics->setObjectName(QStringLiteral("actionStatistics"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/icon/Resources/modify_normal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStatistics->setIcon(icon2);
        actionManage = new QAction(GSMSClass);
        actionManage->setObjectName(QStringLiteral("actionManage"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/icon/Resources/skills_normal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionManage->setIcon(icon3);
        centralWidget = new QWidget(GSMSClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 1061, 601));
        managePage = new QWidget();
        managePage->setObjectName(QStringLiteral("managePage"));
        toolBox = new QToolBox(managePage);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(590, 20, 421, 561));
        toolBox->setFrameShape(QFrame::WinPanel);
        managePage1 = new QWidget();
        managePage1->setObjectName(QStringLiteral("managePage1"));
        managePage1->setGeometry(QRect(0, 0, 417, 505));
        label = new QLabel(managePage1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 111, 31));
        label_2 = new QLabel(managePage1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 101, 31));
        label_4 = new QLabel(managePage1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 120, 101, 31));
        label_5 = new QLabel(managePage1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 170, 121, 41));
        label_6 = new QLabel(managePage1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 220, 81, 31));
        label_7 = new QLabel(managePage1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 270, 111, 31));
        sellOkBtn = new QPushButton(managePage1);
        sellOkBtn->setObjectName(QStringLiteral("sellOkBtn"));
        sellOkBtn->setGeometry(QRect(40, 350, 131, 51));
        sellCancelBtn = new QPushButton(managePage1);
        sellCancelBtn->setObjectName(QStringLiteral("sellCancelBtn"));
        sellCancelBtn->setGeometry(QRect(230, 350, 131, 51));
        sellBrandComboBox = new QComboBox(managePage1);
        sellBrandComboBox->setObjectName(QStringLiteral("sellBrandComboBox"));
        sellBrandComboBox->setGeometry(QRect(80, 10, 101, 31));
        sellGnameComboBox = new QComboBox(managePage1);
        sellGnameComboBox->setObjectName(QStringLiteral("sellGnameComboBox"));
        sellGnameComboBox->setGeometry(QRect(80, 60, 101, 31));
        sellPriceLineEdit = new QLineEdit(managePage1);
        sellPriceLineEdit->setObjectName(QStringLiteral("sellPriceLineEdit"));
        sellPriceLineEdit->setGeometry(QRect(80, 120, 121, 31));
        sellDisLineEdit = new QLineEdit(managePage1);
        sellDisLineEdit->setObjectName(QStringLiteral("sellDisLineEdit"));
        sellDisLineEdit->setGeometry(QRect(100, 170, 101, 31));
        sellNumSpinBox = new QSpinBox(managePage1);
        sellNumSpinBox->setObjectName(QStringLiteral("sellNumSpinBox"));
        sellNumSpinBox->setGeometry(QRect(100, 220, 61, 31));
        sellSumLineEdit = new QLineEdit(managePage1);
        sellSumLineEdit->setObjectName(QStringLiteral("sellSumLineEdit"));
        sellSumLineEdit->setGeometry(QRect(100, 270, 141, 31));
        sellLastNumLabel = new QLabel(managePage1);
        sellLastNumLabel->setObjectName(QStringLiteral("sellLastNumLabel"));
        sellLastNumLabel->setGeometry(QRect(180, 220, 91, 31));
        toolBox->addItem(managePage1, QStringLiteral("Selling"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 417, 505));
        label_8 = new QLabel(page_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 10, 51, 31));
        importBrandComboBox = new QComboBox(page_4);
        importBrandComboBox->setObjectName(QStringLiteral("importBrandComboBox"));
        importBrandComboBox->setGeometry(QRect(70, 10, 91, 31));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 70, 71, 31));
        importGnameComboBox = new QComboBox(page_4);
        importGnameComboBox->setObjectName(QStringLiteral("importGnameComboBox"));
        importGnameComboBox->setGeometry(QRect(70, 70, 91, 31));
        label_10 = new QLabel(page_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(200, 70, 61, 31));
        importNumSpinBox = new QSpinBox(page_4);
        importNumSpinBox->setObjectName(QStringLiteral("importNumSpinBox"));
        importNumSpinBox->setGeometry(QRect(260, 70, 61, 31));
        importOkBtn = new QPushButton(page_4);
        importOkBtn->setObjectName(QStringLiteral("importOkBtn"));
        importOkBtn->setGeometry(QRect(40, 150, 121, 41));
        importCancelBtn = new QPushButton(page_4);
        importCancelBtn->setObjectName(QStringLiteral("importCancelBtn"));
        importCancelBtn->setGeometry(QRect(220, 150, 121, 41));
        toolBox->addItem(page_4, QStringLiteral("Improt"));
        TestBtn = new QPushButton(managePage);
        TestBtn->setObjectName(QStringLiteral("TestBtn"));
        TestBtn->setGeometry(QRect(10, 480, 131, 41));
        tableView = new QTableView(managePage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 20, 551, 441));
        sellListBtn = new QPushButton(managePage);
        sellListBtn->setObjectName(QStringLiteral("sellListBtn"));
        sellListBtn->setGeometry(QRect(170, 480, 141, 41));
        stackedWidget->addWidget(managePage);
        statisticsPage = new QWidget();
        statisticsPage->setObjectName(QStringLiteral("statisticsPage"));
        sortBtn = new QPushButton(statisticsPage);
        sortBtn->setObjectName(QStringLiteral("sortBtn"));
        sortBtn->setEnabled(true);
        sortBtn->setGeometry(QRect(550, 20, 121, 31));
        staBrandCombobox = new QComboBox(statisticsPage);
        staBrandCombobox->setObjectName(QStringLiteral("staBrandCombobox"));
        staBrandCombobox->setGeometry(QRect(90, 20, 141, 31));
        searchBtn = new QPushButton(statisticsPage);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        searchBtn->setEnabled(true);
        searchBtn->setGeometry(QRect(700, 20, 121, 31));
        statableView = new QTableView(statisticsPage);
        statableView->setObjectName(QStringLiteral("statableView"));
        statableView->setGeometry(QRect(10, 70, 811, 441));
        label_11 = new QLabel(statisticsPage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 20, 91, 31));
        label_12 = new QLabel(statisticsPage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(270, 20, 91, 31));
        staGnameCombobox = new QComboBox(statisticsPage);
        staGnameCombobox->setObjectName(QStringLiteral("staGnameCombobox"));
        staGnameCombobox->setGeometry(QRect(330, 20, 161, 31));
        staGnameCombobox->setEditable(true);
        changeBtn = new QPushButton(statisticsPage);
        changeBtn->setObjectName(QStringLiteral("changeBtn"));
        changeBtn->setGeometry(QRect(870, 220, 121, 31));
        delBtn = new QPushButton(statisticsPage);
        delBtn->setObjectName(QStringLiteral("delBtn"));
        delBtn->setGeometry(QRect(870, 80, 121, 34));
        resultLineEdit = new QLineEdit(statisticsPage);
        resultLineEdit->setObjectName(QStringLiteral("resultLineEdit"));
        resultLineEdit->setGeometry(QRect(910, 160, 113, 25));
        label_13 = new QLabel(statisticsPage);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(840, 160, 81, 18));
        stackedWidget->addWidget(statisticsPage);
        GSMSClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GSMSClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1095, 23));
        menuExtra_2 = new QMenu(menuBar);
        menuExtra_2->setObjectName(QStringLiteral("menuExtra_2"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        GSMSClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GSMSClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GSMSClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GSMSClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GSMSClass->setStatusBar(statusBar);

        menuBar->addAction(menuExtra_2->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuExtra_2->addAction(actionManage);
        menuExtra_2->addAction(actionStatistics);
        menuExtra_2->addAction(actionQuit);
        menuAbout->addAction(actionAbout);
        mainToolBar->addAction(actionManage);
        mainToolBar->addAction(actionStatistics);
        mainToolBar->addAction(actionQuit);
        mainToolBar->addAction(actionAbout);

        retranslateUi(GSMSClass);

        stackedWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);
        sellBrandComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(GSMSClass);
    } // setupUi

    void retranslateUi(QMainWindow *GSMSClass)
    {
        GSMSClass->setWindowTitle(QApplication::translate("GSMSClass", "GSMS", 0));
        actionAbout->setText(QApplication::translate("GSMSClass", "About", 0));
        actionQuit->setText(QApplication::translate("GSMSClass", "Quit", 0));
        actionStatistics->setText(QApplication::translate("GSMSClass", "Statistics", 0));
        actionManage->setText(QApplication::translate("GSMSClass", "Manage", 0));
        label->setText(QApplication::translate("GSMSClass", "Brand\357\274\232", 0));
        label_2->setText(QApplication::translate("GSMSClass", "Type\357\274\232", 0));
        label_4->setText(QApplication::translate("GSMSClass", "Price\357\274\232", 0));
        label_5->setText(QApplication::translate("GSMSClass", "Discount\357\274\232", 0));
        label_6->setText(QApplication::translate("GSMSClass", "Number\357\274\232", 0));
        label_7->setText(QApplication::translate("GSMSClass", "Sum Price\357\274\232", 0));
        sellOkBtn->setText(QApplication::translate("GSMSClass", "Deal!", 0));
        sellCancelBtn->setText(QApplication::translate("GSMSClass", "Not now", 0));
        sellLastNumLabel->setText(QString());
        toolBox->setItemText(toolBox->indexOf(managePage1), QApplication::translate("GSMSClass", "Selling", 0));
        label_8->setText(QApplication::translate("GSMSClass", "Brand:", 0));
        label_3->setText(QApplication::translate("GSMSClass", "Type:", 0));
        label_10->setText(QApplication::translate("GSMSClass", "Number:", 0));
        importOkBtn->setText(QApplication::translate("GSMSClass", "Import", 0));
        importCancelBtn->setText(QApplication::translate("GSMSClass", "Mistake", 0));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("GSMSClass", "Improt", 0));
        TestBtn->setText(QApplication::translate("GSMSClass", "Stock", 0));
        sellListBtn->setText(QApplication::translate("GSMSClass", "Sell_List", 0));
        sortBtn->setText(QApplication::translate("GSMSClass", "SORT", 0));
        searchBtn->setText(QApplication::translate("GSMSClass", "SEARCH", 0));
        label_11->setText(QApplication::translate("GSMSClass", "Brand", 0));
        label_12->setText(QApplication::translate("GSMSClass", "Type", 0));
        changeBtn->setText(QApplication::translate("GSMSClass", "CHANGE (PRICE)", 0));
        delBtn->setText(QApplication::translate("GSMSClass", "DELETE (SID)", 0));
        label_13->setText(QApplication::translate("GSMSClass", "Result", 0));
        menuExtra_2->setTitle(QApplication::translate("GSMSClass", "Extra", 0));
        menuAbout->setTitle(QApplication::translate("GSMSClass", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class GSMSClass: public Ui_GSMSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GSMS_H
