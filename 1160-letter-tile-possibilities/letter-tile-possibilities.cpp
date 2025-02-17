class Solution {
public:
    unordered_set<string> all;
    int numTilePossibilities(string tiles) {
        vector<bool> visited(tiles.size(), false);
        backtrack(tiles, "", visited);
        return all.size();
    }

    void backtrack(string &tiles, string word, vector<bool> &visited){

        for(int i=0; i< tiles.size(); i++){
             
             if( visited[i]) continue;

             string charSequence = word + tiles[i];
             visited[i] = true;

             all.insert(charSequence);
             backtrack(tiles, charSequence, visited);
             visited[i] = false;
        }
    }
};