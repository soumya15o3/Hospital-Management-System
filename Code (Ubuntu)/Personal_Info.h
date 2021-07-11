#ifndef _Personal_Info_
#define _Personal_Info_

#include<bits/stdc++.h>
using namespace std;

namespace hospital
{
    class Personal_Info
    {
        protected:
            char gender;
            string fname, lname;
            int dd, mm, yyyy, age;
        public:
            Personal_Info();
            void add_personal_info();
            void add_personal_info(string , string, char, int, int, int, int);
            void print_personal_info();
            string get_name();
            string get_dob();
            string get_gender();
            string get_age();
    };
}

#endif