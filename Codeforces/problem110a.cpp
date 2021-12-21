/*
https://codeforces.com/problemset/problem/110/A
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
             long long int n;
             int lucky = 0;
             cin >> n;

             while(n)
            {
               if(n % 10 == 7 || n % 10 == 4)
                     lucky++;

                n = n / 10;
            }

            if(lucky == 7 || lucky == 4)
                 cout <<"YES";
            else
                 cout <<"NO";

   return 0;
}
