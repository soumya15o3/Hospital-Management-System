#include <bits/stdc++.h>
#include "Doctor.h"
#include "Person.h"
#include "Patient.h"
#include "Personal_Info.h"
#include "Contact.h"

using namespace std;

namespace hospital
{
    int Doctor :: counter = 1;
    Doctor::Doctor()
    {
        specialization = "NA";
        qualification = "MBBS";
        experience = 0;
    }
    string Doctor::get_specialization()
    {
      return specialization;
    }
    string Doctor::get_qualification()
    {
      return qualification;
    }
    string Doctor::get_experience()
    {
      string exp = to_string(experience) + " years";
      return exp;
    }
    void Doctor::print_info()
    {
        
        cout<<"\n\t\t\tDoctor Id: "<<get_id();
        cout<<"\n\t\t\tName: "<<get_name();
        cout<<"\n\t\t\tDate of Birth: "<<get_dob();
        cout<<"\n\t\t\tGender: "<<get_gender();
        cout<<"\n\t\t\tAge: "<<get_age();
        cout<<"\n\t\t\tSpecialization: "<<get_specialization();
        cout<<"\n\t\t\tQualification: "<<get_qualification();
        cout<<"\n\t\t\tExperience: "<<get_experience();
        cout<<"\n";
        cout<<"\n\t\t\tContact Information: ";
        cout<<"\n\t\t\tEmail: "<<get_email();
        cout<<"\n\t\t\tPhone Number: "<<get_phone_no();
    }
    void Doctor::add_info()
    {
        
        cout<<setw(40)<<"DOCTOR'S INFORMATION FORM\n\n\n";
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
        cout<<"\nSpecialization (choose from the given options)";
        spec();
        cout<<"\nQualification: (choose from the given options)";
        qual();
        cout<<"\nExperience (in years): ";
        cin>>experience;
        cout<<"\n\nCONTACT INFORMATION: \n";
        cout<<"\nEmail: ";
        cin>>email;
        cout<<"\nPhone Number: ";
        cin>>phone_no;
        id = counter++;

        ofstream fout("Doctor.txt", ios::out|ios::app);
        fout.seekp(0, ios::end);
        fout<<id<<endl<<fname<<endl<<lname<<endl<<gender<<endl<<dd<<endl<<mm<<endl<<yyyy<<endl<<age<<endl<<get_email()<<endl<<get_phone_no()<<endl<<get_specialization()<<endl<<get_qualification()<<endl<<experience<<endl;
        fout.close();
        cout<<"\n\n\n\n"<<setw(80)<<setfill(' ')<<"Press any key to continue......";
        cin.get();

    }
    void Doctor::add_info(string f, string l, char g, int d, int m, int y, int a, string em, string ph, string s , string q, int ex, int i )
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
        specialization = s;
        qualification = q;
        experience = ex;
        id = i;
    }
    void Doctor::spec()
    {
        cout<<"\n 1. Dermatology";
        cout<<"\n 2. Neurology";
        cout<<"\n 3. Obstetrics/Gynecology";
        cout<<"\n 4. Immunology";
        cout<<"\n 5. Opthalmology";
        cout<<"\n 6. Neonatology";
        cout<<"\n 7. Cardiology";
        cout<<"\n 8. Psychiatry";
        cout<<"\n 9. Pediatrics";
        cout<<"\n Enter your choice (1-9)\n";
        int n;
        cin>>n;
        switch (n)
        {
        case 1:
            /* code */
            specialization = "Dermatology";
            return;
        case 2:
            /* code */
            specialization = "Neurology";
            return;
        case 3:
            /* code */
            specialization = "Obstetrics/Gynecology";
            return;
        case 4:
            /* code */
            specialization = "Immunology";
            return;
        case 5:
            /* code */
            specialization = "Opthalmology";
            return;
        case 6:
            /* code */
            specialization = "Neonatology";
            return;
        case 7:
            /* code */
            specialization = "Cardiology";
            return;
        case 8:
            /* code */
            specialization = "Psychiatry";
            return;
        case 9:
            /* code */
            specialization = "Pediatrics";
            return;
        default:
            cout<<"\n\n\t\tIncorrect Choice!!!\n";
            spec();
            return;;
        }
    }
    void Doctor::qual()
    {
        cout<<"\n 1. MBBS";
        cout<<"\n 2. MBBS,MD";
        cout<<"\n 3. MBBS,MS";
        cout<<"\n 4. MBBS,MSc";
        cout<<"\n 5. MBBS,MD,DM";
        cout<<"\n 6. MBBS,MS,DM";
        cout<<"\n Enter your choice (1-6)\n";
        int n;
        cin>>n;
        switch (n)
        {
        case 1:
            /* code */
            qualification = "MBBS";
            return;
        case 2:
            /* code */
            qualification = "MBBS,MD";
            return;
        case 3:
            /* code */
            qualification = "MBBS,MS";
            return;
        case 4:
            /* code */
            qualification = "MBBS,MSc";
            return;
        case 5:
            /* code */
            qualification = "MBBS,MD,DM";
            return;
        case 6:
            /* code */
            qualification = "MBBS,MS,DM";
            return;
        default:
            cout<<"\n\n\t\tIncorrect Choice!!!\n";
            spec();
            return;;
        }
    }
}