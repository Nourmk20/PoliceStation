/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *sw;
    QWidget *page;
    QWidget *page_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *le_nom;
    QLineEdit *le_max;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QTableView *tableView;
    QComboBox *cb_sort;
    QLineEdit *le_search;
    QWidget *tab_3;
    QLineEdit *le_nom_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *le_max_2;
    QPushButton *pushButton_4;
    QLineEdit *le_nbr_2;
    QLabel *label_5;
    QComboBox *cb_id;
    QLabel *label_6;
    QWidget *tab_4;
    QPushButton *pushButton_5;
    QLabel *label_7;
    QComboBox *cb_id_2;
    QWidget *page_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_6;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *le_cin;
    QLineEdit *le_noom;
    QLineEdit *le_prenom;
    QLineEdit *le_activite;
    QComboBox *cb_sexe;
    QTextEdit *te_;
    QDateEdit *de_;
    QLabel *label_25;
    QComboBox *cb_cell;
    QWidget *tab_6;
    QTableView *tableView_2;
    QComboBox *cb_sort_2;
    QLineEdit *le_search_2;
    QLabel *label_12;
    QLabel *l_total;
    QWidget *tab_7;
    QPushButton *pushButton_7;
    QComboBox *cb_id_3;
    QLabel *label_13;
    QLabel *label_20;
    QLineEdit *le_prenom_2;
    QLabel *label_10;
    QDateEdit *de_1;
    QTextEdit *te_1;
    QComboBox *cb_sexe_2;
    QLineEdit *le_cin_2;
    QLabel *label_11;
    QLabel *label_21;
    QLineEdit *le_activite_2;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *le_noom_2;
    QLabel *label_24;
    QLabel *label_26;
    QComboBox *cb_cell_2;
    QWidget *tab_8;
    QPushButton *pushButton_8;
    QLabel *label_14;
    QComboBox *cb_id_d_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(682, 442);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sw = new QStackedWidget(centralWidget);
        sw->setObjectName(QStringLiteral("sw"));
        sw->setGeometry(QRect(130, 10, 511, 371));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        sw->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        tabWidget = new QTabWidget(page_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 50, 451, 301));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        le_nom = new QLineEdit(tab);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(80, 40, 113, 21));
        le_max = new QLineEdit(tab);
        le_max->setObjectName(QStringLiteral("le_max"));
        le_max->setGeometry(QRect(80, 80, 113, 21));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 47, 14));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 47, 14));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 160, 80, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 60, 401, 192));
        cb_sort = new QComboBox(tab_2);
        cb_sort->setObjectName(QStringLiteral("cb_sort"));
        cb_sort->setGeometry(QRect(40, 30, 111, 22));
        le_search = new QLineEdit(tab_2);
        le_search->setObjectName(QStringLiteral("le_search"));
        le_search->setGeometry(QRect(220, 30, 191, 21));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        le_nom_2 = new QLineEdit(tab_3);
        le_nom_2->setObjectName(QStringLiteral("le_nom_2"));
        le_nom_2->setGeometry(QRect(100, 70, 113, 21));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 110, 47, 14));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 70, 47, 14));
        le_max_2 = new QLineEdit(tab_3);
        le_max_2->setObjectName(QStringLiteral("le_max_2"));
        le_max_2->setGeometry(QRect(100, 110, 113, 21));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(310, 190, 80, 22));
        le_nbr_2 = new QLineEdit(tab_3);
        le_nbr_2->setObjectName(QStringLiteral("le_nbr_2"));
        le_nbr_2->setGeometry(QRect(100, 150, 113, 21));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 150, 47, 14));
        cb_id = new QComboBox(tab_3);
        cb_id->setObjectName(QStringLiteral("cb_id"));
        cb_id->setGeometry(QRect(100, 30, 111, 22));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 30, 47, 14));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(310, 200, 80, 22));
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 40, 47, 14));
        cb_id_2 = new QComboBox(tab_4);
        cb_id_2->setObjectName(QStringLiteral("cb_id_2"));
        cb_id_2->setGeometry(QRect(100, 40, 111, 22));
        tabWidget->addTab(tab_4, QString());
        sw->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        tabWidget_2 = new QTabWidget(page_3);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(30, 50, 451, 301));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 60, 47, 14));
        label_9 = new QLabel(tab_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 100, 47, 14));
        pushButton_6 = new QPushButton(tab_5);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(310, 220, 80, 22));
        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(28, 140, 47, 14));
        label_16 = new QLabel(tab_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 180, 47, 14));
        label_17 = new QLabel(tab_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(30, 220, 47, 14));
        label_18 = new QLabel(tab_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(200, 60, 47, 14));
        label_19 = new QLabel(tab_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(200, 100, 47, 14));
        le_cin = new QLineEdit(tab_5);
        le_cin->setObjectName(QStringLiteral("le_cin"));
        le_cin->setGeometry(QRect(70, 60, 113, 21));
        le_noom = new QLineEdit(tab_5);
        le_noom->setObjectName(QStringLiteral("le_noom"));
        le_noom->setGeometry(QRect(70, 100, 113, 21));
        le_prenom = new QLineEdit(tab_5);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(71, 137, 113, 21));
        le_activite = new QLineEdit(tab_5);
        le_activite->setObjectName(QStringLiteral("le_activite"));
        le_activite->setGeometry(QRect(260, 60, 113, 21));
        cb_sexe = new QComboBox(tab_5);
        cb_sexe->addItem(QString());
        cb_sexe->addItem(QString());
        cb_sexe->setObjectName(QStringLiteral("cb_sexe"));
        cb_sexe->setGeometry(QRect(70, 220, 65, 22));
        te_ = new QTextEdit(tab_5);
        te_->setObjectName(QStringLiteral("te_"));
        te_->setGeometry(QRect(260, 90, 111, 71));
        de_ = new QDateEdit(tab_5);
        de_->setObjectName(QStringLiteral("de_"));
        de_->setGeometry(QRect(70, 180, 110, 22));
        label_25 = new QLabel(tab_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(205, 179, 50, 14));
        cb_cell = new QComboBox(tab_5);
        cb_cell->setObjectName(QStringLiteral("cb_cell"));
        cb_cell->setGeometry(QRect(260, 176, 80, 22));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tableView_2 = new QTableView(tab_6);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(20, 60, 401, 192));
        cb_sort_2 = new QComboBox(tab_6);
        cb_sort_2->addItem(QString());
        cb_sort_2->addItem(QString());
        cb_sort_2->addItem(QString());
        cb_sort_2->addItem(QString());
        cb_sort_2->addItem(QString());
        cb_sort_2->addItem(QString());
        cb_sort_2->setObjectName(QStringLiteral("cb_sort_2"));
        cb_sort_2->setGeometry(QRect(40, 30, 111, 22));
        le_search_2 = new QLineEdit(tab_6);
        le_search_2->setObjectName(QStringLiteral("le_search_2"));
        le_search_2->setGeometry(QRect(220, 30, 191, 21));
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(21, 258, 47, 14));
        l_total = new QLabel(tab_6);
        l_total->setObjectName(QStringLiteral("l_total"));
        l_total->setGeometry(QRect(52, 258, 47, 14));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        pushButton_7 = new QPushButton(tab_7);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(310, 230, 80, 22));
        cb_id_3 = new QComboBox(tab_7);
        cb_id_3->setObjectName(QStringLiteral("cb_id_3"));
        cb_id_3->setGeometry(QRect(90, 30, 111, 22));
        label_13 = new QLabel(tab_7);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(50, 30, 47, 14));
        label_20 = new QLabel(tab_7);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(220, 110, 47, 14));
        le_prenom_2 = new QLineEdit(tab_7);
        le_prenom_2->setObjectName(QStringLiteral("le_prenom_2"));
        le_prenom_2->setGeometry(QRect(91, 147, 113, 21));
        label_10 = new QLabel(tab_7);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 110, 47, 14));
        de_1 = new QDateEdit(tab_7);
        de_1->setObjectName(QStringLiteral("de_1"));
        de_1->setGeometry(QRect(90, 190, 110, 22));
        te_1 = new QTextEdit(tab_7);
        te_1->setObjectName(QStringLiteral("te_1"));
        te_1->setGeometry(QRect(280, 100, 111, 71));
        cb_sexe_2 = new QComboBox(tab_7);
        cb_sexe_2->addItem(QString());
        cb_sexe_2->addItem(QString());
        cb_sexe_2->setObjectName(QStringLiteral("cb_sexe_2"));
        cb_sexe_2->setGeometry(QRect(90, 230, 65, 22));
        le_cin_2 = new QLineEdit(tab_7);
        le_cin_2->setObjectName(QStringLiteral("le_cin_2"));
        le_cin_2->setGeometry(QRect(90, 70, 113, 21));
        label_11 = new QLabel(tab_7);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 70, 47, 14));
        label_21 = new QLabel(tab_7);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(50, 230, 47, 14));
        le_activite_2 = new QLineEdit(tab_7);
        le_activite_2->setObjectName(QStringLiteral("le_activite_2"));
        le_activite_2->setGeometry(QRect(280, 70, 113, 21));
        label_22 = new QLabel(tab_7);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(50, 190, 47, 14));
        label_23 = new QLabel(tab_7);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(48, 150, 47, 14));
        le_noom_2 = new QLineEdit(tab_7);
        le_noom_2->setObjectName(QStringLiteral("le_noom_2"));
        le_noom_2->setGeometry(QRect(90, 110, 113, 21));
        label_24 = new QLabel(tab_7);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(220, 70, 47, 14));
        label_26 = new QLabel(tab_7);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(225, 183, 50, 14));
        cb_cell_2 = new QComboBox(tab_7);
        cb_cell_2->setObjectName(QStringLiteral("cb_cell_2"));
        cb_cell_2->setGeometry(QRect(280, 180, 80, 22));
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        pushButton_8 = new QPushButton(tab_8);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(310, 200, 80, 22));
        label_14 = new QLabel(tab_8);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(40, 40, 47, 14));
        cb_id_d_2 = new QComboBox(tab_8);
        cb_id_d_2->setObjectName(QStringLiteral("cb_id_d_2"));
        cb_id_d_2->setGeometry(QRect(100, 40, 111, 22));
        tabWidget_2->addTab(tab_8, QString());
        sw->addWidget(page_3);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 70, 80, 51));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 190, 80, 51));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 682, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        sw->setCurrentIndex(2);
        tabWidget->setCurrentIndex(3);
        tabWidget_2->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Nom", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Nbr Max", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Ajouter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Ajouter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Afficher", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Nbr Max", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Nom", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Nbr", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "id", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "id", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Supprimer", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "CIN", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Nom", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Ajouter", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Prenom", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Date", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Sexe", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Activite", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "Description", nullptr));
        cb_sexe->setItemText(0, QApplication::translate("MainWindow", "Homme", nullptr));
        cb_sexe->setItemText(1, QApplication::translate("MainWindow", "Femme", nullptr));

        label_25->setText(QApplication::translate("MainWindow", "Cellule", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "Ajouter", nullptr));
        cb_sort_2->setItemText(0, QApplication::translate("MainWindow", "CIN", nullptr));
        cb_sort_2->setItemText(1, QApplication::translate("MainWindow", "Nom", nullptr));
        cb_sort_2->setItemText(2, QApplication::translate("MainWindow", "Prenom", nullptr));
        cb_sort_2->setItemText(3, QApplication::translate("MainWindow", "Datee", nullptr));
        cb_sort_2->setItemText(4, QApplication::translate("MainWindow", "Sexe", nullptr));
        cb_sort_2->setItemText(5, QApplication::translate("MainWindow", "Activite", nullptr));

        label_12->setText(QApplication::translate("MainWindow", "Total:", nullptr));
        l_total->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "Afficher", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Id", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "Description", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Nom", nullptr));
        cb_sexe_2->setItemText(0, QApplication::translate("MainWindow", "Homme", nullptr));
        cb_sexe_2->setItemText(1, QApplication::translate("MainWindow", "Femme", nullptr));

        label_11->setText(QApplication::translate("MainWindow", "CIN", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "Sexe", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "Date", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Prenom", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "Activite", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "Cellule", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "id", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("MainWindow", "Supprimer", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Cellule", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "detenu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
