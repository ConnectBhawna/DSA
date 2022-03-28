class Solution {
public:
    bool search(vector<int>& nums, int target) {
         if( nums[0] == target or nums.back() == target ) return true; 
        
        const int n = nums.size();
        int l = 0 , h = n-1;
        while( l+1 < n and nums[l] == nums[l+1]) l++;

        
        if( l == n-1){
            if( nums[0] == target ) return true;
            else return false;
        }
        
        
        while( h >= 0 and nums[h] == nums[0] ) h--;
        int start = l , end = h;
        
        
        int pivot = -1;
        while( l <= h ){
            int mid = l + (h-l)/2;
            if( nums[mid] >= nums[0] ) l = mid+1;
            else {
                pivot = mid;
                h = mid-1;
            }
        }
        
        
        if( pivot == -1 ) l = start , h = end; 
        else {
            if( target > nums[end] ) l = start , h = pivot-1; 
            else l = pivot , h = end; 
        }
        
       
        while ( l <= h ){
            int mid = l + (h-l)/2;
            if( nums[mid] > target ) h = mid-1;
            else if( nums[mid] < target ) l = mid+1;
            else return true;
        }
        
        return false;
        
    }
    
};