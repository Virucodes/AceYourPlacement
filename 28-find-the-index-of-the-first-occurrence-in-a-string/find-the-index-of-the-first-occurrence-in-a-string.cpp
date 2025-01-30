class Solution {
public:
    int strStr(string haystack, string needle) {
        
        // int i=0;

        // while(i < haystack.length()){

        //       if(needle[0] == haystack[i]){
                    
        //             int count = 0;
        //             for(int j = i; j< needle.length(); j++){
        //                  if(haystack[j] == needle[count]){
                              
        //                       if(count == needle.length()-1){
        //                         return i;
        //                       }
        //                       count++;
        //                  }
        //             }
        //             i += needle.length();
        //             continue;
        //       }
              
        // //       i++;
        // }

        // return -1;



        auto it = haystack.find(needle);

        return it;
    }
};