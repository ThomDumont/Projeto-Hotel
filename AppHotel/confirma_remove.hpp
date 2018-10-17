#ifndef CONFIRMA_REMOVE_HPP
#define CONFIRMA_REMOVE_HPP

#include <QDialog>

namespace Ui {
class confirma_remove;
}

class confirma_remove : public QDialog
{
    Q_OBJECT

public:
    explicit confirma_remove(QWidget *parent = nullptr);
    ~confirma_remove();

private:
    Ui::confirma_remove *ui;
};

#endif // CONFIRMA_REMOVE_HPP
