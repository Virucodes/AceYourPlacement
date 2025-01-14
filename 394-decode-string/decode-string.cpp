class Solution {
public:
    string decodeString(string st) {
        
        stack<string> s;

        for(char c : st)
        {
            //if character is [
            if(c != ']'){
                s.push(string(1,c));
            }
            

            //if character is ]
            else{
                
                //we get all substring characters
                string sub = "";
                while(!s.empty() && s.top()!="[")
                {
                    sub = s.top() + sub;
                    s.pop();
                }
                s.pop();


                //we have to check that character is number or not
                string k= "";
                while(!s.empty() && isdigit(s.top()[0])){

                    k = s.top() + k;
                    s.pop();
                }

                int num = stoi(k);
                string newstr = "";
                while(num--) newstr.append(sub);
                s.push(newstr);

            }
        }
        string ans = "";
        while(!s.empty())
        {
            ans =s.top() + ans;
            s.pop();
        }
        return ans;
    }
};