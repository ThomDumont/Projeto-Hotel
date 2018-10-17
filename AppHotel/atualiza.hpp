#ifndef ATUALIZA_HPP
#define ATUALIZA_HPP

#include <QDialog>

namespace Ui {
class atualiza;
}

class atualiza : public QDialog
{
    Q_OBJECT

public:
    explicit atualiza(QWidget *parent = nullptr);
    ~atualiza();

private:
    Ui::atualiza *ui;
};

#endif // ATUALIZA_HPP
