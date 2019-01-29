#include <QtSql>
#include <QSqlQuery>
#include <QDebug>
#include "xmlcreator.h"


xmlcreator::xmlcreator()
{

    /*QSqlQuery query("SELECT nombreDispositivo FROM disp_disponibles");
    while (query.next()) {
        QString modelos = query.value(0).toString();

     }*/




    QFile xml("moviles.xml");
    qDebug() << "XML: moviles.xml creado";
    xml.open(QIODevice::WriteOnly);

    QXmlStreamWriter writerXml(&xml);
    writerXml.setAutoFormatting(true);
    writerXml.writeStartDocument();

    /*-----------------------*/
    writerXml.writeStartElement("moviles");

    writerXml.writeStartElement("movil");
    writerXml.writeAttribute("modelo", "iPhone 8");
    writerXml.writeEndElement();

    writerXml.writeEndElement();
    /*------------------------*/


}
