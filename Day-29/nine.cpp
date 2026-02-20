// class Solution {
// public:
//     vector<int> EqualSum(vector<int> a) {
//         long long tot = 0, pre = 0, best = LLONG_MAX;
//         int pos = 1, flag = 1, n = a.size();
        
//         for(int x : a) tot += x;

//         for(int i = -1; i < n; i++) {
//             if(i >= 0) pre += a[i];

//             long long x1 = tot - 2 * pre;   // x in left
//             if(x1 >= 0 && x1 < best) best = x1, pos = i + 2, flag = 1;

//             long long x2 = 2 * pre - tot;   // x in right
//             if(x2 >= 0 && x2 < best) best = x2, pos = i + 2, flag = 2;
//         }

//         return {(int)best, pos, flag};
//     }
// };
// this code gives error in gfg it's hard to debug what comes when i ask to chatgpt it is also could not figure out the solution