#ifndef _Patient_
#define _Patient_

#include<bits/stdc++.h>
#include "Person.h"
#include "Personal_Info.h"
#include "Contact.h"
#include "Doctor.h"


using namespace std;

namespace hospital
{
    class Patient : protected Person
    {
        private:
            string diagnosed_with;
            string first_visit_date;
            static int counter;
        public:
            Patient();
            string get_first_visit_date();
            string get_diagnosed_with();
            void print_info();
            void add_info();
            void add_info(string, string, char, int, int, int, int, string, string, string, string, int i = counter++);
    };
}

#endif