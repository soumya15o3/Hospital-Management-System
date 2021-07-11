#include <bits/stdc++.h>
#include <fstream>
#include <stdlib.h>
#include "Personal_Info.h"
#include "Contact.h"
#include "Person.h"
#include "Doctor.h"
#include "Patient.h"
#include "Function.h"
#include "Staff.h"

using namespace std;
using namespace hospital;

int main()
{
    welcome();
    if(!login())
    {
        cout<<"\t\t\tIncorrect Username or Password\n\n";
        return 0;
    }
    int n;
    system("clear");
    cout<<"\n\n\n\n"<<setw(60)<<"HOSPITAL MANAGEMENT SYSTEM\n";
    cout<<"\t\t\t1.Main Menu\n";
    cout<<"\t\t\t2.Exit\n";
    cout<<"\n\n\nEnter your choice (1-2): ";
    cin>>n;
    if(n==1)
    {

        main_menu();
    }
    else
    {
        system("clear");
        cout<<"\n\n\n\n\n\t\t\t\tGoodbye!! Have a nice day.\n";
        exit(0);
    }   
    return 0;
}
