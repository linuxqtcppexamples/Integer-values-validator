#include "intvalidatorexample.h"
#include "ui_intvalidatorexample.h"

#include <QScopedPointer>

CIntValidatorExample::CIntValidatorExample(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CIntValidatorExample)
{
    ui->setupUi(this);
    setValidators();
}

CIntValidatorExample::~CIntValidatorExample()
{
    delete ui;
}

void CIntValidatorExample::setValidators()
{

    QScopedPointer<QIntValidator> ptheIntValidatorFrom1to100(new QIntValidator);
    ptheIntValidatorFrom1to100->setRange(1,100);
    ui->m_leValueRangeFrom1to100->setValidator(ptheIntValidatorFrom1to100.take());

    QScopedPointer<QIntValidator> ptheIntValidatorFrom1000to100000(new QIntValidator);
    ptheIntValidatorFrom1000to100000->setRange(1000,100000);
    ui->m_leValueRangeFrom1000to100000->setValidator(ptheIntValidatorFrom1000to100000.take());


}
