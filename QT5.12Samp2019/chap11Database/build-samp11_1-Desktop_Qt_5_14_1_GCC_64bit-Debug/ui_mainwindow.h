/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpenDB;
    QAction *actQuit;
    QAction *actRecAppend;
    QAction *actRecInsert;
    QAction *actSubmit;
    QAction *actRevert;
    QAction *actRecDelete;
    QAction *actPhoto;
    QAction *actPhotoClear;
    QAction *actScan;
    QWidget *centralWidget;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBoxSort;
    QGridLayout *gridLayout_3;
    QLabel *label_14;
    QComboBox *comboFields;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioBtnAscend;
    QRadioButton *radioBtnDescend;
    QGroupBox *groupBoxFilter;
    QGridLayout *gridLayout_2;
    QRadioButton *radioBtnMan;
    QRadioButton *radioBtnWoman;
    QRadioButton *radioBtnBoth;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QTableView *tableView;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *dbSpinEmpNo;
    QLabel *label_2;
    QLineEdit *dbEditName;
    QLabel *label_3;
    QComboBox *dbComboSex;
    QLabel *label_4;
    QDoubleSpinBox *dbSpinHeight;
    QLabel *label_5;
    QDateEdit *dbEditBirth;
    QLabel *label_10;
    QLineEdit *dbEditMobile;
    QLabel *label_7;
    QComboBox *dbComboProvince;
    QLabel *label_8;
    QLineEdit *dbEditCity;
    QLabel *label_6;
    QComboBox *dbComboDep;
    QPlainTextEdit *dbEditMemo;
    QLabel *label_9;
    QLabel *label_11;
    QSpinBox *dbSpinSalary;
    QLabel *label_12;
    QComboBox *dbComboEdu;
    QVBoxLayout *verticalLayout;
    QLabel *label_13;
    QLabel *dbLabPhoto;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(864, 503);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        actOpenDB = new QAction(MainWindow);
        actOpenDB->setObjectName(QString::fromUtf8("actOpenDB"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpenDB->setIcon(icon);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon1);
        actRecAppend = new QAction(MainWindow);
        actRecAppend->setObjectName(QString::fromUtf8("actRecAppend"));
        actRecAppend->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/316.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecAppend->setIcon(icon2);
        actRecInsert = new QAction(MainWindow);
        actRecInsert->setObjectName(QString::fromUtf8("actRecInsert"));
        actRecInsert->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/306.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecInsert->setIcon(icon3);
        actSubmit = new QAction(MainWindow);
        actSubmit->setObjectName(QString::fromUtf8("actSubmit"));
        actSubmit->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/save1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSubmit->setIcon(icon4);
        actRevert = new QAction(MainWindow);
        actRevert->setObjectName(QString::fromUtf8("actRevert"));
        actRevert->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/ubdo.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRevert->setIcon(icon5);
        actRecDelete = new QAction(MainWindow);
        actRecDelete->setObjectName(QString::fromUtf8("actRecDelete"));
        actRecDelete->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/delete1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRecDelete->setIcon(icon6);
        actPhoto = new QAction(MainWindow);
        actPhoto->setObjectName(QString::fromUtf8("actPhoto"));
        actPhoto->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/00.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        actPhoto->setIcon(icon7);
        actPhotoClear = new QAction(MainWindow);
        actPhotoClear->setObjectName(QString::fromUtf8("actPhotoClear"));
        actPhotoClear->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actPhotoClear->setIcon(icon8);
        actScan = new QAction(MainWindow);
        actScan->setObjectName(QString::fromUtf8("actScan"));
        actScan->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/up.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actScan->setIcon(icon9);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 10, 781, 381));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, -1, 2);
        groupBoxSort = new QGroupBox(groupBox_2);
        groupBoxSort->setObjectName(QString::fromUtf8("groupBoxSort"));
        groupBoxSort->setEnabled(false);
        gridLayout_3 = new QGridLayout(groupBoxSort);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_14 = new QLabel(groupBoxSort);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 0, 0, 1, 1);

        comboFields = new QComboBox(groupBoxSort);
        comboFields->setObjectName(QString::fromUtf8("comboFields"));

        gridLayout_3->addWidget(comboFields, 0, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        radioBtnAscend = new QRadioButton(groupBoxSort);
        radioBtnAscend->setObjectName(QString::fromUtf8("radioBtnAscend"));
        radioBtnAscend->setChecked(true);

        gridLayout_3->addWidget(radioBtnAscend, 1, 1, 1, 1);

        radioBtnDescend = new QRadioButton(groupBoxSort);
        radioBtnDescend->setObjectName(QString::fromUtf8("radioBtnDescend"));

        gridLayout_3->addWidget(radioBtnDescend, 1, 2, 1, 1);


        horizontalLayout_2->addWidget(groupBoxSort);

        groupBoxFilter = new QGroupBox(groupBox_2);
        groupBoxFilter->setObjectName(QString::fromUtf8("groupBoxFilter"));
        groupBoxFilter->setEnabled(false);
        gridLayout_2 = new QGridLayout(groupBoxFilter);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        radioBtnMan = new QRadioButton(groupBoxFilter);
        radioBtnMan->setObjectName(QString::fromUtf8("radioBtnMan"));

        gridLayout_2->addWidget(radioBtnMan, 0, 0, 1, 1);

        radioBtnWoman = new QRadioButton(groupBoxFilter);
        radioBtnWoman->setObjectName(QString::fromUtf8("radioBtnWoman"));

        gridLayout_2->addWidget(radioBtnWoman, 0, 1, 1, 1);

        radioBtnBoth = new QRadioButton(groupBoxFilter);
        radioBtnBoth->setObjectName(QString::fromUtf8("radioBtnBoth"));
        radioBtnBoth->setChecked(true);

        gridLayout_2->addWidget(radioBtnBoth, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBoxFilter);

        horizontalSpacer_3 = new QSpacerItem(45, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(groupBox_2);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);

        verticalLayout_2->addWidget(tableView);

        splitter->addWidget(layoutWidget);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dbSpinEmpNo = new QSpinBox(groupBox);
        dbSpinEmpNo->setObjectName(QString::fromUtf8("dbSpinEmpNo"));
        dbSpinEmpNo->setMinimum(1);
        dbSpinEmpNo->setMaximum(10000);

        gridLayout->addWidget(dbSpinEmpNo, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        dbEditName = new QLineEdit(groupBox);
        dbEditName->setObjectName(QString::fromUtf8("dbEditName"));

        gridLayout->addWidget(dbEditName, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        dbComboSex = new QComboBox(groupBox);
        dbComboSex->addItem(QString());
        dbComboSex->addItem(QString());
        dbComboSex->setObjectName(QString::fromUtf8("dbComboSex"));

        gridLayout->addWidget(dbComboSex, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        dbSpinHeight = new QDoubleSpinBox(groupBox);
        dbSpinHeight->setObjectName(QString::fromUtf8("dbSpinHeight"));
        dbSpinHeight->setMaximum(3.000000000000000);
        dbSpinHeight->setSingleStep(0.010000000000000);
        dbSpinHeight->setValue(1.560000000000000);

        gridLayout->addWidget(dbSpinHeight, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        dbEditBirth = new QDateEdit(groupBox);
        dbEditBirth->setObjectName(QString::fromUtf8("dbEditBirth"));
        dbEditBirth->setCalendarPopup(true);
        dbEditBirth->setDate(QDate(2017, 2, 20));

        gridLayout->addWidget(dbEditBirth, 4, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 5, 0, 1, 1);

        dbEditMobile = new QLineEdit(groupBox);
        dbEditMobile->setObjectName(QString::fromUtf8("dbEditMobile"));

        gridLayout->addWidget(dbEditMobile, 5, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        dbComboProvince = new QComboBox(groupBox);
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->addItem(QString());
        dbComboProvince->setObjectName(QString::fromUtf8("dbComboProvince"));
        dbComboProvince->setEditable(true);

        gridLayout->addWidget(dbComboProvince, 6, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        dbEditCity = new QLineEdit(groupBox);
        dbEditCity->setObjectName(QString::fromUtf8("dbEditCity"));

        gridLayout->addWidget(dbEditCity, 7, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 8, 0, 1, 1);

        dbComboDep = new QComboBox(groupBox);
        dbComboDep->addItem(QString());
        dbComboDep->addItem(QString());
        dbComboDep->addItem(QString());
        dbComboDep->addItem(QString());
        dbComboDep->setObjectName(QString::fromUtf8("dbComboDep"));
        dbComboDep->setEditable(true);

        gridLayout->addWidget(dbComboDep, 8, 1, 1, 1);

        dbEditMemo = new QPlainTextEdit(groupBox);
        dbEditMemo->setObjectName(QString::fromUtf8("dbEditMemo"));
        dbEditMemo->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(dbEditMemo, 11, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 11, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 9, 0, 1, 1);

        dbSpinSalary = new QSpinBox(groupBox);
        dbSpinSalary->setObjectName(QString::fromUtf8("dbSpinSalary"));
        dbSpinSalary->setMinimum(1000);
        dbSpinSalary->setMaximum(50000);
        dbSpinSalary->setSingleStep(100);
        dbSpinSalary->setValue(1000);

        gridLayout->addWidget(dbSpinSalary, 10, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 10, 0, 1, 1);

        dbComboEdu = new QComboBox(groupBox);
        dbComboEdu->addItem(QString());
        dbComboEdu->addItem(QString());
        dbComboEdu->addItem(QString());
        dbComboEdu->addItem(QString());
        dbComboEdu->addItem(QString());
        dbComboEdu->addItem(QString());
        dbComboEdu->addItem(QString());
        dbComboEdu->setObjectName(QString::fromUtf8("dbComboEdu"));
        dbComboEdu->setEditable(true);

        gridLayout->addWidget(dbComboEdu, 9, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout->addWidget(label_13);

        dbLabPhoto = new QLabel(groupBox);
        dbLabPhoto->setObjectName(QString::fromUtf8("dbLabPhoto"));
        dbLabPhoto->setMinimumSize(QSize(150, 0));
        dbLabPhoto->setMaximumSize(QSize(350, 16777215));

        verticalLayout->addWidget(dbLabPhoto);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        splitter->addWidget(groupBox);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 864, 23));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
#if QT_CONFIG(shortcut)
        label->setBuddy(dbSpinEmpNo);
        label_2->setBuddy(dbEditName);
        label_3->setBuddy(dbComboSex);
        label_4->setBuddy(dbSpinHeight);
        label_5->setBuddy(dbEditBirth);
        label_10->setBuddy(dbEditMobile);
        label_7->setBuddy(dbComboProvince);
        label_8->setBuddy(dbEditCity);
        label_6->setBuddy(dbComboDep);
        label_9->setBuddy(dbEditMemo);
        label_11->setBuddy(dbComboEdu);
        label_12->setBuddy(dbSpinSalary);
#endif // QT_CONFIG(shortcut)

        mainToolBar->addAction(actOpenDB);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actRecAppend);
        mainToolBar->addAction(actRecInsert);
        mainToolBar->addAction(actRecDelete);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actPhoto);
        mainToolBar->addAction(actPhotoClear);
        mainToolBar->addAction(actScan);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actSubmit);
        mainToolBar->addAction(actRevert);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QSqlTableModel\347\232\204\344\275\277\347\224\250", nullptr));
        actOpenDB->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actOpenDB->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actRecAppend->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
#if QT_CONFIG(tooltip)
        actRecAppend->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actRecInsert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245", nullptr));
#if QT_CONFIG(tooltip)
        actRecInsert->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actSubmit->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actSubmit->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actRevert->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
#if QT_CONFIG(tooltip)
        actRevert->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\344\277\256\346\224\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actRecDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        actRecDelete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actPhoto->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\347\205\247\347\211\207", nullptr));
#if QT_CONFIG(tooltip)
        actPhoto->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\347\205\247\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actPhotoClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\347\205\247\347\211\207", nullptr));
#if QT_CONFIG(tooltip)
        actPhotoClear->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\347\205\247\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actScan->setText(QCoreApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", nullptr));
#if QT_CONFIG(tooltip)
        actScan->setToolTip(QCoreApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QString());
        groupBoxSort->setTitle(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217\345\255\227\346\256\265", nullptr));
        radioBtnAscend->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217", nullptr));
        radioBtnDescend->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217", nullptr));
        groupBoxFilter->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\350\277\207\346\273\244", nullptr));
        radioBtnMan->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        radioBtnWoman->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        radioBtnBoth->setText(QCoreApplication::translate("MainWindow", "\345\205\250\346\230\276\347\244\272", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\345\267\245  \345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\247\223  \345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\200\247  \345\210\253", nullptr));
        dbComboSex->setItemText(0, QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        dbComboSex->setItemText(1, QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "\350\272\253  \351\253\230", nullptr));
        dbSpinHeight->setSuffix(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        dbEditBirth->setDisplayFormat(QCoreApplication::translate("MainWindow", "yyyy-MM-dd", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\346\211\213\346\234\272\345\217\267", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\347\234\201\344\273\275", nullptr));
        dbComboProvince->setItemText(0, QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254", nullptr));
        dbComboProvince->setItemText(1, QCoreApplication::translate("MainWindow", "\344\270\212\346\265\267", nullptr));
        dbComboProvince->setItemText(2, QCoreApplication::translate("MainWindow", "\345\244\251\346\264\245", nullptr));
        dbComboProvince->setItemText(3, QCoreApplication::translate("MainWindow", "\351\207\215\345\272\206", nullptr));
        dbComboProvince->setItemText(4, QCoreApplication::translate("MainWindow", "\345\256\211\345\276\275", nullptr));
        dbComboProvince->setItemText(5, QCoreApplication::translate("MainWindow", "\346\262\263\345\214\227", nullptr));
        dbComboProvince->setItemText(6, QCoreApplication::translate("MainWindow", "\346\262\263\345\215\227", nullptr));
        dbComboProvince->setItemText(7, QCoreApplication::translate("MainWindow", "\346\271\226\345\214\227", nullptr));
        dbComboProvince->setItemText(8, QCoreApplication::translate("MainWindow", "\346\271\226\345\215\227", nullptr));
        dbComboProvince->setItemText(9, QCoreApplication::translate("MainWindow", "\345\261\261\350\245\277", nullptr));
        dbComboProvince->setItemText(10, QCoreApplication::translate("MainWindow", "\345\261\261\344\270\234", nullptr));
        dbComboProvince->setItemText(11, QCoreApplication::translate("MainWindow", "\351\231\225\350\245\277", nullptr));
        dbComboProvince->setItemText(12, QCoreApplication::translate("MainWindow", "\346\261\237\350\213\217", nullptr));
        dbComboProvince->setItemText(13, QCoreApplication::translate("MainWindow", "\346\261\237\350\245\277", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "\345\237\216  \345\270\202", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\351\203\250  \351\227\250", nullptr));
        dbComboDep->setItemText(0, QCoreApplication::translate("MainWindow", "\351\224\200\345\224\256\351\203\250", nullptr));
        dbComboDep->setItemText(1, QCoreApplication::translate("MainWindow", "\346\212\200\346\234\257\351\203\250", nullptr));
        dbComboDep->setItemText(2, QCoreApplication::translate("MainWindow", "\347\224\237\344\272\247\351\203\250", nullptr));
        dbComboDep->setItemText(3, QCoreApplication::translate("MainWindow", "\350\241\214\346\224\277\351\203\250", nullptr));

        label_9->setText(QCoreApplication::translate("MainWindow", "\345\244\207   \346\263\250", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\345\255\246  \345\216\206", nullptr));
        dbSpinSalary->setPrefix(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "\345\267\245  \350\265\204", nullptr));
        dbComboEdu->setItemText(0, QCoreApplication::translate("MainWindow", "\345\215\232\345\243\253\347\240\224\347\251\266\347\224\237", nullptr));
        dbComboEdu->setItemText(1, QCoreApplication::translate("MainWindow", "\347\241\225\345\243\253\347\240\224\347\251\266\347\224\237", nullptr));
        dbComboEdu->setItemText(2, QCoreApplication::translate("MainWindow", "\345\244\247\345\255\246\346\234\254\347\247\221", nullptr));
        dbComboEdu->setItemText(3, QCoreApplication::translate("MainWindow", "\345\244\247\345\255\246\344\270\223\347\247\221", nullptr));
        dbComboEdu->setItemText(4, QCoreApplication::translate("MainWindow", "\351\253\230\344\270\255", nullptr));
        dbComboEdu->setItemText(5, QCoreApplication::translate("MainWindow", "\345\210\235\344\270\255", nullptr));
        dbComboEdu->setItemText(6, QCoreApplication::translate("MainWindow", "\345\260\217\345\255\246", nullptr));

        label_13->setText(QCoreApplication::translate("MainWindow", "\347\205\247  \347\211\207", nullptr));
        dbLabPhoto->setText(QCoreApplication::translate("MainWindow", "dbLabPhoto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
