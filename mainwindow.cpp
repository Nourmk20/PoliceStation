#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    refrech();

    ui->le_max->setValidator( new QIntValidator(0, 10000, this) );
    ui->le_max_2->setValidator( new QIntValidator(0, 10000, this) );
    ui->le_nbr_2->setValidator( new QIntValidator(0, 10000, this) );
    ui->cb_sort->addItem("name");
    ui->cb_sort->addItem("max");
    ui->cb_sort->addItem("currentt");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::refrech()
{
    ui->tableView->setModel(C.afficher());
    C.fillComboBox(ui->cb_id);
    C.fillComboBox(ui->cb_id_2);

    ui->tableView_2->setModel(D.afficher());
    D.fillComboBox(ui->cb_id_d_2);
    D.fillComboBox(ui->cb_id_3);
    D.fillComboBox__(ui->cb_cell);
    D.fillComboBox__(ui->cb_cell_2);
    ui->l_total->setText(D.count());
}

void MainWindow::on_pushButton_clicked()
{
    ui->sw->setCurrentIndex(1);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->sw->setCurrentIndex(2);
}

void MainWindow::on_pushButton_3_clicked()
{
    Cel c(C.autoId(), ui->le_nom->text(), ui->le_max->text().toInt(), 0);
    if(c.ajouter()) {
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Ajouter cellule"),
                                 QObject::tr("ajout succeful. \n" "Click ok to exit"),QMessageBox::Ok);

    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter cellule"),
                                 QObject::tr("ajout failed. \n" "Click Cancel to exit"),QMessageBox::Cancel);

    }
}

void MainWindow::on_pushButton_4_clicked()
{
    Cel c(ui->cb_id->currentText().toInt(), ui->le_nom_2->text(), ui->le_max_2->text().toInt(), ui->le_nbr_2->text().toInt());
    if(c.modifier()) {
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Modifier cellule"),
                                 QObject::tr("modif succeful. \n" "Click ok to exit"),QMessageBox::Ok);

    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter cellule"),
                                 QObject::tr("modif failed. \n" "Click Cancel to exit"),QMessageBox::Cancel);

    }
}

void MainWindow::on_pushButton_5_clicked()
{
    Cel c;
    c.setId(ui->cb_id_2->currentText().toInt());
    if(c.supprimer()) {
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Supprimer cellule"),
                                 QObject::tr("supprim succeful. \n" "Click ok to exit"),QMessageBox::Ok);

    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter cellule"),
                                 QObject::tr("supprim failed. \n" "Click Cancel to exit"),QMessageBox::Cancel);

    }
}

void MainWindow::on_le_search_textChanged(const QString &arg1)
{
    ui->tableView->setModel(C.search(arg1));
}

void MainWindow::on_cb_sort_currentTextChanged(const QString &arg1)
{
    ui->tableView->setModel(C.sort(arg1));
}

void MainWindow::on_cb_sort_2_currentTextChanged(const QString &arg1)
{
    ui->tableView_2->setModel(D.sort(arg1));
}

void MainWindow::on_le_search_2_textChanged(const QString &arg1)
{
    ui->tableView_2->setModel(D.search(arg1));
}

void MainWindow::on_pushButton_8_clicked()
{
    Detenu c;
    c.setId(ui->cb_id_d_2->currentText().toInt());
    if(c.supprimer()) {
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Supprimer detenu"),
                                 QObject::tr("supprim succeful. \n" "Click ok to exit"),QMessageBox::Ok);

    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter cellule"),
                                 QObject::tr("supprim failed. \n" "Click Cancel to exit"),QMessageBox::Cancel);

    }
}

void MainWindow::on_pushButton_7_clicked()
{
    Detenu d(ui->cb_id_3->currentText().toInt(), ui->le_cin_2->text(), ui->le_noom_2->text(), ui->le_prenom_2->text(), ui->de_1->text(), ui->cb_sexe_2->currentText(), ui->le_activite_2->text(), ui->te_1->toPlainText(), ui->cb_cell_2->currentText().toInt());
    if(d.modifier()) {
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Ajouter detenu"),
                                 QObject::tr("ajout succeful. \n" "Click ok to exit"),QMessageBox::Ok);

    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter cellule"),
                                 QObject::tr("ajout failed. \n" "Click Cancel to exit"),QMessageBox::Cancel);

    }
}

void MainWindow::on_pushButton_6_clicked()
{
    Detenu d(D.autoId(), ui->le_cin->text(), ui->le_noom->text(), ui->le_prenom->text(), ui->de_->text(), ui->cb_sexe->currentText(), ui->le_activite->text(), ui->te_->toPlainText(), ui->cb_cell->currentText().toInt());
    if(d.ajouter()) {
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Ajouter detenu"),
                                 QObject::tr("ajout succeful. \n" "Click ok to exit"),QMessageBox::Ok);

    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter cellule"),
                                 QObject::tr("ajout failed. \n" "Click Cancel to exit"),QMessageBox::Cancel);

    }
}
