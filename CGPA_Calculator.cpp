#include <iostream>
using namespace std;

int main() {
    int subjects;
    float grade, credit;
    float totalPoints = 0, totalCredits = 0;
    float cgpa;

    cout << "How many subjects? ";
    cin >> subjects;

    for (int i = 1; i <= subjects; i++) {
        cout << "Subject " << i << " grade point (0-10): ";
        cin >> grade;

        cout << "Subject " << i << " credits: ";
        cin >> credit;

        totalPoints = totalPoints + (grade * credit);
        totalCredits = totalCredits + credit;
    }

    cgpa = totalPoints / totalCredits;

    cout << "Your CGPA is: " << cgpa << endl;

    if (cgpa >= 9) {
        cout << "Excellent!";
    }
    else if (cgpa >= 7) {
        cout << "Good job!";
    }
    else if (cgpa >= 5) {
        cout << "Average, keep improving.";
    }
    else {
        cout << "Needs more effort.";
    }

    return 0;
}