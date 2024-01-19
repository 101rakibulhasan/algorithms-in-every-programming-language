#include <iostream>
#include <set>
#include <string>
#include <functional>

using namespace std;


class Person{
public:
    float age;
    string name;
bool operator < (const Person& rhs) const {return age<rhs.age;}
bool operator > (const Person& rhs) const {return age>rhs.age;}

};
int main()
{
//    multiset<int, less<int>> mset = {5,2,4,3,2,5};
//    mset.insert(20);
//    for(const auto& e: mset)
//    {
//        cout << e << endl;
//    }


    multiset<Person, less<>> mset = {{25,"Rupesh"},{20,"Hitesh"}};
    mset.insert({20, "lessgo"});
    for(const auto& e: mset)
    {
        cout << e.age << "" << e.name << endl;
    }


    return 0;
}
