#ifndef CONFIRAM_REMOVE_HPP
#define CONFIRAM_REMOVE_HPP

#include <QDialog>

namespace Ui {
class confiram_remove;
}

class confiram_remove : public QDialog
{
    Q_OBJECT

public:
    explicit confiram_remove(QWidget *parent = nullptr);
    ~confiram_remove();

private:
    Ui::confiram_remove *ui;
};

#endif // CONFIRAM_REMOVE_HPP
