// do...while loop Assignment 2
// C++ program that outputs even numbers from 12 to 50

#include <iostream>
using namespace std;

int main() {
    int i = 12; //Initialize i with 12

    // do...while loop 
    do {
        if (i % 2 == 0) {
            cout << i << " ";
        }
            ++i;
        }
    while (i <=50);
}