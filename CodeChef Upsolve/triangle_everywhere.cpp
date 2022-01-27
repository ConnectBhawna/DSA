/*
https://www.codechef.com/CCSTART2/submit/EXTRICHK
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && b+c>a && a+c>b){
	    if(a == b && b == c && c == a){
	        cout<<1;
	    }
	    else if(a == b || b == c || c == a){
	        cout<<2;
	    }
	    else if(a != b && b != c && c != a){
	        cout<<3;
	    }
	}
	else{
	    cout<<-1;
	}
	return 0;
}
