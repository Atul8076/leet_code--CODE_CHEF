# Make the array beautiful

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of negative and non-negative integers. You need to make the array beautiful.

- An array is beautiful if two adjacent integers, arr[i] and arr[i+1] are either negative or positive. You can do the following operation any number of times until the array becomes beautiful.
- If two adjacent are different i.e. one of them is negative and other is positive, remove them. 
- Return the beautiful array after performing the above operation.
- An empty array is also a beautiful array.
- There can be multiple beautiful output arrays. For consistencty with the test cases, scan the array from left to right for removing two adjacent.

 **Note:** 0 is considered a positive number in this context.

 **Examples:** 

```
Input: arr[] = [4, 2,-2, 1] 
Output: [4, 1]
Explanation: As at indices 1 and 2, 2 and -2 have different sign, they are removed. And the the final array is: [4, 1].

```

```
Input: arr[] = [2,-2, -1, 1]
Output: []
Explanation: As at indices 0 and 1, 2 and -2 have different sign, so they are removed. Now the array is 1 -1.Now 1 and -1 are also removed as they have different sign. So the final array is empty. 
```

 **Constraints:** 
1 ≤ arr.size() ≤ 105
-105 ≤ arr[i] ≤ 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T10:33:48.925Z  

```cpp
class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>st;
        for(int i = 0; i<arr.size(); i++){
            if(st.empty()){
                st.push(arr[i]);
            }
            else if(arr[i]>=0){
                if(st.top()>=0){
                    st.push(arr[i]);
                }
                else{
                    st.pop();
                }
            }
            else{
                if(st.top()<0){
                    st.push(arr[i]);
                }
                else{
                    st.pop();
                }
            }
        }
        int n = st.size();
        vector<int>arr1(n);
        for(int i = n-1; i>=0; i--){
            arr1[i] = st.top();
            st.pop();
        }
        return arr1;
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/make-the-array-beautiful--170647/1)