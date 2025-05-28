#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

bool isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

void calculateAge(Date dob, Date current) {
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(current.year)) {
        monthDays[1] = 29;
    }

    // Adjust days and months if needed
    if (dob.day > current.day) {
        current.day += monthDays[(current.month + 10) % 12]; // previous month
        current.month -= 1;
    }

    if (dob.month > current.month) {
        current.year -= 1;
        current.month += 12;
    }

    int calculatedDay = current.day - dob.day;
    int calculatedMonth = current.month - dob.month;
    int calculatedYear = current.year - dob.year;

    cout << "\nYour Age is: " << calculatedYear << " Years, "
         << calculatedMonth << " Months, and "
         << calculatedDay << " Days." << endl;
}

int main() {
    Date dob, current;

    cout << "Enter Your Birth Date (dd mm yyyy): ";
    cin >> dob.day >> dob.month >> dob.year;

    cout << "Enter Current Date (dd mm yyyy): ";
    cin >> current.day >> current.month >> current.year;

    // Optional basic validation
    if (dob.year > current.year ||
        (dob.year == current.year && dob.month > current.month) ||
        (dob.year == current.year && dob.month == current.month && dob.day > current.day)) {
        cout << "Invalid DOB. You cannot be born in the future." << endl;
        return 1;
    }

    calculateAge(dob, current);

    return 0;
}



// chat cpt