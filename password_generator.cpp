#include <bits/stdc++.h>
using namespace std;

string letters(int x)
{
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ@_1234567890abcdefghijklmnopqrstuvwxyz", temp;
    // cout<<str.length()<<endl;
    if (x<8){
        temp="pass is to small";
        return temp;
    }
    srand((unsigned)time(0));
    for (int i = 0; i <= x; i++)
    {
        temp = temp + str[rand() % 66];

    }
    return temp;
}

int main()
{   int i;

     cout<<"enter passward length "<<endl;
    cin>>i;
    cout<<"the randem passward is "<<endl;

    cout<<letters(i);
    // cout<<"_"<<endl;
    return 0;
}
