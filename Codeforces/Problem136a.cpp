/*
https://codeforces.com/problemset/problem/136/A
*/
#include<iostream>
  using namespace std;

  int main()
  {
      int n;
      cin>>n;
      int i,j,a[n];

      for ( i=0; i<n; i++) cin>>a[i];

       for ( j=1;j<=n; j++)
         for ( i=0; i<n; i++)

        {
          if(a[i]==j) { cout<<(i+1)<<" "; break; }
        }

        return 0;
  }