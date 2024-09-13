class Solution {
    public int[] xorQueries(int[] arr, int[][] queries) {
        
        int n = arr.length;
        
        int pre[]= new int[n];
        pre[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1] ^ arr[i];
        }

        int ans[]=new int[queries.length];

         for(int i=0;i<queries.length;i++)
        {
            
                if(queries[i][0]==0) ans[i]=pre[queries[i][1]];

                else
                {
                    ans[i]=pre[queries[i][0]-1] ^ pre[queries[i][1]];
                }
            
        }

        return ans;



        
    }
}