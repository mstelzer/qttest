#include "gotocelldialog.h"
#include "ui_gotocelldialog.h"

#include <QPushButton>

GoToCellDialog::GoToCellDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GoToCellDialog)
{
    ui->setupUi(this);

    QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
    ui->lineEdit->setValidator(new QRegExpValidator(regExp, this));

    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
}

GoToCellDialog::~GoToCellDialog()
{
    delete ui;
}

void GoToCellDialog::textChanged()
{
    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(ui->lineEdit->hasAcceptableInput());
}
