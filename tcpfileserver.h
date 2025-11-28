#ifndef TCPFILESERVER_H
#define TCPFILESERVER_H

#include <QDialog>
#include <QtNetwork>
#include <QtWidgets>

class TCPfileServer : public QDialog
{
    Q_OBJECT

public:
    TCPfileServer(QWidget *parent = nullptr);
    ~TCPfileServer();
public slots:
    void start();
    void acceptConnection();
    void updateServerProgress();
    void displayError(QAbstractSlider::SocketError socketError);
private:
    QProgressBar   *serverProgressBar;
    QLabel         *serverStatusLabel;
    QPushButton    *startButton;
    QPushButton    *quitButton;
    QDialogButtonBox *buttonBox;

    QTcpServer     tcpServer;
    QTcpSocket    *tcpServerConnection;
    qint64         totalBytes;
    qint64         byteReceived;
    qint64         fileNameSize;
    QString        fileName;
    QFile         *localFile;
    QByteArray     inBlock;
};
#endif // TCPFILESERVER_H
