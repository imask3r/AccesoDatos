#include <QDebug>
#include <QWebSocket>
#include "client.h"

Client::Client()
{
    QTimer::singleShot(0, this, SLOT(go()));
}

Client::~Client()
{
    delete m_webSocket;
}

void Client::go()
{
    m_webSocket = new QWebSocket();
    connect(m_webSocket, SIGNAL(connected()), this, SLOT(connected()));
    connect(m_webSocket, SIGNAL(disconnected()), this, SLOT(disconnected()));
    m_webSocket->open(m_uri);
}


void Client::connected()
{
    qDebug() << "Conectado";
    m_isConnected = true;
    sendMessage("Hola, estamos conectados");
}

void Client::disconnected()
{
    qDebug() << "Desconectado";
    m_isConnected = false;
}

void Client::sendMessage(const QString &message) const
{

    if (m_isConnected)
    {
        m_webSocket->sendTextMessage(message);
        qDebug() << "Mensaje enviado:" << message;
    }
}

