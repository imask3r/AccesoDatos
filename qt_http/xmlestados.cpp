#include "xmlestados.h"

xmlestados::xmlestados()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("127.0.0.1");
    db.setPort(5432);
    db.setDatabaseName("svtecnico");
    db.setUserName("usuario");
    db.setPassword("usuario");
    bool ok = db.open();
    QString listado[1000];
    QString listado1[1000];
    QString listado2[1000];
    int i = 0;

    if (ok) {
        qDebug() << "Conectado OK";

        QSqlQuery query("SELECT * FROM estado_reparacion");

        while (query.next()) {
            /*for (int i=0 ; i <= 0; i++) {
            listado << query.value(2).toString();
            qDebug() << listado;
            }*/
            listado[i] = query.value(0).toString();
            listado1[i] = query.value(1).toString();
            listado2[i] = query.value(2).toString();
            qDebug() << listado[i];
            //qDebug() << listado[i];
            //qDebug() << query.value(1).toString();
        }

    } else {
        qDebug() << "Error de conexion";
    }

}
