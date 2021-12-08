#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "functionevaluator.h"
#include <QtCharts>
#include <QDebug>

using namespace QtCharts;

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

void MainWindow::on_plotButton_clicked()
{
    QString equation = ui->equLine->text();
    float min_x = ui->minBox->value(), max_x = ui->maxBox->value();

    FunctionEvaluator equ;
    equ.setEquation(equation);
    equ.setMinX(min_x);
    equ.setMaxX(max_x);
}
