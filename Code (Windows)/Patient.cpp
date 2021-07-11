#include<bits/stdc++.h>
#include "Person.h"
#include "Doctor.h"
#include "Patient.h"
#include "Personal_Info.h"
#include "Contact.h"


using namespace std;

namespace hospital
{
    int Patient::counter = 1;
    Patient::Patient()
    {
        diagnosed_with = "NA";
        first_visit_date, "1/1/2000";
    }
     string Patient::get_diagnosed_with()
    {
      return diagnosed_with;
    }
    string Patient::get_first_visit_date()
    {
      return first_visit_date;
    }
    void Patient::print_info()
    {
      cout<<"\n\t\t\tPatient Id: "<<get_id();
      cout<<"\n\t\t\tName: "<<get_name();
      cout<<"\n\t\t\tDate of Birth"<<get_dob();
      cout<<"\n\t\t\tGender: "<<get_gender();
      cout<<"\n\t\t\tAge: "<<get_age();
      cout<<"\n\t\t\tDiagnosed With: "<<get_diagnosed_with();
      cout<<"\n\t\t\tDate of First Visit: "<<get_first_visit_date();
      cout<<"\n";
      cout<<"\n\t\t\tContact Information: ";
      cout<<"\n\t\t\tEmail: "<<get_email();
      cout<<"\n\t\t\tPhone Number: "<<get_phone_no();
        
    }
    void Patient::add_info()
    {

        cout<<setw(40)<<"PATIENTS'S INFORMATION FORM\n\n\n";
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
        cout<<"\n\nMEDICAL INFORMATION: \n";
        cout<<"\nDiagnosed With: ";
        cin>>diagnosed_with;
        cout<<"\nAdmission Date: ";
        cin>>first_visit_date;
        cout<<"\n\nCONTACT INFORMATION: \n";
        cout<<"\nEmail: ";
        cin>>email;
        cout<<"\nPhone Number: ";
        cin>>phone_no;
        id = counter++;
        ofstream fout("Patient.txt", ios::out|ios::app);
        fout.seekp(0, ios::end);
        fout<<id<<endl<<fname<<endl<<lname<<endl<<gender<<endl<<dd<<endl<<mm<<endl<<yyyy<<endl<<age<<endl<<get_email()<<endl<<get_phone_no()<<endl<<get_diagnosed_with()<<endl<<get_first_visit_date()<<endl;
        fout.close();
        cout<<"\n\n\n\n"<<setw(80)<<setfill(' ')<<"Press any key to continue......";
        cin.get();

    }
    void Patient::add_info(string f, string l, char g, int d, int m, int y, int a, string em, string ph, string dw, string dt, int i )
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
        diagnosed_with = dw;
        first_visit_date = dt;
        id = i;
    }
}