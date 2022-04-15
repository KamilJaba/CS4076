#include "wordle.h"
#include "ui_wordle.h"
#include <cstring>
#include <wordlegenerator.h>

using namespace std;

Wordle::Wordle(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Wordle)
{
    ui->setupUi(this);
    usedLabelCount = 0;
    currInput = "";
    currWordle = "HARPY";
    completedGuesses = 0;
}

Wordle::~Wordle()
{
    //generateNewWordle();
    delete ui;
}

void Wordle::setWordle(string input)
{
    this->currWordle = input;
}

void Wordle::generateNewWordle()
{
    wordlegenerator *temp = new wordlegenerator();
    string newWordle = temp->generateWord();
    this->currWordle = newWordle;
}

void Wordle::inputChar(QString input)
{
    if(usedLabelCount >= 0 && usedLabelCount <= 4) {
        if(usedLabelCount == 0) {
            usedLabelCount += 1;
            ui->Square1a->setText(input);
        }
        else if(usedLabelCount == 1) {
            usedLabelCount += 1;
            ui->Square1b->setText(input);
        }
        else if(usedLabelCount == 2) {
            usedLabelCount += 1;
            ui->Square1c->setText(input);
        }
        else if(usedLabelCount == 3) {
            usedLabelCount += 1;
            ui->Square1d->setText(input);
        }
        else if(usedLabelCount == 4) {
            ui->Square1e->setText(input);
        }
    }
    if(usedLabelCount >= 5 && usedLabelCount <= 9) {
        if(usedLabelCount == 5) {
            usedLabelCount += 1;
            ui->Square2a->setText(input);
        }
        else if(usedLabelCount == 6) {
            usedLabelCount += 1;
            ui->Square2b->setText(input);
        }
        else if(usedLabelCount == 7) {
            usedLabelCount += 1;
            ui->Square2c->setText(input);
        }
        else if(usedLabelCount == 8) {
            usedLabelCount += 1;
            ui->Square2d->setText(input);
        }
        else if(usedLabelCount == 9) {
            ui->Square2e->setText(input);
        }
    }
    if(usedLabelCount >= 10 && usedLabelCount <= 14) {
        if(usedLabelCount == 10) {
            usedLabelCount += 1;
            ui->Square3a->setText(input);
        }
        else if(usedLabelCount == 11) {
            usedLabelCount += 1;
            ui->Square3b->setText(input);
        }
        else if(usedLabelCount == 12) {
            usedLabelCount += 1;
            ui->Square3c->setText(input);
        }
        else if(usedLabelCount == 13) {
            usedLabelCount += 1;
            ui->Square3d->setText(input);
        }
        else if(usedLabelCount == 14) {
            ui->Square3e->setText(input);
        }
    }
    if(usedLabelCount >= 15 && usedLabelCount <= 19) {
        if(usedLabelCount == 15) {
            usedLabelCount += 1;
            ui->Square4a->setText(input);
        }
        else if(usedLabelCount == 16) {
            usedLabelCount += 1;
            ui->Square4b->setText(input);
        }
        else if(usedLabelCount == 17) {
            usedLabelCount += 1;
            ui->Square4c->setText(input);
        }
        else if(usedLabelCount == 18) {
            usedLabelCount += 1;
            ui->Square4d->setText(input);
        }
        else if(usedLabelCount == 19) {
            ui->Square4e->setText(input);
        }
    }
    if(usedLabelCount >= 20 && usedLabelCount <= 24) {
        if(usedLabelCount == 20) {
            usedLabelCount += 1;
            ui->Square5a->setText(input);
        }
        else if(usedLabelCount == 21) {
            usedLabelCount += 1;
            ui->Square5b->setText(input);
        }
        else if(usedLabelCount == 22) {
            usedLabelCount += 1;
            ui->Square5c->setText(input);
        }
        else if(usedLabelCount == 23) {
            usedLabelCount += 1;
            ui->Square5d->setText(input);
        }
        else if(usedLabelCount == 24) {
            ui->Square5e->setText(input);
        }
    }

}

