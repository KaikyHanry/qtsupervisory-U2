#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
<<<<<<< HEAD

public slots:
  void putData();
  void tcpConnect();
=======
<<<<<<< HEAD

public slots:
  void putData();
    void tcpConnect();
=======
  void tcpConnect();
public slots:
  void putData();
>>>>>>> b4e92afe2107db95815ef7c9bc0298c0d9e55782
>>>>>>> 5d35064815090b5a47d1ba93051c8bc0041f85c6
private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
};

#endif // MAINWINDOW_H
