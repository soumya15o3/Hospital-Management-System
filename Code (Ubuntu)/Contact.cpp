#include<bits/stdc++.h>
#include "Contact.h"
using namespace std;

namespace hospital
{
    // char email[30], phone_no[10];

    Contact::Contact()
    {
        email = "abc@email.com";
        phone_no ="1234567890";
    }
    void Contact::add_contact_info()
    {
        cout<<"\nEmail: ";
        cin>>email;
        cout<<"\nPhone Number: ";
        cin>>phone_no;
    }
    void Contact::add_contact_info(string em, string ph)
    {
        email = em;
        phone_no = ph;
    }
    void Contact::print_contact_info()
    {
        cout<<"\nEmail: "<<get_email();
        cout<<"\nPhone Number: "<<get_phone_no();
    }
    string Contact::get_email()
    {
        return email;
    }
    string Contact::get_phone_no()
    {
        return phone_no;
    }
}