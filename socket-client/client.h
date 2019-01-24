#ifndef CLIENT_H
#define CLIENT_H

#include <QTimer>
#include <QObject>
#include <QString>
#include <QtWebSockets/QtWebSockets>



class Client : public QObject
{
    Q_OBJECT


    QString m_uri{"ws://localhost:3344"};
    bool m_isConnected{false};
    QWebSocket *m_webSocket;


public:
    Client();
    ~Client();
    void sendMessage(const QString &message) const;



private slots:
    void go();
    void connected();
    void disconnected();
};

#endif // CLIENT_H
