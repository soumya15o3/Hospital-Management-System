#ifndef _Doctor_
#define _Doctor_

#include<bits/stdc++.h>
#include "Person.h"
#include "Personal_Info.h"
#include "Contact.h"

using namespace std;

namespace hospital
{
    class Doctor : protected Person
    {
        private:
            string specialization, qualification;
            int experience;
            static int counter;
        public:
            
            Doctor();
            string get_specialization();
            string get_qualification();
            string get_experience();
            void spec();
            void qual();
            void print_info();
            void add_info();
            void add_info(string, string, char, int, int, int, int, string, string, string, string, int, int i = counter++);
        
    };
}

#endif