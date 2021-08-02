#ifndef MAINWINDOW_H
#include "stdafx.h"
#include <thread>
#define MAINWINDOW_H
namespace Ui {
class MainWindow;
}
struct Data
{
    int ping = 0;
    bool run = true;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Data data;
    Ui::MainWindow *ui;
    void prepare_con();
private slots:
    void start_ping();
signals:
    void ping_started();
};

#endif // MAINWINDOW_H
