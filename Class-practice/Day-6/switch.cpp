#include <iostream>

using namespace std;

int main() {

    
    int marks, grade;
    
    cout << "Enter Your Marks : ";
    cin >> marks;
    
    if ((marks > 100) || (marks < 0)){
        cout << "Please Enter Valid Marks";
        
        return 0;
    }

    // ternary operator
    
    (marks >= 90) ? cout << "Your Grade Is A" << endl:
    (marks >= 80) ? cout << "Your Grade Is B" << endl:
    (marks >= 70) ? cout << "Your Grade Is C" << endl:
    (marks >= 60) ? cout << "Your Grade Is D" << endl:
    (marks >= 50) ? cout << "Your Grade Is E" << endl:
    cout << "Fail" << endl;

    // Allocating Grade

    if (marks >= 90){
        grade = 'A';
    } else if (marks >= 80){
        grade = 'B';
    } else if (marks >= 70){
        grade = 'C';
    } else if (marks >= 60){
        grade = 'D';
    } else {
        grade = 'E';
    }

    // Swich Grade

    switch (grade){
        case 'A':{
            cout << "Excellent Work" << endl;
            break;
        }
        case 'B':{
            cout << "Well Done" << endl;
            break;
        }
        case 'C':{
            cout << "Good Job" << endl;
            break;
        }
        case 'D':{
            cout << "You Passed" << endl;
            break;
        }
        case 'E':{
            cout << "sorry you are fail" << endl;
            break;
        }
        default :{
            cout << "Enter Valid Marks" ;
        }
    }

    // Eligibility Check 

    if (grade == 'E'){
        cout << "Ple Try Again Next Time";
    } else{
        cout << "Con ! You Are eligible for next level";
    }

    return 0;
}