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


/***/


// Pair Sum



// #include <bits/stdc++.h>

// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    vector<vector<int>> ans;

//    for (int i = 0; i<arr.size(); i++){

//       for (int j = i+1; j<arr.size(); j++){
//          if(arr[i] +arr[j] == s){

//             vector<int> temp;
//             temp.push_back(min(arr[i], arr[j]));
//             temp.push_back(max(arr[i], arr[j]));
//             ans.push_back(temp);
//          }
//       }
//    }
//    sort(ans.begin(), ans.end());
//    return ans;
// }

/***/


//Triplets with given sum


// #include <bits/stdc++.h> 
// vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
// 	// Write your code here.

// 	vector<vector<int>> result;

// 	// Step 1: Sort array
// 	sort(arr.begin(), arr.end());

// 	// Step 2: Fix first element
// 	for (int i = 0; i < n - 2; i++) {

// 		// Skip duplicates
// 		if (i > 0 && arr[i] == arr[i - 1]) continue;

// 		int left = i + 1;
// 		int right = n - 1;

// 		while (left < right) {

// 			long long sum = (long long)arr[i] + arr[left] + arr[right];

// 			if (sum == K) {

// 				result.push_back({arr[i], arr[left], arr[right]});

// 				left++;
// 				right--;

// 				// Skip duplicate values
// 				while (left < right && arr[left] == arr[left - 1]) left++;
// 				while (left < right && arr[right] == arr[right + 1]) right--;
// 			}
// 			else if (sum < K) {
// 				left++;
// 			}
// 			else {
// 				right--;
// 			}
// 		}
// 	}

// 	return result;
// }