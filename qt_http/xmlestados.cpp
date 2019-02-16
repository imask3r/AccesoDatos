#include "xmlestados.h"
#include "iostream"

xmlestados::xmlestados()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("127.0.0.1");
    db.setPort(5432);
    db.setDatabaseName("svtecnico");
    db.setUserName("usuario");
    db.setPassword("usuario");
    bool ok = db.open();
    QString id[1000];
    QString tecnicoid[1000];
    QString estado[1000];
    int contador = 0;

    int i = 0;

    if (ok) {
        qDebug() << "Conectado OK";

        QSqlQuery query("SELECT * FROM estado_reparacion");

        while (query.next()) {
            contador += 1;
            i++;
            id[i] = query.value(0).toString();
            tecnicoid[i] = query.value(1).toString();
            estado[i] = query.value(2).toString();
        }

    } else {
        qDebug() << "Error de conexion";
    }

    int idmod;
    std::string estadomod;

    QProcess::execute("clear");
    for (i = 0; i <= contador; i++) {
        qDebug() << "ID: " + id[i];
        qDebug() << "ID Tecnico: " + tecnicoid[i];
        qDebug() << "Estado: " + estado[i];
        qDebug() << "-------------------------";
    }
    std::cout << " " << std::endl;
    std::cout << "------ PANEL DE CONTROL DE ESTADOS ------" << std::endl;
    std::cout << "Escribe el numero de id del estado que quieres modificar" << std::endl;
    std::cin >> idmod;
    std::cout << "Has escogido el estado número " << idmod << std::endl;
    std::cout << "Escribe el estado que quieres introducir a esta orden:" << std::endl;
    std::cin >> estadomod;
    std::cout << "Nuevo estado para la ordern " << idmod << " :" << estadomod << std::endl;

    if (idmod == "" || estadomod == "") {
        std::cout << "No has seleccionado una opción válida" << std::endl;
    } else {
        //QSqlQuery insert("INSERT INTO  FROM estado_reparacion"); COMPLETARRRR
    }
}
