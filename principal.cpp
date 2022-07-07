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
        if(num2 = 0){
            QMessageBox::warning(this,
                                 "Error",
                                 "No se puede dividir para 0");
        }
        resultado = num1 / num2;
    default:
        break;
    }

    QMessageBox::information(this,
                             tr("Calculo"),
                             tr("El resultado es: %1").arg(resultado));
                             //QString::number(resultado));

}


/*
 * tenemos la aplicacion, la app, en qt todo se rije en el .pro
 *  es el q dice todo sobre el proyecto, ahi lo unico que se modificara es translations
 * ahi estan los nombres de los archivos .ts (archivo de lenguaje)
 * cojen de todos los archivos, pero en el archivo .cpp, los textos deben estar entre "tr()"
 * lupdate, es el que coje los archivos de traduccion, coje todo interfaces, todo, genera
 * un archivo tipo: archivo_en.ts si lo añadiste en traslantios
 *
 * El archivo tendra su idioma original
 *
 * En QT 5 linguist muestra donde esta el texto exacto para cambiar de la interfaz del texto original (leanguaje)
 * al texto destino (otro idioma), sobre el mismo archivo lo modifica
 *
 * lrelease compila esos codigos .xml (<  >) y genera archivos compilados que son archivos .qm son archivos binarios
 * no se pueden arbir
 *
 * acabas la aplicacion
 * agregas los idiomas
 * ejecutas lupdate
 * la aplicacion como tal
 * el lrelease
 * 6 la aplicacion final
 *
 *
 *
 * */






















