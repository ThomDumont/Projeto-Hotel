#ifndef BUSCA_HPP
#define BUSCA_HPP

#include <QDialog>

namespace Ui {
class busca;
}

class busca : public QDialog
{
    Q_OBJECT

public:
    explicit busca(QWidget *parent = nullptr);
    ~busca();

private slots:
    void on_btnBuscar_clicked();

private:
    Ui::busca *ui;
};

#endif // BUSCA_HPP
