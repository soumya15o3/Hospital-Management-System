#include <bits/stdc++.h>
#include "Person.h"
#include "Staff.h"

using namespace std;

namespace hospital
{
    int Staff::counter = 1;
    Staff::Staff()
    {
        job_title = "NA";
    }
    string Staff::get_job_title()
    {
        return job_title;
    }
    void Staff::add_info()
    {
        cout<<setw(40)<<"STAFF'S INFORMATION FORM\n\n\n";
        cout<<"\nPERSONAL INFORMATION: \n";
        cout<<"\nName: ";
        cin>>fname>>lname;
        cout<<"\nDate of Birth\n";
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
        cout<<"\n\nADDITIONAL INFORMATION: \n";
        cout<<"\nJob Title: ";
        cin>>job_title;
        cout<<"\n\nCONTACT INFORMATION: \n";
        cout<<"\nEmail: ";
        cin>>email;
        cout<<"\nPhone Number: ";
        cin>>phone_no;
        id = counter++;
        ofstream fout("Staff.txt", ios::out|ios::app);
        fout.seekp(0, ios::end);
        fout<<id<<endl<<fname<<endl<<lname<<endl<<gender<<endl<<dd<<endl<<mm<<endl<<yyyy<<endl<<age<<endl<<get_email()<<endl<<get_phone_no()<<endl<<get_job_title()<<endl;
        fout.close();
        cout<<"\n\n\n\n"<<setw(80)<<setfill(' ')<<"Press any key to continue......";
        cin.get();

    }
    void Staff::add_info(string f, string l, char g, int d, int m, int y, int a, string em, string ph, string j,int i )
    {
        fname = f;
        lname = l;
        gender = g;
        dd = d;
        mm = m;
        yyyy = y;
        age = a;
        email = em;
        phone_no = ph;
        job_title = j;
        id = i;
    }
    void Staff::print_info()
    {
        cout<<"\n\t\t\tDoctor Id: "<<get_id();
        cout<<"\n\t\t\tName: "<<get_name();
        cout<<"\n\t\t\tDate of Birth"<<get_dob();
        cout<<"\n\t\t\tGender: "<<get_gender();
        cout<<"\n\t\t\tAge: "<<get_age();
        cout<<"\n\t\t\tJob Title: "<<get_job_title();
        cout<<"\n";
        cout<<"\n\t\t\tContact Information: ";
        cout<<"\n\t\t\tEmail: "<<get_email();
        cout<<"\n\t\t\tPhone Number: "<<get_phone_no();
    }
}