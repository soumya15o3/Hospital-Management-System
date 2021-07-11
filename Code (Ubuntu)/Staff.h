#ifndef _Staff_
#define _Staff_

#include <bits/stdc++.h>
#include "Person.h"
#include "Personal_Info.h"
#include "Contact.h"

using namespace std;

namespace hospital
{
    class Staff : protected Person 
    {
        private: 
            string job_title;
            static int counter;
        public: 
            Staff();
            string get_job_title();
            void add_info();
            void add_info(string, string, char, int, int, int, int, string, string, string , int i = counter++);
            void print_info();
    };
}

#endif