#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QFile>
#include <connection.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connection C;
        bool test=C.openconnection();
        MainWindow w;

        if(test)
           // qDebug() <<"Connection réussite";
            QMessageBox::information(nullptr, QObject::tr("Database is open"),
                                     QObject::tr("Connection succeful. \n" "Click ok to exit"),QMessageBox::Ok);
        else
           // qDebug() <<"Error connection";
            QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                                     QObject::tr("Connection failed. \n" "Click Cancel to exit"),QMessageBox::Cancel);
    w.show();

    return a.exec();
}
