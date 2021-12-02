#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin >> tt;
	while(tt--){
	    int n;
	    cin >> n;
	    int A[n],B[n];
	    for(int i = 0;i < n;i++){
	        cin >> A[i];
	    }
	    for(int i = 0;i < n;i++){
	        cin >> B[i];
	    }
	    vector<int> score;
	     int sc;
	    for(int i = 0;i < n;i++){
	        sc = 20*A[i] - 10*B[i];
	        if(sc < 0){
	            sc = 0;
	        }
	        score.push_back(sc);
	    }
	    cout << *max_element(score.begin(),score.end());
	    cout << endl;
	}
	return 0;
}
