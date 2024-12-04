class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int srcLen = str1.size();
        int tarLen = str2.size();

        int srcIndex = 0;
        int tarIndex = 0;

        while(srcIndex< srcLen && tarIndex < tarLen){

            if((str1[srcIndex]==str2[tarIndex]) ||
              (str1[srcIndex]== 'z' && str2[tarIndex]=='a') ||
              (str1[srcIndex]+1 == str2[tarIndex])){
                srcIndex++;
                tarIndex++;
              }
              else
                srcIndex++;
        
        }

        return tarIndex == tarLen;
    }
};