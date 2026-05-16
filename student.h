#ifndef STUDENT_H
#define STUDENT_H

using namespace std; 

struct name{
    string fname;
    string lname;
};

struct  student
{
    struct name n;

    int roll_number;
    float M_marks;
    float S_marks;
    float CS_marks;
    float EN_marks;
    float precentage;
    char grade;
};

void inputStudentData(struct student *s);

void displayReportCArd(struct student *s);

void exit();

#endif
