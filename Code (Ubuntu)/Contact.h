#ifndef _Contact_
#define _Contact_

#include<bits/stdc++.h>
using namespace std;

namespace hospital
{
    class Contact
    {
        protected: 
            string email, phone_no;
        public:
            Contact();
            void add_contact_info();
            void add_contact_info(string, string);
            void print_contact_info();
            string get_email();
            string get_phone_no();
    };
}

#endif