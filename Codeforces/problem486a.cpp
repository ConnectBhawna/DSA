/*
https://codeforces.com/problemset/problem/486/A
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum += pow(-1,i)*i;
    }
    cout<<sum<<endl;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a;
    cin >> n;
    if(n % 2 == 0) a = n / 2;
    else a = ((n + 1) / 2) * (-1);
    cout << a << endl;
    return 0;
}

*/