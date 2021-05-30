#include<iostream>
#include<string.h>
using namespace std;
class customer{
int id;
char l_name[44];
char f_name[44];
int cr_limit;
public:
    void set_id(int i)
    {
        id=i;
    }
    void set_lname(char* n)
    {
        strcpy(l_name,n);
    }
    void set_fname(char* n)
    {
        strcpy(f_name,n);
    }
    void set_crlimit(int c)
    {
        if(c>10000)
        {
            throw c;
        }
        else
        {
            cr_limit=c;

        }
    }
    void showValues()
    {
        cout<<id<<endl;
        cout<<f_name<<endl;
        cout<<l_name<<endl;
        cout<<cr_limit<<endl;
    }
};
int main()
{
    try{
        customer monu;
    monu.set_id(222222);
    monu.set_fname("Monuar");
    monu.set_lname("hossain");
    monu.set_crlimit(100000);
    monu.showValues();
    }
        catch(int e)
        {
            cout<<"Credit limit crossed"<<endl;
        }
    return 0;
}

