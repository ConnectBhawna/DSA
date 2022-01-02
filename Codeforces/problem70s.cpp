/*
https://codeforces.com/problemset/problem/705/A
*/
#include <iostream>
using namespace std;
int a;
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        if (i % 2 == 0) {
            cout << "I hate ";
        } else {
            cout << "I love ";
        }
        if (i != a - 1) {
            cout << "that ";
        } else {
            cout << "it ";
        }
    }
}