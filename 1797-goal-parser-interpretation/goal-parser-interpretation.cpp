class Solution {
public:
    string interpret(string command) {
        string result="";
        for(int i=0;i<command.size();i++){
            if(command[i]=='G') result.push_back('G');
            if(command[i]=='(')
            {
                if(i<command.size() && command[i+1]==')')
                {
                    result.push_back('o');
                }
                else 
                result.append("al");
            }
        }
             
        
        return result;
    }
};