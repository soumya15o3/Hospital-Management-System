#include <bits/stdc++.h>
#include "Person.h"
#include "Personal_Info.h"
#include "Contact.h"

using namespace std;

namespace hospital
{
    Person::Person()
    {
        id = 0;
    }
    int Person::get_id()
    {
        return id;
    }
    void Person::put_id(int i)
    {
        id = i;
    }
}