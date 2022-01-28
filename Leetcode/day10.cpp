/*
Insertion code solution
*/
#include<iostream>
using namespace std;
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void insertionSort(int *array, int size) {
   int key, j;
   for(int i = 1; i<size; i++) {
      key = array[i];//take value
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;   //insert in right place
   }
}
int main() {

   freopen("testCase.txt","r",stdin);
   freopen("InsertResult.txt","w",stdout);
   cout<<"\n ----------------------- IMPLIMENTATION OF INSERTION SORT -------------------\n";
   int n;
   cout << "\n--------------------------------Enter the number of elements: ---------------------------\n";
   cin >> n;
   int arr[n];    //create an array with given number of elements
   cout << "\n -------------------------------- Enter elements of array : --------------------------------\n" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout<<"\n---------------------------------------------------------------------------------\n";
   cout << "******************Array before Sorting: ******************* ";
   cout<<"\n---------------------------------------------------------------------------------\n";
  
   display(arr, n);
   insertionSort(arr, n);
   cout<<"\n--------------------------------------------------------------------------------\n";
   cout << "******************Array after Sorting: ******************** ";
   cout<<"\n--------------------------------------------------------------------------------\n";
   display(arr, n);
}


