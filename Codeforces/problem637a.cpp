/*
https://codeforces.com/problemset/problem/637/A
*/
#include <bits/stdc++.h>

using namespace std;

int foo(int n) {
    return 9 * n * (int) pow(10, n-1);
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int k, b, cb, pb,pv, c;
	cin>>k;
	b = 1;
	cb = pb = 0;
	while(true) {
	    cb += foo(b);
		if(k <= cb) {
		    pv = pow(10, b-1) - 1 + ceil((k - pb) / (float)b);
		    c = (k - pb - 1) % b;
			cout<<to_string(pv)[c]<<endl;
			break;
		}
		pb = cb;
		++b;
	}
	
	return 0;
}