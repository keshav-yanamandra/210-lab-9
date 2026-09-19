// Keshav Yanamandra
// COMSC-210-5293, Fall 2026
// Lab 9

#include <iostream>
#include <fstream>
#include <array>
#include <numeric>
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
    //more array functions
    cout << "Goals using at(): " << goals.at(0) << endl;
    cout << "Goals in last game " << goals[SIZE - 1] << endl;

    int high = 0;
    int low = 0;
    double average = 0;
    double total = 0;

    //more array functions
    high = *max_element(goals.begin(), goals.end());
    low = *min_element(goals.begin(), goals.end());
    total = accumulate(goals.begin(), goals.end(), 0.0);

    cout << "Highest goals: " << high << endl;
    cout << "Lowest goals: " << low << endl;
    cout << "Average goals: " << total/goals.size() << endl;

    cout << "All Goals" << endl;
    cout << "---------" << endl;
    
    for (int goal : goals) {
        cout << goal << " ";
    }

    cout << endl;

    cout << "PART 2 vector" << endl;
    cout << "--------------" << endl;
    vector<int> goalsVec;
    ifstream fin2;


    fin2.open("goals.txt");
    if (fin2.good()) {

        while (fin2 >> line) {
            goalsVec.push_back(line);
        }

        fin2.close();
    }
    else {
        cout << "File not found." << endl;
    }


    cout << "Goals using vector: ";

    for (int goal : goalsVec) {
        cout << goal << " ";
    }




    return 0;
}