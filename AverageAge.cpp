#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int age = 1;
    int i  = 0;
    int totalAge = 0;
    float average = 0.0;

    do {
        cout << "Enter age (0 to Quit): ";
        cin >> age;
        if (age > 0) {
            i++;
            totalAge += age; 
        }
    } while (age > 0);

    average = (double) totalAge/i;

    cout << "The average age is " << average << endl;
    return 0;
}