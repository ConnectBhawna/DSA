/*
https://codeforces.com/problemset/problem/1374/B
*/
#include<iostream>

using namespace std;

int main()

{

    int n,c,t;

    cin>>t;

    while(t--)

    {

        c=0;

        cin>>n;

        while(n%6==0)

        {

            n=n/6;

            c++;

        }

        while(n%3==0)

        {

            n=n/3;

              c=c+2;

        }

        if(n==1)

            cout<<c<<endl;

        else

            cout<<"-1"<<endl;

    }

}

