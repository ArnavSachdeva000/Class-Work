#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int id, marks;
    string name;

    int search_id = 102;
    fstream file("students.txt", ios::in | ios::out);

    if (!file.is_open()) {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    while (file >> id >> name >> marks) {
        if (id == search_id) {
            cout << "Old Marks: " << marks << endl;


            file.seekp(-to_string(marks).length(), ios::cur);

            marks = 90;
            file << marks;

            cout << "Marks updated!";
            break;
        }
    }

    file.close();
    return 0;
}