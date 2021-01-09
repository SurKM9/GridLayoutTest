#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(800, 600);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->gridLayout->count() == 0)
    {
        QLabel* label1 = new QLabel(this);
        QLabel* label2 = new QLabel(this);
        QLabel* label3 = new QLabel(this);
        QLabel* label4 = new QLabel(this);

        label1->setStyleSheet("border: 3px solid black;");
        label2->setStyleSheet("border: 3px solid black;");
        label3->setStyleSheet("border: 3px solid black;");
        label4->setStyleSheet("border: 3px solid black;");

        ui->gridLayout->addWidget(label1, 0, 0);
        ui->gridLayout->addWidget(label2, 0, 1);
        ui->gridLayout->addWidget(label3, 1, 0);
        ui->gridLayout->addWidget(label4, 1, 1);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    // get the item in the layout at index 0
    QLayoutItem* item = ui->gridLayout->itemAt(0);
    ui->gridLayout->removeItem(item);

    // get the widget
    QWidget* widget = item->widget();

    // check if a valid widget
    if(widget)
    {
        delete widget;
    }
}
