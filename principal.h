#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QMessageBox>
#include <QApplication>
#include <QTranslator>
#include <QInputDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

private slots:
    void on_cmdCalcular_released();

    void on_action_Calcular_triggered();

private:
    Ui::Principal *ui;
    void calcular();
};
#endif // PRINCIPAL_H
