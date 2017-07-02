#ifndef INTVALIDATOREXAMPLE_H
#define INTVALIDATOREXAMPLE_H

#include <QMainWindow>

namespace Ui {
class CIntValidatorExample;
}

class CIntValidatorExample : public QMainWindow
{
    Q_OBJECT

public:

    explicit CIntValidatorExample(QWidget *parent = 0);
    ~CIntValidatorExample();

private:

    Ui::CIntValidatorExample *ui;
    void setValidators();
};

#endif // INTVALIDATOREXAMPLE_H
