#include "project.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <random>
#include <ctime>

using namespace std;
using std::string;

class Typo {

public:
    Typo(string text) {
        this->text = text;
        n = 50;
        counter = 1;
        typoCounter = 1;
        randomNumber = rand() % 12 + 1;
        newRandomNumber = 0;
    }

    void printTypo() {

        while (counter <= n) {

            if (typoCounter == 8 && counter == 100) {
                break;
            }

            if (counter == randomNumber) {
                string textCopy = text;
                textCopy.erase(randomNumber - 1, 1);
                cout << counter << ". Error " << textCopy << endl;
                typoCounter++;

                newRandomNumber = rand() % 50 + 1;
                randomNumber = newRandomNumber;
            } else {
                cout << counter << ". " << text << endl;
            }

            counter++;
        }
    }

private:
    string text;
    int counter;
    int n;
    int randomNumber;
    int newRandomNumber;
    int typoCounter;
};

int main () {

    srand(time(0));

    string text = "I will always use object-oriented design.";
    Typo typo(text);
    typo.printTypo();
    return 0;
}