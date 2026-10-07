#include <iostream>

using namespace std;

void com(char a,char b)
{
    if (a== '/'&& b=='/')
        cout<<"single line comment "<<endl;
    else if (a=='/'&& b=='*')
        cout<<"Multiple line comment "<<endl;
    else
        cout<<"not a comment"<<endl;
}
bool check (string s)
{
    for (int i=0; i<s.length(); i++)
    {
        if(s[i]<48||s[i]>57)
            return false;
    }
    return true;
}
void check (char a)
{
    if (a=='+'||a=='-'||a=='*'||a=='/'||a=='%'||a=='=')
    {
        cout<<a<<"operator"<<endl;
    }
}
void check(char a[])
{
    int i = 1;

    if ((a[0] >= 'A' && a[0] <= 'Z') ||
        (a[0] >= 'a' && a[0] <= 'z') ||
        a[0] == '_')
    {
        while (a[i] != '\0')
        {
            if (!((a[i] >= 'A' && a[i] <= 'Z') ||
                  (a[i] >= 'a' && a[i] <= 'z') ||
                  (a[i] >= '0' && a[i] <= '9') ||
                  a[i] == '_'))
            {
                cout << "Not Identifier";
                return;
            }

            i++;
        }

        cout << "valid Identifier";
    }
    else
    {
        cout << "Not Identifier valid ";
    }
}
int main()
{
    string s;
    cin>>s;
    if(check(s))
        cout<<"numeric constant"<<endl;
    else
        cout<<"numeric not constant"<<endl;
    char b[50];
    cout<<"enter input"<<endl;
    cin>>b;
    int i=0;
    while (b[i]!='\0')
    {
        check(b[i]);
        i++;
    }
    char c,d;
    cout<< "enter first two char"<<endl;
    cin>>c>>d;
    com(c,d);

    char e[20];

    cin >> e;

    check(e);


    return 0;
}
