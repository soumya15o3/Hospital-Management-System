#include<bits/stdc++.h>
#include "Personal_Info.h"

using namespace std;

namespace hospital
{
    // char gender, name[70];
    // int dd, mm, yyyy;


    Personal_Info::Personal_Info()
    {
        gender = 'O';
        fname = "NA";
        lname = "NA";
        dd = 01;
        mm = 01;
        yyyy = 1947;
    }
    void Personal_Info::add_personal_info()
    {
        cout<<"\nName: ";
        cin>>fname>>lname;
        cout<<"\nDate of birth: \n";
        cout<<"Date: ";
        cin>>dd;
        cout<<"Month: ";
        cin>>mm;
        cout<<"Year: ";
        cin>>yyyy;
        cout<<"\nGender ('M':Male,  'F':Female,  'O':Others): ";
        cin>>gender;
        cout<<"\nAge: ";
        cin>>age;
        
    }
    void Personal_Info::add_personal_info(string f, string l, char g, int a, int d, int m, int y)
    {
        gender = g;
        fname = f;
        lname = l;
        dd = d;
        mm = m;
        yyyy = y;
        age = a;
    }
    void Personal_Info::print_personal_info()
    {
        cout<<"\nName: "<<get_name();
        cout<<"\nDate of birth: "<<get_dob();
        cout<<"\nGender: "<<get_gender();
        cout<<"\nAge: "<<get_age();
    }
    string Personal_Info::get_name()
    {
        return fname + " " + lname;
    }
    string Personal_Info::get_dob()
    {
        string dob = to_string(dd) + '/' + to_string(mm) + '/' + to_string(yyyy);
        return dob;
    }
    string Personal_Info::get_gender()
    {
        if(gender == 'M' || gender == 'm')
        {
            return "Male";
        }
        else if(gender == 'F' || gender == 'f')
        {
            return "Female";
        }
        else
        {
            return "Other";
        }
    }
    string Personal_Info::get_age()
    {
        string a = to_string(age) + "years";
        return a;
    }
}