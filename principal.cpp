#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}


void Principal::on_cmdCalcular_released()
{
    calcular();
}

void Principal::on_action_Calcular_triggered()
{
    calcular();
}

void Principal::calcular()
{
    double num1 = ui->inNum1->value();
    double num2 = ui->inNum2->value();

    double resultado = 0.0;
    //Aplicacion terminada commit

    switch (ui->inOperacion->currentIndex()) {
    case 0:
        resultado = num1 + num2;
        break;
    case 1:
        resultado = num1 - num2;
        break;
    case 2:
        resultado = num1 * num2;
        break;
    case 3:
        resultado = num1 / num2;
    default:
        break;
    }

    QMessageBox::information(this,
                             "Calculo",
                             "El resultado es: " +
                             QString::number(resultado));

}
