#ifndef TCPFILESERVER_H
#define TCPFILESERVER_H

#include <QDialog>

class TCPfileServer : public QDialog
{
    Q_OBJECT

public:
    TCPfileServer(QWidget *parent = nullptr);
    ~TCPfileServer();
};
#endif // TCPFILESERVER_H
