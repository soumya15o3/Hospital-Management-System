#ifndef _Person_
#define _Person_

#include<bits/stdc++.h>
#include "Personal_Info.h"
#include "Contact.h"

using namespace std;

namespace hospital
{
    class Person : protected Contact, protected Personal_Info
    {
        protected:
            int id;
        public:
            Person();      
            int get_id();
            void put_id(int);
            virtual void print_info() = 0;
            virtual void add_info() = 0;
    };
}

#endif