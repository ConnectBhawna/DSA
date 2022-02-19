#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<string> v;
        for(int i=1;i<=n;i++){
            if(i % 3 == 0){
                if(i%5 == 0){
                    v.push_back("FizzBuzz");
                }
                else{
                    v.push_back("Fizz");
                }
            }
            else if(i % 5 == 0){
                if(i % 3 == 0)
                {
                    v.push_back("FizzBuzz");
                }
                else
                {
                    v.push_back("Buzz");
                }
            }
            
            else
            {
                 v.push_back(i);
            }
        }
        return v;
    }
};
void print(std::vector <int> const &a) {
   std::cout << "The vector elements are : ";

   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i) << ' ';
}
int main(){
    Solution s;
    int num;
    cout<<"\n\t Enter the value of end of the loop: ";
    cin>>num;
    vector<string> v;
    v = fizzBuzz(num);
    print(v);
    return 0;
}