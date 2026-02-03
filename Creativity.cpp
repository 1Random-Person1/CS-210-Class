#include "Creativity.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::string;

//Creativity ------------

// C - 1.2 ------------

bool evenProduct(int a[], int n) {

    if (n < 2) {
        return false;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            return true;
        } else {
            return false;
        }
    }
}

int main() {
    int list[] = {3, 3};
    bool result = evenProduct(list, 2);
    if (result) {
        cout << "Product is even \n";
    } else {
        cout << "Product is odd \n";
    }

    return 0;
}

// C - 1.3 ------------

bool areDifferent(const vector<int>& a) {

    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (a[i] == a[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<int> value = {1, 3, 4, 1};

    bool result = areDifferent(value);

    if (result) {
        cout << "true \n";
    } else {
        cout << "false \n";
    }
    return 0;
}

// C - 1.4 ------------

void oddValues(const vector<int>& a) {

    for (int i = 0; i < a.size(); i++) {
        if (a[i] % 2 == 1) {

            cout << a[i] << endl;

        }
    }
}

int main() {
    vector<int> value = {1, 4, 3, 4};

    oddValues(value);

    return 0;

}