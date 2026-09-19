// Keshav Yanamandra
// COMSC-210-5293, Fall 2026
// Lab 9

#include <iostream>
#include <fstream>
#include <array>
using namespace std;

const int SIZE = 38;


int main() {

    cout << "Barcelona goals: ";
    cout << endl;

    array<int, SIZE> goals;
    ifstream fin;
    int line=0;
    fin.open("goals.txt");

        if (fin.good()) {
            cout << line;
            line++;
            for (int i = 0; i < SIZE; i++) {
                fin >> goals[i];
            }

            fin.close();
    }
    else {
        cout << "file not found." << endl;
    }

    cout << "Games played with array.size: " << goals.size() << endl;

    cout << "First game goals: " << goals.front() << endl;
    cout << "Last game goals: " << goals.back() << endl;

    for (int goal : goals) {
        cout << goal << " ";
    }

    cout << endl;



    return 0;
}