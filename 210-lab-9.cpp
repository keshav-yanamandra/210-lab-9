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
    cout << "1, 2, 3";
    cout << endl;

    array<int, SIZE> goals;
    ifstream fin;
    int line=0;
    fin.open("goals.txt");

        if (fin.good()) {
            cout << line;
            line++;


        fin.close();
    }
    else {
        cout << "file not found." << endl;
    }



    cout << endl;



    return 0;
}