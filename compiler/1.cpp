#include<bits/stdc++.h>
using namespace std;

bool alpha(char ch)
{
    return ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'));
}

bool num(char ch)
{
    return (ch>='0' && ch<='9');
}

void print(string s, int n)
{
    cout<<"Number of "<<s<<" = "<<n<<endl;
}

int alphabet,digit,line,space;

int main ()
{
    string s;
    char ch;

    FILE *file;

    file = fopen("input.txt", "r");

    while((ch = fgetc(file)) != EOF)
    {
        s += ch;
    }

    for(int i=0; i<s.size(); i++)
    {
        if(alpha(s[i]))
            alphabet++;
        if(num(s[i]))
            digit++;
        if(s[i]==' ')
            space++;
        if(s[i]=='\n')
            line++;
    }

    print("Characters",s.size());
    print("Alphabets",alphabet);
    print("Digits",digit);
    print("Spaces",space);
    print("Lines",line+1);

    return 0;
}
