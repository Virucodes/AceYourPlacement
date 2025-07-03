class Solution {
public:
    int mySqrt(int x) {
        
       int start = 1, end = x, index=0;
       long long mid = -1;

        while(start <= end){

            mid = start + (end-start)/2;

            if(mid * mid == x) return mid;

            else if(mid * mid < x){
                index = mid;
                start = mid + 1;
            }
            else end = mid - 1;
            
        }
        return index;
    }
};