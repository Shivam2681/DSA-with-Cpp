// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         string ans = "";
//         int i=0;
//         while(true){
//             char curr_ch = 0;
//             for(auto str:strs){

//                 if(i >= str.size()){
//                    curr_ch = 0;
//                    break;
//                 }
//                 if(curr_ch == 0){
//                    curr_ch = str[i];
//                 }
//                 else if(str[i] != curr_ch){
//                    curr_ch = 0;
//                    break;
//                 }
//             }
//             if(curr_ch == 0){
//                 break;
//             }
//             ans.push_back(curr_ch);
//             i++;
//         }
//         return ans;
//     }
// };




//  string ans="";
//         sort(strs.begin(),strs.end());
//         int n=strs.size();
//         string first=strs[0],last=strs[n-1];
//         for(int i=0;i<min(first.size(),last.size());i++){
//             if(first[i]!=last[i]){
//                 return ans;
//             }
//             ans+=first[i];
//         }
//         return ans;