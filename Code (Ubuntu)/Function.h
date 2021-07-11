#ifndef _functions_
#define _functions_

#include <bits/stdc++.h>
#include <fstream>
#include "Personal_Info.h"
#include "Contact.h"
#include "Person.h"
#include "Doctor.h"
#include "Patient.h"
#include "Staff.h"

using namespace std;
namespace hospital
{
    void welcome();
    bool login();
    void main_menu();
    void print_all_doc();
    void print_all_pat();
    void print_all_staff();
    void D_Database();
    void P_Database();
    void S_Database();
    void display_doc();
    void display_pat();
    void display_staff(); 
    void add_doc();
    void add_pat();
    void add_staff();  

}

#endif