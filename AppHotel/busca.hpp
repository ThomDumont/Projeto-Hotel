#ifndef BUSCA_HPP
#define BUSCA_HPP

#include <QDialog>
#include <QtCore>
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
    QFile *arquivo;
    QTextStream stream;

};

#endif // BUSCA_HPP
