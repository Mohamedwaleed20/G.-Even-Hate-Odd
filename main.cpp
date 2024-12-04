#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int arr[n];
        for(int i = 0 ; i < n ; i++ )
        {
            cin >> arr[i];
        }
        int x = 0 ;
        int y = 0 ;
        for(int i = 0 ; i < n ; i++ )
        {
            if(arr[i]%2==0)
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        if(n%2!=0)
        {
            cout << "-1" << endl ;
        }
        else if(y==x)
        {
            cout << "0" << endl ;
        }
        else
        {
            cout << abs(x-y)/2 << endl ;
        }
    }
    return 0;
}
