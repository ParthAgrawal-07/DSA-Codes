#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
        cin >> str;
    

    int hash[256]={0};         // max size - int main - 1e6 of array
                              // max size- globally(not in int main) - 1e7 of array
    for(int i=0;i<str.length();i++)
    {
        hash[str[i]]++;       //here hash represents number 1 2 3 4 etc and if arr[i]==1 then hash[1] will increase
                              // thus providing frequency of each number
    }


    int q=5;
    while(q--)
    {
        char ch;
        cin >> ch;

        cout << hash[ch] <<endl;

    }
}