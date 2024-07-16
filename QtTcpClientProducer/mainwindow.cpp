#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);
<<<<<<< HEAD
  //tcpConnect();
=======
<<<<<<< HEAD
  //tcpConnect();
=======
  tcpConnect();
>>>>>>> b4e92afe2107db95815ef7c9bc0298c0d9e55782
>>>>>>> 5d35064815090b5a47d1ba93051c8bc0041f85c6

  connect(ui->pushButtonPut,
          SIGNAL(clicked(bool)),
          this,
          SLOT(putData()));
<<<<<<< HEAD
  connect(ui->pushButtonConnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpConnect()));
=======
<<<<<<< HEAD
  connect(ui->pushButtonCon,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpConnect()));
=======
>>>>>>> b4e92afe2107db95815ef7c9bc0298c0d9e55782
>>>>>>> 5d35064815090b5a47d1ba93051c8bc0041f85c6
}

void MainWindow::tcpConnect(){
  socket->connectToHost("127.0.0.1",1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
  }
  else{
    qDebug() << "Disconnected";
  }
}

void MainWindow::putData(){
  QDateTime datetime;
  QString str;
  qint64 msecdate;

  if(socket->state()== QAbstractSocket::ConnectedState){

    msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
    str = "set "+ QString::number(msecdate) + " " +
        QString::number(rand()%35)+"\r\n";

      qDebug() << str;
      qDebug() << socket->write(str.toStdString().c_str())
               << " bytes written";
      if(socket->waitForBytesWritten(3000)){
        qDebug() << "wrote";
      }
  }
}

MainWindow::~MainWindow(){
  delete socket;
  delete ui;
}
