// #include<vector>
// int solveMem(int n, int a[],int curr,int prev,vector<vector<int>> &dp){
//     if(curr == n){
//         return 0;
//     }
//     if(dp[curr][prev+1] != -1){
//         return dp[curr][prev+1];
//     }
//     int include = 0;
//     if(prev == -1 || a[curr] > a[prev]){
//         include = 1 + solveMem(n,a,curr+1,curr,dp);
//     }
//     int exclude = 0 + solveMem(n,a,curr+1,prev,dp);
//     return dp[curr][prev+1] = max(include,exclude);
    
// }
//   int solveTab(int n, int a[]){
//         vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        
//         for(int curr = n-1; curr>=0; curr--){
//             for(int prev = curr-1; prev>=-1; prev--){
                
//                 // include
//                 int take = 0;
//                 if(prev == -1 || a[curr] > a[prev])
//                     take = 1 + dp[curr+1][curr+1];
                    
//                 // exclude
//                 int notTake = 0 + dp[curr+1][prev+1];
                
//                 dp[curr][prev+1] = max(take, notTake);
//             }
//         }
        
//         return dp[0][-1+1];
//     }
    //   int solveSpaceOP(int n, int a[]){
       
    //     vector<int> currRow(n+1, 0);
    //     vector<int> nextRow(n+1, 0);
        
    //     for(int curr = n-1; curr>=0; curr--){
    //         for(int prev = curr-1; prev>=-1; prev--){
                
    //             // include
    //             int take = 0;
    //             if(prev == -1 || a[curr] > a[prev])
    //                 take = 1 + nextRow[curr+1];
                    
    //             // exclude
    //             int notTake = 0 + nextRow[prev+1];
                
    //             currRow[prev+1] = max(take, notTake);
    //         }
            
    //         nextRow = currRow;
    //     }
        
    //     return nextRow[0];
    // }
    //  int solveOptimal(int n, int a[]){
       
    //     if(n == 0)
    //         return 0;
            
    //     vector<int> ans;
    //     ans.push_back(a[0]);
        
    //     for(int i=1; i<n; i++){
    //         if(a[i] > ans.back())
    //             ans.push_back(a[i]);
                
    //         else{
    //             // find index of just bigger element
    //             int index = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
    //             ans[index] = a[i];
    //         }
    //     }
        
    //     return ans.size();
    // }
// int longestIncreasingSubsequence(int arr[], int n)
// {
//     // vector<vector<int>> dp(n,vector<int>(n+1,-1));
//     // return solveMem(n,arr,0,-1,dp);
//     // return solveTab(n,arr);
//     //    return solveOptimal(n, arr);
//     return solveSpaceOP(n, arr);

// }
