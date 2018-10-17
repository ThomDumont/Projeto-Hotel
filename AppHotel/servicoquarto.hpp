#ifndef SERVICOQUARTO_HPP
#define SERVICOQUARTO_HPP

#include <QDialog>

namespace Ui {
class servicoquarto;
}

class servicoquarto : public QDialog
{
    Q_OBJECT

public:
    explicit servicoquarto(QWidget *parent = nullptr);
    ~servicoquarto();

private:
    Ui::servicoquarto *ui;
};

#endif // SERVICOQUARTO_HPP
