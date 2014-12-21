#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

signals:
    void signalLoadObject( const QString &fullFileName );

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionLoad_triggered();
    void slotSetStatusText( const QString &text );

private:
    Ui::MainWindow *ui;
    QLabel m_statusText;
};

#endif // MAINWINDOW_H
