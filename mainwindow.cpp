#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::prepare_con()
{

}

void MainWindow::start_ping()
{
    auto ping_label = ui->ping_label;
    auto& data = this->data;
    std::thread ping_thread([ping_label, data]
    {
        while (data.run)
        {

        }
    });

}
