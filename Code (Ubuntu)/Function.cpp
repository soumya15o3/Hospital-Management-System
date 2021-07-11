#include <bits/stdc++.h>
#include <fstream>
#include <iomanip>
#include "Personal_Info.h"
#include "Contact.h"
#include "Person.h"
#include "Doctor.h"
#include "Patient.h"
#include "Staff.h"
#include "Function.h"

using namespace std;
namespace hospital
{
    void welcome()
    {
        system("clear");
        cout<<"\n\n\n";
        cout<<"\n\n\n\n\n\n"<<setw(60)<<setfill(' ')<<"Welcome To Hospital Management System"<<setw(60)<<setfill(' ')<<"\n";
        cout<<"\n\n\n\n"<<setw(80)<<setfill(' ')<<"Press any key to continue......";
        cin.get();
    }
    bool login()
    {
        system("clear");
        cout<<"\n\n\n";
        string u,p;
        cout<<"\n\n\n\n"<<setw(50)<<"LOGIN\n"<<setw(60);
        cout<<"\n\tUsername: ";
        cin>>u;
        cout<<"\n\tPassword: ";
        cin>>p;
        if(u == "admin" && p == "admin")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void main_menu()
    {
        system("clear");
        bool f = true;
        do
        {
            cout<<"\n\n\n";
            cout<<"\n\n"<<setw(50)<<"Main Menu"<<"\n\n";
            cout<<"\t\t\t1.Doctors' Database"<<"\n";
            cout<<"\t\t\t2.Patients' Database"<<"\n";
            cout<<"\t\t\t3.Staffs' Database"<<"\n";
            cout<<"\t\t\t4.Exit"<<"\n";
            cout<<"\n\n\nEnter your choice (1-4): ";
            int n;
            cin>>n;
            switch (n)
            {
                case 1:
                    D_Database();
                    break;
                case 2:
                    P_Database();
                    break;
                case 3:
                    S_Database();
                    break;
                case 4:
                    exit(0);
                    f = false;
                    break;
                
                default:
                    cout<<"Incorrect Option!!\n";
                    break;
            }
        } while (f);
        
    }
    void D_Database()
    {
        system("clear");
        bool f;
        char n;
        do
        {
            cout<<"\n\n\n";
            Doctor D;
            cout<<"\n\n"<<setw(50)<<"DOCTORS' DATABASE"<<setw(60)<<"\n";
            cout<<"\t\t1.Display all the doctors' information\n";
            cout<<"\t\t2.Display a specific doctor's information\n";
            cout<<"\t\t3.Add a new doctor's information\n";
            cout<<"\t\t4.Return to Main Menu\n";
            cout<<"\t\t5.Exit\n";
            cout<<"\n\n\nEnter your choice (1-5): ";
            cin>>n;
            switch (n)
            {
                case '1':
                    print_all_doc();
                    system("clear");
                    f = true;
                    break;
                case '2': 
                    display_doc();
                    cout<<"\n\n\n\n"<<setw(80)<<setfill(' ')<<"Press any key to continue......";
                    cin.get();
                    system("clear");
                    f = true;
                    break;
                case '3':
                    D.add_info();
                    cout<<"\n\n\n\n"<<setw(80)<<setfill(' ')<<"Press any key to continue......";
                    cin.get();
                    system("clear");
                    f = true;
                    break;
                case '4':
                    f = false;
                    break;
                case '5':
                    f = false;
                    exit(0);
                    break;
                
                default:
                    cout<<"\nIncorrect Option!!\n";
                    break;
            }
            if(!f)
            {
                break;
            }
        } while (f || n != '4');
        
        
    }
    void P_Database()
    {
        bool f;
        char n;
        do
        {
            cout<<"\n\n\n";
            Patient P;
            int c;
            cout<<"\n\n"<<setw(50)<<"PATIENTS' DATABASE\n";
            cout<<"\t\t1.Display all the patients' information\n";
            cout<<"\t\t2.Display a specific patient's information\n";
            cout<<"\t\t3.Add a new patient's information\n";
            cout<<"\t\t4.Return to Main Menu\n";
            cout<<"\t\t5.Exit\n";
            cout<<"\n\n\nEnter your choice (1-5): ";
            cin>>n;
            switch (n)
            {
            case '1':
                print_all_pat();
                system("clear");
                f = true;
                break;
            case '2': 
                display_pat();
                cout<<"\n\n\n\n"<<setw(80)<<setfill(' ')<<"Press any key to continue......";
                cin.get();
                system("clear");
                f = true;
                break;
            case '3':
                P.add_info();
                cout<<"\n\n\n\n"<<setw(80)<<setfill(' ')<<"Press any key to continue......";
                cin.get();
                system("clear");
                f = true;
                break;
            case '4':
                f = false;
                break;
            case '5':
                f = false;
                exit(0);
                break;
            
            default:
                cout<<"\nIncorrect Option!!\n";
                break;
            }
        } while (f || n != '4');
    }
    void S_Database()
    {
        bool f;
        char n;
        do
        {
            cout<<"\n\n\n";
            Staff S;
            cout<<"\n\n"<<setw(50)<<"STAFFS' DATABASE\n";
            cout<<"\t\t1.Display all the staffs' information\n";
            cout<<"\t\t2.Display a specific staff's information\n";
            cout<<"\t\t3.Add a new staff's information\n";
            cout<<"\t\t4.Return to Main Menu\n";
            cout<<"\t\t5.Exit\n";
            cout<<"\n\n\nEnter your choice (1-5): ";
            cin>>n;
            switch (n)
            {
            case '1':
                print_all_staff();
                system("clear");
                f = true;
                break;
            case '2': 
                display_staff();
                cout<<"\n\n\n\n"<<setw(80)<<setfill(' ')<<"Press any key to continue......";
                cin.get();
                system("clear");
                f = true;
                break;
            case '3':
                S.add_info();
                cout<<"\n\n\n\n"<<setw(80)<<setfill(' ')<<"Press any key to continue......";
                cin.get();
                system("clear");
                f = true;
                break;
            case '4':
                f = false;
                break;
            case '5':
                f = false;
                exit(0);
                break;
            
            default:
                cout<<"\nIncorrect Option!!\n";
                break;
            }
        } while (f || n!='4');
    }
    void print_all_pat()
    {
        cout<<"\n\n\n";
        Patient P;
        ifstream fin("Patient.txt", ios::in);
        fin.seekg(0, ios::beg);
        string id, f, l, g, d, m, y, a, em, ph, dw, dt;
        
        // cout<<"=====================================================================\n";
        while(fin>>id>>f>>l>>g>>d>>m>>y>>a>>em>>ph>>dw>>dt)
        {
            char gn = g[0];
            P.add_info(f, l, gn, stoi(d), stoi(m), stoi(y), stoi(a), em, ph, dw, dt, stoi(id));
            P.print_info();  
            cin.get(); 
        }
        fin.close();
        cout<<"\n\n\n\n"<<setw(80)<<setfill(' ')<<"Press any key to continue......";
        cin.get();

    }
    void print_all_doc()
    {
        cout<<"\n\n\n";
        Doctor D;
        ifstream fin("Doctor.txt", ios::in);
        fin.seekg(0, ios::beg);
        string id, f, l, g, d, m, y, a, em, ph, s, q, ex;
        while(fin>>id>>f>>l>>g>>d>>m>>y>>a>>em>>ph>>s>>q>>ex)
        {
            char gn = g[0];
            D.add_info(f, l, gn, stoi(d), stoi(m), stoi(y), stoi(a), em, ph, s, q, stoi(ex), stoi(id));
            D.print_info();  
            cin.get(); 
        }
        fin.close();
        cout<<"\n\n\n\n"<<setw(80)<<setfill(' ')<<"Press any key to continue......";
        cin.get();

    }
    void print_all_staff()
    {
        cout<<"\n\n\n";
        Staff S;
        ifstream fin("Staff.txt", ios::in);
        fin.seekg(0, ios::beg);
        string id, f, l, g, d, m, y, a, em, ph, j;
        
        // cout<<"=====================================================================\n";
        while(fin>>id>>f>>l>>g>>d>>m>>y>>a>>em>>ph>>j)
        {
            char gn = g[0];
            S.add_info(f, l, gn, stoi(d), stoi(m), stoi(y), stoi(a), em, ph, j, stoi(id));
            S.print_info();  
            cin.get(); 
        }
        fin.close();
        cout<<"\n\n\n\n"<<setw(80)<<setfill(' ')<<"Press any key to continue......";
        cin.get();

    }
    void display_doc()
    {
        cout<<"\n\n\n";
        Doctor D;
        int id;
        string i, f, l, g, d, m, y, a, em, ph, s, q, ex;
        bool found = false;
        cout<<"\nEnter the Doctor's ID: ";
        cin>>id;
        ifstream fin("Doctor.txt", ios::in);
        fin.seekg(0, ios::beg);
        while(fin>>i>>f>>l>>g>>d>>m>>y>>a>>em>>ph>>s>>q>>ex)
        {
            if(id == stoi(i))
            {
                char gn = g[0];
                D.add_info(f, l, gn, stoi(d), stoi(m), stoi(y), stoi(a), em, ph, s, q, stoi(ex), stoi(i));
                D.print_info();
                found = true;
                break;
            }
            
        }
        if(!found)
        {
            cout<<"\n"<<setw(75)<<"Record not found!!\n";
            return;
        }
        cin.get();
        cout<<"\n\n\n";
    }
    void display_pat()
    {
        cout<<"\n\n\n";
        Patient P;
        int id;
        string i, f, l, g, d, m, y, a, em, ph, dw, dt;
        bool found = false;
        cout<<"\nEnter the Patient's ID: ";
        cin>>id;
        ifstream fin("Patient.txt", ios::in);
        fin.seekg(0, ios::beg);
        while(fin>>i>>f>>l>>g>>d>>m>>y>>a>>em>>ph>>dw>>dt)
        {
            if(id == stoi(i))
            {
                char gn = g[0];
                P.add_info(f, l, gn, stoi(d), stoi(m), stoi(y), stoi(a), em, ph, dw, dt, stoi(i));
                P.print_info();
                found = true;
                break;
            }
            
        }
        if(!found)
        {
            cout<<"\n"<<setw(75)<<"Record not found!!\n";
            return;
        }
        cin.get();
        cout<<"\n\n\n";
    }
    void display_staff()
    {
        cout<<"\n\n\n";
        Staff S;
        int id;
        string i, f, l, g, d, m, y, a, em, ph, j;
        bool found = false;
        cout<<"\nEnter the Staff's ID: ";
        cin>>id;
        ifstream fin("Staff.txt", ios::in);
        fin.seekg(0, ios::beg);
        while(fin>>i>>f>>l>>g>>d>>m>>y>>a>>em>>ph>>j)
        {
            if(id == stoi(i))
            {
                char gn = g[0];
                S.add_info(f, l, gn, stoi(d), stoi(m), stoi(y), stoi(a), em, ph, j, stoi(i));
                S.print_info();
                found = true;
                break;
            }
            
        }
        if(!found)
        {
            cout<<"\n"<<setw(75)<<"Record not found!!\n";
            return;
        }
        cin.get();
        cout<<"\n\n\n";
    }
    
}