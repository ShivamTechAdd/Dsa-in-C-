// class Solution {
//     public:
//         int countSubarrays(vector<int>& arr) {
//             int n = arr.size();
//             int count = 0;
//             vector<vector<int>> res;
//             //all subarrays;
//             for (int start = 0; start < n; start++) {   // Subarray का start point
//               vector<int> ans;
//                 for (int end = start; end < n; end++) { // Subarray का end point
//                     for (int i = start; i <= end; i++) { // start से end तक elements निकालो
//                         ans.push_back(arr[i]);
//                     }
//                     cout << endl;
//                     res.push_back(ans);
//                 }
//             }
//             return count;
//         }
//     };