#ifndef REMOVE_ATUALIZA_HPP
#define REMOVE_ATUALIZA_HPP

#include <QDialog>

namespace Ui {
class remove_atualiza;
}

class remove_atualiza : public QDialog
{
    Q_OBJECT

public:
    explicit remove_atualiza(QWidget *parent = nullptr);
    ~remove_atualiza();

private slots:
    void on_btnAtualizarRA_clicked();

    void on_btnRemoverRA_clicked();

private:
    Ui::remove_atualiza *ui;
};

#endif // REMOVE_ATUALIZA_HPP
