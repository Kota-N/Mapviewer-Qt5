#include "maptutorial.h"
#include "ui_maptutorial.h"

MapTutorial::MapTutorial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MapTutorial)
{
    ui->setupUi(this);
}

MapTutorial::~MapTutorial()
{
    delete ui;
}