void Wordle::on_BackspaceButton_clicked()
{
    if(usedLabelCount >= 0 && usedLabelCount <= 25) {
        if(usedLabelCount == 0 + 1) {
            ui->Square1a->clear();
        }
        else if(usedLabelCount == 1 + 1) {
            ui->Square1b->clear();
        }
        else if(usedLabelCount == 2 + 1) {
            ui->Square1c->clear();
        }
        else if(usedLabelCount == 3 + 1) {
            ui->Square1d->clear();
        }
        else if(usedLabelCount == 4 + 1) {
            ui->Square1e->clear();
        }
        else if(usedLabelCount == 5 + 1) {
            ui->Square2a->clear();
        }
        else if(usedLabelCount == 6 + 1) {
            ui->Square2b->clear();
        }
        else if(usedLabelCount == 7 + 1) {
            ui->Square2c->clear();
        }
        else if(usedLabelCount == 8 + 1) {
            ui->Square2d->clear();
        }
        else if(usedLabelCount == 9 + 1) {
            ui->Square2e->clear();
        }
        else if(usedLabelCount == 10 + 1) {
            ui->Square3a->clear();
        }
        else if(usedLabelCount == 11 + 1) {
            ui->Square3b->clear();
        }
        else if(usedLabelCount == 12 + 1) {
            ui->Square3c->clear();
        }
        else if(usedLabelCount == 13 + 1) {
            ui->Square3d->clear();
        }
        else if(usedLabelCount == 14 + 1) {
            ui->Square3e->clear();
        }
        else if(usedLabelCount == 15 + 1) {
            ui->Square4a->clear();
        }
        else if(usedLabelCount == 16 + 1) {
            ui->Square4b->clear();
        }
        else if(usedLabelCount == 17 + 1) {
            ui->Square4c->clear();
        }
        else if(usedLabelCount == 18 + 1) {
            ui->Square4d->clear();
        }
        else if(usedLabelCount == 19 + 1) {
            ui->Square4e->clear();
        }
        else if(usedLabelCount == 20 + 1) {
            ui->Square5a->clear();
        }
        else if(usedLabelCount == 21 + 1) {
            ui->Square5b->clear();
        }
        else if(usedLabelCount == 22 + 1) {
            ui->Square5c->clear();
        }
        else if(usedLabelCount == 23 + 1) {
            ui->Square5d->clear();
        }
        else if(usedLabelCount == 24 + 1) {
            ui->Square5e->clear();
        }
        if(usedLabelCount == 4 || usedLabelCount == 9 || usedLabelCount == 14 || usedLabelCount == 19 || usedLabelCount == 24) {
            completedGuesses -= 1;
        }
        usedLabelCount -= 1;

    }
}


