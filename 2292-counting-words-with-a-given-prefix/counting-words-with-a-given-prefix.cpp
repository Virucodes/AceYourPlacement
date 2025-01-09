class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int count=0;
        for(auto word: words){

            if(word.size()>=pref.size() && word.compare(0,pref.length(),pref)==0) count++;

        }
        return count;


    }
};