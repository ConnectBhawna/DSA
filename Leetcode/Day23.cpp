class Solution {
public:
    int minimumDeviation(vector<int>& arr) {
        int n = arr.size(); // extracting size of the array
        
        set<int> s; // declaring set
        for(int i = 0; i < n; i++) // making every odd element to even
        {
            if(arr[i] % 2 == 1) // if it is odd
            {
                arr[i] = 2 * arr[i]; // multiply it by 2
                
                s.insert(arr[i]); // and then insert it to set
            }
            else if(arr[i] % 2 == 0) // if it is already even, 
            {
                s.insert(arr[i]); //simple insert to set
            }
        }
        
        //see proprty we dicussed about set 
        //(The set stores the elements in sorted order)
        
        // set::rbegin() is a built-in function in C++ STL which returns a reverse iterator pointing to the last element in the container and last should be our mx.
        int mx = *s.rbegin();

            
        // begin() function is used to return an iterator pointing to the first element of the set container and first element is our mn
        int mn = *s.begin();
        
        int ans = mx - mn; // intially our answer
        
        while(*s.rbegin() % 2 == 0)
        {
            int last = *s.rbegin(); // take last element (or updated mx element)
            s.erase(last);
            
            s.insert(last / 2); // see property we discuss (second one)
            
            ans = min(ans, *s.rbegin() - *s.begin());
        }
        
        return ans; // at last, return the answer
        
    }
};
