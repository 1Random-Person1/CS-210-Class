#include "Reinforcements.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::string;

//Reinforcements ------------

// R-1.1 ------------

D is not valid due to it having special characters

// R - 1.3 ------------

struct Pair {
    int first;
    double second;
};

// R - 1.4 ------------

abcabcdabc

// R - 1.5 ------------

(y + (2 * (z++))) < (3 - (w / 5))



// R - 1.11 ------------

class Flower {

private:
    string name;
    int petals;
    float price;

public:
    Flower(string name, int petals, float price) {
        this->name = name;
        this->petals = petals;
        this->price = price;
    }

    void setName(string name) {
        this->name = name;
    }

    void setPetals(int petals) {
        this->petals = petals;
    }

    void setPrice(float price) {
        this->price = price;
    }

    string getName() {
        return name;
    }

    int getPetals() {
        return petals;
    }

    float getPrice() {
        return price;
    }
};

int main() {
    Flower flower ("Red Rose", 5, 2.99);
    cout << flower.getName() << endl;
    cout << flower.getPetals() << endl;
    cout << flower.getPrice() << endl;

    return 0;
}
