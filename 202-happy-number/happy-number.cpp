class Solution {
public:
    bool isHappy(int n) {
        
        // if(n == 1 || n==7)  return true;

        // else if(n < 10) return false;

        // else{
              
        //       int sum = 0;

        //       while(n > 0){
        //           int temp = n%10;
        //           sum += temp*temp;
        //           n/=10;
        //       }
        //       return isHappy(sum);
            // }

            auto next = [](int num){
                 
                 int sum = 0;

                 while(num > 0){
                    int temp = num%10;
                    sum += temp*temp;
                    num /=10;
                 }
                 return sum;
            };

            int slow = n;
            int fast = next(n);


            while(fast!= 1 && slow!=1 && slow != fast){
                 
                 slow = next(slow);
                 fast = next(next(fast));
            }

            return fast ==1;
        
    }
};