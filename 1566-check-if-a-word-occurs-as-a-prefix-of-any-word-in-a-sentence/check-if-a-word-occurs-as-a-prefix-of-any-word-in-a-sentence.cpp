class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        
        istringstream stream(sentence);
        string word;

        vector<string> v;

        while(stream >> word)
        {
            v.push_back(word);
        }

        for(string word: v)
        {
            cout<<word<<endl;
        }
        bool f = true;
        for(int i=0;i<v.size();i++)
        {
            f = false;
            if(v[i].size()<searchWord.size()) continue;

            for(int j=0;j<searchWord.size();j++)
            {
               
                if(v[i][j]!=searchWord[j]) f = true;
            }

            if(f) continue;
            return i+1;
        }

        return -1;

    }
};