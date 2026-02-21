// Find all duplicates

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int> result;

//         for (int i = 0; i < nums.size(); i++) {
//             int index = abs(nums[i]) - 1;

//             if (nums[index] < 0) {
//                 result.push_back(abs(nums[i]));
//             } else {
//                 nums[index] = -nums[index];
//             }
//         }

//         return result;
//     }
// };



// This is leet code Problem Solved //


/***/


//Insertion of two arrays

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set<int> s1(nums1.begin(), nums1.end());
//         unordered_set<int> result;

//         for (int x : nums2) {
//             if (s1.count(x)) {
//                 result.insert(x);  
//             }
//         }

//         return vector<int>(result.begin(), result.end());
//     }
// };