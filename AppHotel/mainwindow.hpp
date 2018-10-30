#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP
#include "les.hpp"
#include "qstring.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    LES<QString> LeLogins();


private slots:
    void on_btnEntrar_clicked();

private:
    Ui::MainWindow *ui;
    LES<QString> v;
};

#endif // MAINWINDOW_HPP
