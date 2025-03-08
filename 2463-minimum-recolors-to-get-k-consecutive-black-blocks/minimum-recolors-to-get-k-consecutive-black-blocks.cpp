// class Solution {
// public:
//     int minimumRecolors(string blocks, int k) {
        

//         int minop = k;

//         int i=0;
//         int j=-1;


//         int white_count = 0;



//         while(j < blocks.length())
//         {

//             if(blocks[j] == 'W')
//             {
//                 white_count++;
//             }

//             if(j-i+1 < k)
//             {
//                 j++;
                
//             }
//             else if(j-i+1 == k)
//             {
//                 minop = min(white_count,minop);
                
//                 if(blocks[i] == 'W')
//                 {
//                     white_count--;
                   
//                 }
//                 i++;
            
//             }
           
//         }

//         return minop;
//     }
// };

class Solution {
public:
    int minimumRecolors(string& blocks, int k) {
        const int n=blocks.size();
        int W=count(blocks.begin(), blocks.begin()+k, 'W');
        int recolor=W;
        for(int l=0, r=k; r<n; r++, l++){
            W+=(blocks[r]=='W')-(blocks[l]=='W');
            cout<<W<<" ";
            recolor=min(recolor, W);
        }
        return recolor;
    }
};