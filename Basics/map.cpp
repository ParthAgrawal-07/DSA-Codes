/* if there are more number of elements in map we use 3 diff types of method
   1. division method
   2. floating method (not req)
   3. mod mean method (not req)
   
   division method is used when for ex - 16%10 =6 will store in 6th index hence will give values for that   */


#include<bits/stdc++.h>
using namespace std;

int main()           // T.c - O(logN) //ordered and unordered map // unordered map gives 
                     // unordered things
{
    int arr[7];
    for(int i=0;i<7;i++)
    {
        cin >> arr[i];
    }
   
    unordered_map <int,int> mpp;
    for(int i=0;i<7;i++)
    {
        mpp[arr[i]]++;
    }

    for(auto it:mpp)
    {
        cout << it.first << "-->" << it.second <<endl;
    }
    }

