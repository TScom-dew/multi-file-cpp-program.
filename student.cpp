#include<iostream>
#include<string>
#include<stdbool.h>
#include "student.h"

using namespace std;

void inputStudentData(struct student *s){

    cout << "Enter your first name: ";
    cin >> s->n.fname;
    
    cout << "Enter your last name: ";
    cin >> s->n.lname;

    cout<<"Enter your roll number: ";
    cin >> s->roll_number;

    cout << "Enter the marks of mathematics: ";
    cin >> s->M_marks;
    cout << "Enter the marks of science: ";
    cin >> s->S_marks;
    cout << "Enter the marks of computer science: ";
    cin >> s->CS_marks;
    cout << "Enter the marks of english: ";
    cin >> s->EN_marks;

    cout << "Enter the total percentage: ";
    cin >> s->precentage;

    cout << "Enter the grade: ";
    cin >> s->grade;
}



void displayReportCArd(struct student *s){

    cout << "===============================";
    cout << "\n      STUDENT REPORT    \n";
    cout << "===============================\n";

    cout << "Name: " << s->n.fname << " " << s->n.lname << endl;

    cout << "Roll Number: " << s->roll_number << endl;

    cout << "\nSubject \t\t Marks" << endl;
    cout << "Mathematics   \t\t"<<s->M_marks << endl;
    cout << "Science \t \t"<<s->S_marks << endl;
    cout << "Computer Science  \t" <<s->CS_marks << endl;
    cout << "English    \t\t"<<s->EN_marks << endl;

    cout << "\nTotal Percentage: " << s->precentage << endl;

    cout << "\nGrade :" << s->grade << endl;

}

void exit(){

    cout << "\nThank for using the INPUT OUTPUT PROGRAM.\n"
         << endl;
}
