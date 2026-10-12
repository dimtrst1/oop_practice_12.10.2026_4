#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef pair<string, string> mypair;

class PhoneBook
{
    map<string, string> contact;
public:
    void AddContact(string s1, string s2)
    {
        contact.insert(mypair(s1, s2));
    }
    
    void FindContact(string s1)
    {
        auto ptr = contact.find(s1);
        if (ptr != contact.end())
        {
            cout << ptr->first << " - " << ptr->second << endl;
        }
    }
    
    void Output()
    {
        for (auto ptr = contact.begin(); ptr != contact.end(); ptr++)
        {
            cout << ptr->first << " - " << ptr->second << endl;
        }
    }
};

int main()
{
    PhoneBook contact;
    
    contact.AddContact("Ivan", "+38065434342");
    contact.AddContact("Grisha", "+380654321142");
    
    contact.FindContact("Ivan");
    
    cout << endl;
    
    contact.Output();
    
}
