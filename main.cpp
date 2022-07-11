#include "principal.h"





int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Objeto para manejar las traducciones
    QTranslator traducion;
    // Solicitando al usuario que seleccione un idioma
    QStringList idiomas;
    idiomas << "Francés" << "Inglés" << "Japones" << "Español";
    QString idiomaSeleccionado = QInputDialog::getItem(NULL,
                                                       "Idioma",
                                                       "Seleccione un idioma",
                                                       idiomas);
    // Dependiendo del idioma seleccionado, carga el archivo de traducción
    if (idiomaSeleccionado == "Francés"){
        traducion.load(":/Calculadora_fr.qm");
    }else if (idiomaSeleccionado == "Inglés"){
        traducion.load(":/Calculadora_en_US.qm");
    }else {
        traducion.load(":/Calculadora_ja.qm");
    }
    // Si es diferente de español, se instala la traducción en TODA la aplicación
    if (idiomaSeleccionado != "Español"){
        a.installTranslator(&traducion);
    }
    // Muestra la ventana principal
    Principal w;
    w.show();
    return a.exec();

}




/*
 *    }else {
        traducion.load(":/Calculadora_ja.qm");
 * */
