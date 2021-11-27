/*

PROBLEM FROM CODECHEF NAME = AIRLINE(Airline restrictions)

Chef has 3 bags that she wants to take on a flight. They weigh A, B, and C kgs respectively. She wants to check-in exactly two of these bags and carry the remaining one bag with her.

The airline restrictions says that the total sum of the weights of the bags that are checked-in cannot exceed D kgs and the weight of the bag which is carried cannot exceed E kgs. Find if Chef can take all the three bags on the flight.

Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
Each testcase contains a single line of input, five space separated integers A,B,C,D,E.
Output Format
For each testcase, output in a single line answer "YES" if Chef can take all the three bags with her or "NO" if she cannot.

You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤36000
1≤A,B,C≤10
15≤D≤20
5≤E≤10
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t,i,a,b,c,d,e;
	cin>>t;
	for(i =1;i<=t;i++)
	{
	    cin>>a>>b>>c>>d>>e;
	   if(a<=e&&(b+c)<=d || b<=e&&(c+a)<=d || c<=e&&(a+b)<=d){
	    
	        cout<<"Yes"<<endl;
	  
	    }
	    else
	    cout<<"No"<<endl;
	}
	return 0;
	
}
