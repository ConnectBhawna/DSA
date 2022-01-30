int* game_with_number(int arr[], int n)
{
    
     int last=arr[n-1];https://practice.geeksforgeeks.org/home/
   for(int i=0;i<n;i++){
       arr[i]=arr[i]^arr[i+1];
       if(i==n-1){
           arr[n-1]=last;
           
       }
   }
   return arr;
    
}
