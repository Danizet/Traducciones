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
    const double num1 = ui->inNum1->value();
    const double num2 = ui->inNum2->value();
    double resultado = 0.0;
    switch(ui->inOperacion->currentIndex()){
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
        if(num2 == 0){
            QMessageBox::warning(this,
                                 tr("Error"),
                                 tr("No se puede dividir para 0"));
            return;
        }
        resultado = num1 / num2;
        break;
    }

    QMessageBox::information(this,
                             tr("Resultado"),
                             tr("El resultado es: %1").arg(resultado));
}





















