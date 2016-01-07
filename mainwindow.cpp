#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent* e)
{
}

void MainWindow::newFile()
{
}

void MainWindow::open()
{
}

bool MainWindow::save()
{
    return false;
}

bool MainWindow::saveAs()
{
    return false;
}

void MainWindow::find()
{
}

void MainWindow::goToCell()
{
}

void MainWindow::sort()
{
}

void MainWindow::about()
{
}

void MainWindow::openRecentFile()
{
}

void MainWindow::updateStatusBar()
{
}

void MainWindow::spreadsheetmodified()
{
}

void MainWindow::createActions()
{
}

void MainWindow::createMenus()
{
}

void MainWindow::createContentMenu()
{
}

void MainWindow::createToolBars()
{
}

void MainWindow::createStatusBar()
{
}

void MainWindow::readSettings()
{
}

void MainWindow::writeSettings()
{
}

bool MainWindow::okToContinue()
{
    return false;
}

bool MainWindow::loadFile(const QString& fileName)
{
    return false;
}

bool MainWindow::saveFile(const QString& fileName)
{
    return false;
}

void MainWindow::setCurrentFile(const QString& fileName)
{
}

void MainWindow::updateRecentFileActions()
{
}

QString MainWindow::strippedName(const QString& fullFileName)
{
    return "";
}
