#include "spawnroom.h"
#include "ui_spawnroom.h"

SpawnRoom::SpawnRoom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SpawnRoom)
{
    ui->setupUi(this);
}

SpawnRoom::~SpawnRoom()
{
    delete ui;
}
