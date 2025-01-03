class Solution {
public:
    string interpret(string command) {
        
        string result="";

        for(int i=0;i<command.size();i++){

        if(command[i]=='G') result.push_back('G');
        if(i<command.size() && command[i]=='(' && command[i+1]==')') result.push_back('o');
        if(i< command.size()&& command[i]=='(' && command[i+1]!=')') result.append("al");

        }
        return result;
    }
};