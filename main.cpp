#include<iostream>
#include<string>
#include<stdbool.h>
#include "student.h"
using namespace std;

int choice = 0;
bool firstTime=true;

void choiceTaking(){
    
   if(firstTime){
        cout << "STUDENT MANAGEMENT PROGRAM" << endl;
    cout << "1.Enter stundet data." << endl;
    cout << "2.Display student data." << endl;
    cout << "3.Exit." << endl;

    cout << "\nEnter your choice:  ";
    cin >> choice;
   }else{
       
    cout << "\n1.Enter stundet data." << endl;
    cout << "2.Display student data." << endl;
    cout << "3.Exit." << endl;

    cout << "\nEnter your choice:  ";
    cin >> choice;
   }
}

int main(){

   
    struct student s;
    
    bool isDataEntered=false;


    bool iscorrectinput = false;

    bool isExit = false;

    while(!iscorrectinput){
        choiceTaking();

        if(choice==1 || choice==2 || choice==3){
            iscorrectinput = true;
        }else{
            cout << "Invalid input please \n enter the correct input." << endl;
            iscorrectinput = false;
        }
    }

    while (!isExit)       
    {

        switch (choice)
        {
        case 1:
            inputStudentData(&s);
    
            isDataEntered=true;
            firstTime=false;
            break;
        case 2:
            if(isDataEntered==true){
                displayReportCArd(&s);
            }else{
                cout<<"\n[Error] No data found! Please enter student data first."<<endl;
            }
    
            firstTime=false;
            break;
        case 3:
            exit();
            isExit = true;
            break;
        }
        
       while(1){
            string temp="\0";
        cout<<"Do you want continue enter [yes/no] : ";
        cin>>temp;
        
        if(temp=="yes" || temp=="Yes"|| temp=="YES"){
            choiceTaking();
            firstTime=false;
            break;
        }else if(temp=="no" || temp=="No" || temp=="NO"){
            exit();
            isExit=true;
            break;
        }else{
            cout<<"Invalid input !"<<endl;
        }
        
       }
    }

    return 0;
}
