#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
    }

    int hash[13]={0};         // max size - int main - 1e6 of array
                              // max size- globally(not in int main) - 1e7 of array
    for(int i=0;i<5;i++)
    {
        hash[arr[i]]++;       //here hash represents number 1 2 3 4 etc and if arr[i]==1 then hash[1] will increase
                              // thus providing frequency of each number
    }


    int q=5;
    while(q--)
    {
        int number;
        cin >> number;

        cout << hash[number] <<endl;

    }
}