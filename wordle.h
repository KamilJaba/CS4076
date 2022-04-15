#ifndef WORDLE_H
#define WORDLE_H

#include <QMainWindow>
#include <string>
#include <QLabel>
#include <QString>
#include <wordlegenerator.h>

using namespace std;

namespace Ui {
class Wordle;
}

class Wordle : public QMainWindow
{
    Q_OBJECT

public:
    explicit Wordle(QWidget *parent = nullptr);
    ~Wordle();
    string guesses[5];
    int usedLabelCount;
    int completedGuesses;
    string currWordle;
    void setWordle(string input);
    void generateNewWordle();
    void resetWordle();
    QString currInput;
    void inputChar(QString input);


private slots:

    void on_QButton_released();

    void on_EnterButton_released();

    void on_WButton_released();

    void on_EButton_clicked();

    void on_RButton_released();

    void on_TButton_clicked();

    void on_YButton_clicked();

    void on_UButton_clicked();

    void on_IButton_clicked();

    void on_OButton_clicked();

    void on_PButton_clicked();

    void on_AButton_clicked();

    void on_SButton_clicked();

    void on_DButton_clicked();

    void on_FButton_clicked();

    void on_GButton_clicked();

    void on_HButton_clicked();

    void on_JButton_clicked();

    void on_KButton_clicked();

    void on_LButton_clicked();

    void on_ZButton_clicked();

    void on_XButton_clicked();

    void on_CButton_clicked();

    void on_VButton_clicked();

    void on_BButton_clicked();

    void on_NButton_clicked();

    void on_MButton_clicked();

    void on_BackspaceButton_clicked();

private:
    Ui::Wordle *ui;
};

#endif // WORDLE_H
