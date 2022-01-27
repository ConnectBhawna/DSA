/**/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin>>t;

    while(t--)
    {
        long long int l;
        string s;

        cin>>l;
        cin>>s;

        long long int goodYear=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='1')
                goodYear+=1;
        }

        long long int goodper=(goodYear*100)/l;

        if(goodper>=50)
        {
            cout<<"YES"<<endl;
        }
        else
        {   goodYear=0,goodper=0;
            for(int i=0;i<l;i++)
            {
                if(s[i]=='1')
                    goodYear+=1;

                goodper=(goodYear*100)/(i+1);
                //cout<<goodper;
                if(goodper>=50 && i>=1 && i<=l)
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(goodper<50)
                cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}
