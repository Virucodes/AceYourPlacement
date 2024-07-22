class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
          int flag;
          int n = names.size();
          for(int i=0;i<n;i++)
          {
              flag=0;
              for(int j=0;j<n-i-1;j++)
              {
                  if(heights[j]<heights[j+1])
                  {
                    swap(heights[j],heights[j+1]);
                    swap(names[j],names[j+1]);
                    flag=1;
                  }
              }
              if(flag==0)
                 break;
          }

          return names;
    }
};