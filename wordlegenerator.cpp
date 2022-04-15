#include "wordlegenerator.h"

#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

wordlegenerator::wordlegenerator()
{
}

string wordlegenerator::generateWord()
{
    ifstream File(":/valid-wordle-words.txt");

    srand(time(0));
    int random = rand() % 12972;
    int numberOfLines = 0;

    string line;
    while(getline(File, line)) {
        ++numberOfLines;
        if(numberOfLines == random) {
            //Makes it caps
            transform(line.begin(), line.end(),line.begin(), ::toupper);
            return line;
            break;
        }
    }

    //failsafe
    string failsafe = "HAPPY";
    return failsafe;
}
