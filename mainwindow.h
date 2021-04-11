#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cel.h"
#include "detenu.h"
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void refrech();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_le_search_textChanged(const QString &arg1);

    void on_cb_sort_currentTextChanged(const QString &arg1);

    void on_cb_sort_2_currentTextChanged(const QString &arg1);

    void on_le_search_2_textChanged(const QString &arg1);

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    Cel C;
    Detenu D;
};

#endif // MAINWINDOW_H
