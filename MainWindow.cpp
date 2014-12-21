#include <QFileDialog>
#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setFixedSize( this->size() );

    connect( this, SIGNAL( signalLoadObject( QString ) ),
             ui->sceneWidget, SLOT( slotLoadObject( QString ) ) );

    connect( ui->sceneWidget, SIGNAL( signalSetStatus( QString ) ),
             this, SLOT( slotSetStatusText( QString ) ) );

    ui->statusBar->addPermanentWidget( &m_statusText, 1 );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionLoad_triggered()
{
    QString fullFileName = QFileDialog::getOpenFileName( this,
                                                         tr( "Select File" ),
                                                         QDir::currentPath(),
                                                         tr( "Observer Format Files (*.observerFormat)" ) );
    emit signalLoadObject( fullFileName );
}

void MainWindow::slotSetStatusText( const QString &text )
{
    m_statusText.setText( text );
}
