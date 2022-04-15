#ifndef SPAWNROOM_H
#define SPAWNROOM_H

#include <QDialog>

namespace Ui {
class SpawnRoom;
}

class SpawnRoom : public QDialog
{
    Q_OBJECT

public:
    explicit SpawnRoom(QWidget *parent = nullptr);
    ~SpawnRoom();

private:
    Ui::SpawnRoom *ui;
};

#endif // SPAWNROOM_H