void Wordle::on_EnterButton_released()
{
    if(usedLabelCount == 4 || usedLabelCount == 9 || usedLabelCount == 14 || usedLabelCount == 19 || usedLabelCount == 24) {
        usedLabelCount += 1;
        completedGuesses += 1;
        if (completedGuesses == 1) {
            QString inputtedAnswer[5];
            inputtedAnswer[0] = ui->Square1a->text();
            inputtedAnswer[1] = ui->Square1b->text();
            inputtedAnswer[2] = ui->Square1c->text();
            inputtedAnswer[3] = ui->Square1d->text();
            inputtedAnswer[4] = ui->Square1e->text();

            char char_array[5];
            string inputParsed = "";
            for(int i = 0; i <= 4; i++){
                inputParsed += inputtedAnswer[i].toStdString();
            }
            if (inputParsed == currWordle) {
                    ui->Square1a->clear();
                    ui->Square1b->clear();
                    ui->Square1c->clear();
                    ui->Square1d->clear();
                    ui->Square1e->clear();
                    ui->Square2a->clear();
                    ui->Square2b->clear();
                    ui->Square2c->clear();
                    ui->Square2d->clear();
                    ui->Square2e->clear();
                    ui->Square3a->clear();
                    ui->Square3b->clear();
                    ui->Square3c->clear();
                    ui->Square3d->clear();
                    ui->Square3e->clear();
                    ui->Square4a->clear();
                    ui->Square4b->clear();
                    ui->Square4c->clear();
                    ui->Square4d->clear();
                    ui->Square4e->clear();
                    ui->Square5a->clear();
                    ui->Square5b->clear();
                    ui->Square5c->clear();
                    ui->Square5d->clear();
                    ui->Square5e->clear();
                    usedLabelCount = 0;
                    completedGuesses = 0;
                    currInput = "";
                    generateNewWordle();
                }
            strcpy(char_array, currWordle.c_str());
            if(char_array[0] == inputtedAnswer[0] || char_array[0] == inputtedAnswer[1] || char_array[0] == inputtedAnswer[2] || char_array[0] == inputtedAnswer[3]
                     || char_array[0] == inputtedAnswer[4]){
                if(char_array[0] == inputtedAnswer[0]) {
                    ui->Square1a->setText(inputtedAnswer[0] + " was correct!");
                }
                if(char_array [0] == inputtedAnswer[1]) {
                    ui->Square1b->setText(inputtedAnswer[1] + " in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[2]) {
                    ui->Square1c->setText(inputtedAnswer[2] + " in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[3]) {
                    ui->Square1d->setText(inputtedAnswer[3] + " in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[4]) {
                    ui->Square1e->setText(inputtedAnswer[4] + " in the wrong place!");
                }
            }
            if(char_array[1] == inputtedAnswer[0] || char_array[1] == inputtedAnswer[1] || char_array[1] == inputtedAnswer[1] || char_array[1] == inputtedAnswer[3]
                     || char_array[1] == inputtedAnswer[4]){
                if(char_array[1] == inputtedAnswer[0]) {
                    ui->Square1a->setText(inputtedAnswer[0] + " in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[1]) {
                    ui->Square1b->setText(inputtedAnswer[1] + " was correct!");
                }
                if(char_array [1] == inputtedAnswer[2]) {
                    ui->Square1c->setText(inputtedAnswer[2] + " in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[3]) {
                    ui->Square1d->setText(inputtedAnswer[3] + " in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[4]) {
                    ui->Square1e->setText(inputtedAnswer[4] + " in the wrong place!");
                }
            }
            if(char_array[2] == inputtedAnswer[0] || char_array[2] == inputtedAnswer[1] || char_array[2] == inputtedAnswer[1] || char_array[2] == inputtedAnswer[3]
                     || char_array[2] == inputtedAnswer[4]){
                if(char_array[2] == inputtedAnswer[0]) {
                    ui->Square1a->setText(inputtedAnswer[0] + " in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[1]) {
                    ui->Square1b->setText(inputtedAnswer[1] + " in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[2]) {
                    ui->Square1c->setText(inputtedAnswer[2] + " was correct!");
                }
                if(char_array [2] == inputtedAnswer[3]) {
                    ui->Square1d->setText(inputtedAnswer[3] + " in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[4]) {
                    ui->Square1e->setText(inputtedAnswer[4] + " in the wrong place!");
                }
            }
            if(char_array[3] == inputtedAnswer[0] || char_array[3] == inputtedAnswer[1] || char_array[3] == inputtedAnswer[1] || char_array[3] == inputtedAnswer[3]
                     || char_array[3] == inputtedAnswer[4]){
                if(char_array[3] == inputtedAnswer[0]) {
                    ui->Square1a->setText(inputtedAnswer[0] + " in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[1]) {
                    ui->Square1b->setText(inputtedAnswer[1] + " in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[2]) {
                    ui->Square1c->setText(inputtedAnswer[2] + " in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[3]) {
                    ui->Square1d->setText(inputtedAnswer[3] + " was correct!");
                }
                if(char_array [3] == inputtedAnswer[4]) {
                    ui->Square1e->setText(inputtedAnswer[4] + " in the wrong place!");
                }
            }
            if(char_array[4] == inputtedAnswer[0] || char_array[4] == inputtedAnswer[1] || char_array[4] == inputtedAnswer[1] || char_array[4] == inputtedAnswer[3]
                     || char_array[4] == inputtedAnswer[4]){
                if(char_array[4] == inputtedAnswer[0]) {
                    ui->Square1a->setText(inputtedAnswer[0] + " in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[1]) {
                    ui->Square1b->setText(inputtedAnswer[1] + " in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[2]) {
                    ui->Square1c->setText(inputtedAnswer[2] + " in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[3]) {
                    ui->Square1d->setText(inputtedAnswer[3] + " in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[4]) {
                    ui->Square1e->setText(inputtedAnswer[4] + " was correct!");
                }
            }


        }
        else if (completedGuesses == 1) {
            QString inputtedAnswer[5];
            inputtedAnswer[0] = ui->Square1a->text();
            inputtedAnswer[1] = ui->Square1b->text();
            inputtedAnswer[2] = ui->Square1c->text();
            inputtedAnswer[3] = ui->Square1d->text();
            inputtedAnswer[4] = ui->Square1e->text();

            char char_array[5];
            string inputParsed = "";
            for(int i = 0; i <= 4; i++){
                inputParsed += inputtedAnswer[i].toStdString();
            }
            if (inputParsed == currWordle) {
                ui->Square1a->clear();
                ui->Square1b->clear();
                ui->Square1c->clear();
                ui->Square1d->clear();
                ui->Square1e->clear();
                ui->Square2a->clear();
                ui->Square2b->clear();
                ui->Square2c->clear();
                ui->Square2d->clear();
                ui->Square2e->clear();
                ui->Square3a->clear();
                ui->Square3b->clear();
                ui->Square3c->clear();
                ui->Square3d->clear();
                ui->Square3e->clear();
                ui->Square4a->clear();
                ui->Square4b->clear();
                ui->Square4c->clear();
                ui->Square4d->clear();
                ui->Square4e->clear();
                ui->Square5a->clear();
                ui->Square5b->clear();
                ui->Square5c->clear();
                ui->Square5d->clear();
                ui->Square5e->clear();
                usedLabelCount = 0;
                completedGuesses = 0;
                currInput = "MINES";
                //generateNewWordle(); TODO
                ui->LevelLabel->setText("LEVEL 2");
            }
            strcpy(char_array, currWordle.c_str());
            if(char_array[0] == inputtedAnswer[0] || char_array[0] == inputtedAnswer[1] || char_array[0] == inputtedAnswer[2] || char_array[0] == inputtedAnswer[3]
                     || char_array[0] == inputtedAnswer[4]){
                if(char_array[0] == inputtedAnswer[0]) {
                    ui->Square2a->setText(inputtedAnswer[0] + " was correct!");
                }
                if(char_array [0] == inputtedAnswer[1]) {
                    ui->Square2b->setText(inputtedAnswer[1] + " in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[2]) {
                    ui->Square2c->setText(inputtedAnswer[2] + " in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[3]) {
                    ui->Square2d->setText(inputtedAnswer[3] + " in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[4]) {
                    ui->Square2e->setText(inputtedAnswer[4] + " in the wrong place!");
                }
            }
            if(char_array[1] == inputtedAnswer[0] || char_array[1] == inputtedAnswer[1] || char_array[1] == inputtedAnswer[1] || char_array[1] == inputtedAnswer[3]
                     || char_array[1] == inputtedAnswer[4]){
                if(char_array[1] == inputtedAnswer[0]) {
                    ui->Square2a->setText(inputtedAnswer[0] + " in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[1]) {
                    ui->Square2b->setText(inputtedAnswer[1] + " was correct!");
                }
                if(char_array [1] == inputtedAnswer[2]) {
                    ui->Square2c->setText(inputtedAnswer[2] + " in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[3]) {
                    ui->Square2d->setText(inputtedAnswer[3] + " in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[4]) {
                    ui->Square2e->setText(inputtedAnswer[4] + " in the wrong place!");
                }
            }
            if(char_array[2] == inputtedAnswer[0] || char_array[2] == inputtedAnswer[1] || char_array[2] == inputtedAnswer[1] || char_array[2] == inputtedAnswer[3]
                     || char_array[2] == inputtedAnswer[4]){
                if(char_array[2] == inputtedAnswer[0]) {
                    ui->Square2a->setText(inputtedAnswer[0] + " in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[1]) {
                    ui->Square2b->setText(inputtedAnswer[1] + " in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[2]) {
                    ui->Square2c->setText(inputtedAnswer[2] + " was correct!");
                }
                if(char_array [2] == inputtedAnswer[3]) {
                    ui->Square2d->setText(inputtedAnswer[3] + " in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[4]) {
                    ui->Square2e->setText(inputtedAnswer[4] + " in the wrong place!");
                }
            }
            if(char_array[3] == inputtedAnswer[0] || char_array[3] == inputtedAnswer[1] || char_array[3] == inputtedAnswer[1] || char_array[3] == inputtedAnswer[3]
                     || char_array[3] == inputtedAnswer[4]){
                if(char_array[3] == inputtedAnswer[0]) {
                    ui->Square2a->setText(inputtedAnswer[0] + " in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[1]) {
                    ui->Square2b->setText(inputtedAnswer[1] + " in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[2]) {
                    ui->Square2c->setText(inputtedAnswer[2] + " in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[3]) {
                    ui->Square2d->setText(inputtedAnswer[3] + " was correct!");
                }
                if(char_array [3] == inputtedAnswer[4]) {
                    ui->Square2e->setText(inputtedAnswer[4] + " in the wrong place!");
                }
            }
            if(char_array[4] == inputtedAnswer[0] || char_array[4] == inputtedAnswer[1] || char_array[4] == inputtedAnswer[1] || char_array[4] == inputtedAnswer[3]
                     || char_array[4] == inputtedAnswer[4]){
                if(char_array[4] == inputtedAnswer[0]) {
                    ui->Square2a->setText(inputtedAnswer[0] + " in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[1]) {
                    ui->Square2b->setText(inputtedAnswer[1] + " in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[2]) {
                    ui->Square2c->setText(inputtedAnswer[2] + " in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[3]) {
                    ui->Square2d->setText(inputtedAnswer[3] + " in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[4]) {
                    ui->Square2e->setText(inputtedAnswer[4] + " was correct!");
                }
            }


        }
        else if (completedGuesses == 2) {
            QString inputtedAnswer[5];
            inputtedAnswer[0] = ui->Square1a->text();
            inputtedAnswer[1] = ui->Square1b->text();
            inputtedAnswer[2] = ui->Square1c->text();
            inputtedAnswer[3] = ui->Square1d->text();
            inputtedAnswer[4] = ui->Square1e->text();

            char char_array[5];
            string inputParsed = "";
            for(int i = 0; i <= 4; i++){
                inputParsed += inputtedAnswer[i].toStdString();
            }
            if (inputParsed == currWordle) {
                ui->Square1a->clear();
                ui->Square1b->clear();
                ui->Square1c->clear();
                ui->Square1d->clear();
                ui->Square1e->clear();
                ui->Square2a->clear();
                ui->Square2b->clear();
                ui->Square2c->clear();
                ui->Square2d->clear();
                ui->Square2e->clear();
                ui->Square3a->clear();
                ui->Square3b->clear();
                ui->Square3c->clear();
                ui->Square3d->clear();
                ui->Square3e->clear();
                ui->Square4a->clear();
                ui->Square4b->clear();
                ui->Square4c->clear();
                ui->Square4d->clear();
                ui->Square4e->clear();
                ui->Square5a->clear();
                ui->Square5b->clear();
                ui->Square5c->clear();
                ui->Square5d->clear();
                ui->Square5e->clear();
                usedLabelCount = 0;
                completedGuesses = 0;
                currInput = "MINES";
                //generateNewWordle(); TODO
                ui->LevelLabel->setText("LEVEL 2");
            }
            strcpy(char_array, currWordle.c_str());
            if(char_array[0] == inputtedAnswer[0] || char_array[0] == inputtedAnswer[1] || char_array[0] == inputtedAnswer[2] || char_array[0] == inputtedAnswer[3]
                     || char_array[0] == inputtedAnswer[4]){
                if(char_array[0] == inputtedAnswer[0]) {
                    ui->Square3a->setText(inputtedAnswer[0] + " was correct!");
                }
                if(char_array [0] == inputtedAnswer[1]) {
                    ui->Square3b->setText(inputtedAnswer[1] + " was right but in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[2]) {
                    ui->Square3c->setText(inputtedAnswer[2] + " was right but in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[3]) {
                    ui->Square3d->setText(inputtedAnswer[3] + " was right but in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[4]) {
                    ui->Square3e->setText(inputtedAnswer[4] + " was right but in the wrong place!");
                }
            }
            if(char_array[1] == inputtedAnswer[0] || char_array[1] == inputtedAnswer[1] || char_array[1] == inputtedAnswer[1] || char_array[1] == inputtedAnswer[3]
                     || char_array[1] == inputtedAnswer[4]){
                if(char_array[1] == inputtedAnswer[0]) {
                    ui->Square3a->setText(inputtedAnswer[0] + " was right but in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[1]) {
                    ui->Square3b->setText(inputtedAnswer[1] + " was correct!");
                }
                if(char_array [1] == inputtedAnswer[2]) {
                    ui->Square3c->setText(inputtedAnswer[2] + " was right but in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[3]) {
                    ui->Square3d->setText(inputtedAnswer[3] + " was right but in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[4]) {
                    ui->Square3e->setText(inputtedAnswer[4] + " was right but in the wrong place!");
                }
            }
            if(char_array[2] == inputtedAnswer[0] || char_array[2] == inputtedAnswer[1] || char_array[2] == inputtedAnswer[1] || char_array[2] == inputtedAnswer[3]
                     || char_array[2] == inputtedAnswer[4]){
                if(char_array[2] == inputtedAnswer[0]) {
                    ui->Square3a->setText(inputtedAnswer[0] + " was right but in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[1]) {
                    ui->Square3b->setText(inputtedAnswer[1] + " was right but in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[2]) {
                    ui->Square3c->setText(inputtedAnswer[2] + " was correct!");
                }
                if(char_array [2] == inputtedAnswer[3]) {
                    ui->Square3d->setText(inputtedAnswer[3] + " was right but in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[4]) {
                    ui->Square3e->setText(inputtedAnswer[4] + " was right but in the wrong place!");
                }
            }
            if(char_array[3] == inputtedAnswer[0] || char_array[3] == inputtedAnswer[1] || char_array[3] == inputtedAnswer[1] || char_array[3] == inputtedAnswer[3]
                     || char_array[3] == inputtedAnswer[4]){
                if(char_array[3] == inputtedAnswer[0]) {
                    ui->Square3a->setText(inputtedAnswer[0] + " was right but in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[1]) {
                    ui->Square3b->setText(inputtedAnswer[1] + " was right but in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[2]) {
                    ui->Square3c->setText(inputtedAnswer[2] + " was right but in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[3]) {
                    ui->Square3d->setText(inputtedAnswer[3] + " was correct!");
                }
                if(char_array [3] == inputtedAnswer[4]) {
                    ui->Square3e->setText(inputtedAnswer[4] + " was right but in the wrong place!");
                }
            }
            if(char_array[4] == inputtedAnswer[0] || char_array[4] == inputtedAnswer[1] || char_array[4] == inputtedAnswer[1] || char_array[4] == inputtedAnswer[3]
                     || char_array[4] == inputtedAnswer[4]){
                if(char_array[4] == inputtedAnswer[0]) {
                    ui->Square3a->setText(inputtedAnswer[0] + " was right but in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[1]) {
                    ui->Square3b->setText(inputtedAnswer[1] + " was right but in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[2]) {
                    ui->Square3c->setText(inputtedAnswer[2] + " was right but in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[3]) {
                    ui->Square3d->setText(inputtedAnswer[3] + " was right but in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[4]) {
                    ui->Square3e->setText(inputtedAnswer[4] + " was correct!");
                }
            }


        }
        else if (completedGuesses == 3) {
            QString inputtedAnswer[5];
            inputtedAnswer[0] = ui->Square1a->text();
            inputtedAnswer[1] = ui->Square1b->text();
            inputtedAnswer[2] = ui->Square1c->text();
            inputtedAnswer[3] = ui->Square1d->text();
            inputtedAnswer[4] = ui->Square1e->text();

            char char_array[5];
            string inputParsed = "";
            for(int i = 0; i <= 4; i++){
                inputParsed += inputtedAnswer[i].toStdString();
            }
            if (inputParsed == currWordle) {
                ui->Square1a->clear();
                ui->Square1b->clear();
                ui->Square1c->clear();
                ui->Square1d->clear();
                ui->Square1e->clear();
                ui->Square2a->clear();
                ui->Square2b->clear();
                ui->Square2c->clear();
                ui->Square2d->clear();
                ui->Square2e->clear();
                ui->Square3a->clear();
                ui->Square3b->clear();
                ui->Square3c->clear();
                ui->Square3d->clear();
                ui->Square3e->clear();
                ui->Square4a->clear();
                ui->Square4b->clear();
                ui->Square4c->clear();
                ui->Square4d->clear();
                ui->Square4e->clear();
                ui->Square5a->clear();
                ui->Square5b->clear();
                ui->Square5c->clear();
                ui->Square5d->clear();
                ui->Square5e->clear();
                usedLabelCount = 0;
                completedGuesses = 0;
                currInput = "MINES";
                //generateNewWordle(); TODO
                ui->LevelLabel->setText("LEVEL 2");
            }
            strcpy(char_array, currWordle.c_str());
            if(char_array[0] == inputtedAnswer[0] || char_array[0] == inputtedAnswer[1] || char_array[0] == inputtedAnswer[2] || char_array[0] == inputtedAnswer[3]
                     || char_array[0] == inputtedAnswer[4]){
                if(char_array[0] == inputtedAnswer[0]) {
                    ui->Square4a->setText(inputtedAnswer[0] + " was correct!");
                }
                if(char_array [0] == inputtedAnswer[1]) {
                    ui->Square4b->setText(inputtedAnswer[1] + " was right but in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[2]) {
                    ui->Square4c->setText(inputtedAnswer[2] + " was right but in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[3]) {
                    ui->Square4d->setText(inputtedAnswer[3] + " was right but in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[4]) {
                    ui->Square4e->setText(inputtedAnswer[4] + " was right but in the wrong place!");
                }
            }
            if(char_array[1] == inputtedAnswer[0] || char_array[1] == inputtedAnswer[1] || char_array[1] == inputtedAnswer[1] || char_array[1] == inputtedAnswer[3]
                     || char_array[1] == inputtedAnswer[4]){
                if(char_array[1] == inputtedAnswer[0]) {
                    ui->Square4a->setText(inputtedAnswer[0] + " was right but in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[1]) {
                    ui->Square4b->setText(inputtedAnswer[1] + " was correct!");
                }
                if(char_array [1] == inputtedAnswer[2]) {
                    ui->Square4c->setText(inputtedAnswer[2] + " was right but in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[3]) {
                    ui->Square4d->setText(inputtedAnswer[3] + " was right but in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[4]) {
                    ui->Square4e->setText(inputtedAnswer[4] + " was right but in the wrong place!");
                }
            }
            if(char_array[2] == inputtedAnswer[0] || char_array[2] == inputtedAnswer[1] || char_array[2] == inputtedAnswer[1] || char_array[2] == inputtedAnswer[3]
                     || char_array[2] == inputtedAnswer[4]){
                if(char_array[2] == inputtedAnswer[0]) {
                    ui->Square4a->setText(inputtedAnswer[0] + " was right but in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[1]) {
                    ui->Square4b->setText(inputtedAnswer[1] + " was right but in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[2]) {
                    ui->Square4c->setText(inputtedAnswer[2] + " was correct!");
                }
                if(char_array [2] == inputtedAnswer[3]) {
                    ui->Square4d->setText(inputtedAnswer[3] + " was right but in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[4]) {
                    ui->Square4e->setText(inputtedAnswer[4] + " was right but in the wrong place!");
                }
            }
            if(char_array[3] == inputtedAnswer[0] || char_array[3] == inputtedAnswer[1] || char_array[3] == inputtedAnswer[1] || char_array[3] == inputtedAnswer[3]
                     || char_array[3] == inputtedAnswer[4]){
                if(char_array[3] == inputtedAnswer[0]) {
                    ui->Square4a->setText(inputtedAnswer[0] + " was right but in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[1]) {
                    ui->Square4b->setText(inputtedAnswer[1] + " was right but in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[2]) {
                    ui->Square4c->setText(inputtedAnswer[2] + " was right but in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[3]) {
                    ui->Square4d->setText(inputtedAnswer[3] + " was correct!");
                }
                if(char_array [3] == inputtedAnswer[4]) {
                    ui->Square4e->setText(inputtedAnswer[4] + " was right but in the wrong place!");
                }
            }
            if(char_array[4] == inputtedAnswer[0] || char_array[4] == inputtedAnswer[1] || char_array[4] == inputtedAnswer[1] || char_array[4] == inputtedAnswer[3]
                     || char_array[4] == inputtedAnswer[4]){
                if(char_array[4] == inputtedAnswer[0]) {
                    ui->Square4a->setText(inputtedAnswer[0] + " was right but in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[1]) {
                    ui->Square4b->setText(inputtedAnswer[1] + " was right but in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[2]) {
                    ui->Square4c->setText(inputtedAnswer[2] + " was right but in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[3]) {
                    ui->Square4d->setText(inputtedAnswer[3] + " was right but in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[4]) {
                    ui->Square4e->setText(inputtedAnswer[4] + " was correct!");
                }
            }


        }
        else if (completedGuesses == 4) {
            QString inputtedAnswer[5];
            inputtedAnswer[0] = ui->Square1a->text();
            inputtedAnswer[1] = ui->Square1b->text();
            inputtedAnswer[2] = ui->Square1c->text();
            inputtedAnswer[3] = ui->Square1d->text();
            inputtedAnswer[4] = ui->Square1e->text();

            char char_array[5];
            string inputParsed = "";
            for(int i = 0; i <= 4; i++){
                inputParsed += inputtedAnswer[i].toStdString();
            }
            if (inputParsed == currWordle) {
                ui->Square1a->clear();
                ui->Square1b->clear();
                ui->Square1c->clear();
                ui->Square1d->clear();
                ui->Square1e->clear();
                ui->Square2a->clear();
                ui->Square2b->clear();
                ui->Square2c->clear();
                ui->Square2d->clear();
                ui->Square2e->clear();
                ui->Square3a->clear();
                ui->Square3b->clear();
                ui->Square3c->clear();
                ui->Square3d->clear();
                ui->Square3e->clear();
                ui->Square4a->clear();
                ui->Square4b->clear();
                ui->Square4c->clear();
                ui->Square4d->clear();
                ui->Square4e->clear();
                ui->Square5a->clear();
                ui->Square5b->clear();
                ui->Square5c->clear();
                ui->Square5d->clear();
                ui->Square5e->clear();
                usedLabelCount = 0;
                completedGuesses = 0;
                currInput = "MINES";
                //generateNewWordle(); TODO
                ui->LevelLabel->setText("LEVEL 2");
            }
            strcpy(char_array, currWordle.c_str());
            if(char_array[0] == inputtedAnswer[0] || char_array[0] == inputtedAnswer[1] || char_array[0] == inputtedAnswer[2] || char_array[0] == inputtedAnswer[3]
                     || char_array[0] == inputtedAnswer[4]){
                if(char_array[0] == inputtedAnswer[0]) {
                    ui->Square5a->setText(inputtedAnswer[0] + " was correct!");
                }
                if(char_array [0] == inputtedAnswer[1]) {
                    ui->Square5b->setText(inputtedAnswer[1] + " was right but in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[2]) {
                    ui->Square5c->setText(inputtedAnswer[2] + " was right but in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[3]) {
                    ui->Square5d->setText(inputtedAnswer[3] + " was right but in the wrong place!");
                }
                if(char_array [0] == inputtedAnswer[4]) {
                    ui->Square5e->setText(inputtedAnswer[4] + " was right but in the wrong place!");
                }
            }
            if(char_array[1] == inputtedAnswer[0] || char_array[1] == inputtedAnswer[1] || char_array[1] == inputtedAnswer[1] || char_array[1] == inputtedAnswer[3]
                     || char_array[1] == inputtedAnswer[4]){
                if(char_array[1] == inputtedAnswer[0]) {
                    ui->Square5a->setText(inputtedAnswer[0] + " was right but in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[1]) {
                    ui->Square5b->setText(inputtedAnswer[1] + " was correct!");
                }
                if(char_array [1] == inputtedAnswer[2]) {
                    ui->Square5c->setText(inputtedAnswer[2] + " was right but in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[3]) {
                    ui->Square5d->setText(inputtedAnswer[3] + " was right but in the wrong place!");
                }
                if(char_array [1] == inputtedAnswer[4]) {
                    ui->Square5e->setText(inputtedAnswer[4] + " was right but in the wrong place!");
                }
            }
            if(char_array[2] == inputtedAnswer[0] || char_array[2] == inputtedAnswer[1] || char_array[2] == inputtedAnswer[1] || char_array[2] == inputtedAnswer[3]
                     || char_array[2] == inputtedAnswer[4]){
                if(char_array[2] == inputtedAnswer[0]) {
                    ui->Square5a->setText(inputtedAnswer[0] + " was right but in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[1]) {
                    ui->Square5b->setText(inputtedAnswer[1] + " was right but in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[2]) {
                    ui->Square5c->setText(inputtedAnswer[2] + " was correct!");
                }
                if(char_array [2] == inputtedAnswer[3]) {
                    ui->Square5d->setText(inputtedAnswer[3] + " was right but in the wrong place!");
                }
                if(char_array [2] == inputtedAnswer[4]) {
                    ui->Square5e->setText(inputtedAnswer[4] + " was right but in the wrong place!");
                }
            }
            if(char_array[3] == inputtedAnswer[0] || char_array[3] == inputtedAnswer[1] || char_array[3] == inputtedAnswer[1] || char_array[3] == inputtedAnswer[3]
                     || char_array[3] == inputtedAnswer[4]){
                if(char_array[3] == inputtedAnswer[0]) {
                    ui->Square5a->setText(inputtedAnswer[0] + " was right but in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[1]) {
                    ui->Square5b->setText(inputtedAnswer[1] + " was right but in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[2]) {
                    ui->Square5c->setText(inputtedAnswer[2] + " was right but in the wrong place!");
                }
                if(char_array [3] == inputtedAnswer[3]) {
                    ui->Square5d->setText(inputtedAnswer[3] + " was correct!");
                }
                if(char_array [3] == inputtedAnswer[4]) {
                    ui->Square5e->setText(inputtedAnswer[4] + " was right but in the wrong place!");
                }
            }
            if(char_array[4] == inputtedAnswer[0] || char_array[4] == inputtedAnswer[1] || char_array[4] == inputtedAnswer[1] || char_array[4] == inputtedAnswer[3]
                     || char_array[4] == inputtedAnswer[4]){
                if(char_array[4] == inputtedAnswer[0]) {
                    ui->Square5a->setText(inputtedAnswer[0] + " was right but in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[1]) {
                    ui->Square5b->setText(inputtedAnswer[1] + " was right but in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[2]) {
                    ui->Square5c->setText(inputtedAnswer[2] + " was right but in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[3]) {
                    ui->Square5d->setText(inputtedAnswer[3] + " was right but in the wrong place!");
                }
                if(char_array [4] == inputtedAnswer[4]) {
                    ui->Square5e->setText(inputtedAnswer[4] + " was correct!");
                }
            }


        }
    }
}

void Wordle::on_QButton_released()
{
    QString input = "Q";
    inputChar(input);
}


void Wordle::on_WButton_released()
{
    QString input = "W";
    inputChar(input);
}




void Wordle::on_EButton_clicked()
{
    QString input = "E";
    inputChar(input);
}


void Wordle::on_RButton_released()
{
    QString input = "R";
    inputChar(input);
}


void Wordle::on_TButton_clicked()
{
    QString input = "T";
    inputChar(input);
}


void Wordle::on_YButton_clicked()
{
    QString input = "Y";
    inputChar(input);
}


void Wordle::on_UButton_clicked()
{
    QString input = "U";
    inputChar(input);
}


void Wordle::on_IButton_clicked()
{
    QString input = "I";
    inputChar(input);
}


void Wordle::on_OButton_clicked()
{
    QString input = "O";
    inputChar(input);
}


void Wordle::on_PButton_clicked()
{
    QString input = "P";
    inputChar(input);
}


void Wordle::on_AButton_clicked()
{
    QString input = "A";
    inputChar(input);
}


void Wordle::on_SButton_clicked()
{
    QString input = "S";
    inputChar(input);
}


void Wordle::on_DButton_clicked()
{
    QString input = "D";
    inputChar(input);
}


void Wordle::on_FButton_clicked()
{
    QString input = "F";
    inputChar(input);
}


void Wordle::on_GButton_clicked()
{
    QString input = "G";
    inputChar(input);
}


void Wordle::on_HButton_clicked()
{
    QString input = "H";
    inputChar(input);
}


void Wordle::on_JButton_clicked()
{
    QString input = "J";
    inputChar(input);
}


void Wordle::on_KButton_clicked()
{
    QString input = "K";
    inputChar(input);
}


void Wordle::on_LButton_clicked()
{
    QString input = "L";
    inputChar(input);
}


void Wordle::on_ZButton_clicked()
{
    QString input = "Z";
    inputChar(input);
}


void Wordle::on_XButton_clicked()
{
    QString input = "X";
    inputChar(input);
}


void Wordle::on_CButton_clicked()
{
    QString input = "C";
    inputChar(input);
}


void Wordle::on_VButton_clicked()
{
    QString input = "V";
    inputChar(input);
}


void Wordle::on_BButton_clicked()
{
    QString input = "B";
    inputChar(input);
}


void Wordle::on_NButton_clicked()
{
    QString input = "N";
    inputChar(input);
}


void Wordle::on_MButton_clicked()
{
    QString input = "M";
    inputChar(input);
}

