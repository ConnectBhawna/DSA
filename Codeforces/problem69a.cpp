/*
problem link : https://codeforces.com/problemset/problem/69/A
*/
#include <iostream>

using namespace std;

int main()
{
    int n, x, y, z, xsum(0), ysum(0), zsum(0);
    cin >> n;

    while (n--)
    {
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }

    if (xsum == 0 && ysum == 0 && zsum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

/*#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x,y,z,a=0,b=0,c=0;
    while(t--){  
        cin>>x>>y>>z;
        a+=x;
        b+=y;
        c+=z;
    }
    if(a == 0 && b ==0 && c == 0 ){
        cout<<"YES<<endl";
    } 
    else{
        cout<<"NO"<<endl;
    }
    

}
*/