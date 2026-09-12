# NEC - Rating 800

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Necklace

Your best friend has a very interesting necklace with $n$ pearls. On each of the pearls of the necklace there is an integer. However, your friend wants to modify the necklace a bit and asks you for help. She wants to move the first pearl $k$ spots to the left (and do so with all other pearls).

For example: if the necklace was originally $1, 5, 3, 4, 2$ and $k = 2$, now it becomes $3, 4, 2, 1, 5$.

Help your best friend determine how the necklace will look after the modification.

### Input Format
- First line will contain $T$, the number of test cases. Then the test cases follow.
- Each test case contains two lines of input, the first containing two integers $n, k$.
- The second line of each test case contains $n$ integers $a_1, a_2,..., a_n$ representing the integers on the pearls starting from the first one.
### Output Format

For each testcase, output in a single line $n$ integers representing the necklace after modification.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq n \leq 10^5$
- The sum of $n$ over all test cases does not exceed $3 \cdot 10^5$
- $0 \leq k \leq n$
- $-10^9 \leq a_i \leq 10^9$
### Subtasks
- 30 points : The sum of $n$ over all test cases does not exceed $5000$
- 70 points : original constraints
### Sample 1:
Input
Output

```
2
5 3
1 5 3 4 2
6 5
10 1 2 9 8 2
```

```
4 2 1 5 3
2 10 1 2 9 8
```

### Explanation:

The first test case is the example from the statement. In the second test case, when we move every element 5 to the left we get the answer.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-12T17:31:52.730Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    queue<int>st;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        st.push(arr[i]);
    }
    for(int i = 0; i<n; i++){
        
        st.push(arr[i]);
    }
    for(int i = 1; i<=k; i++){
        st.push(st.front());
        st.pop();
    }
    for(int i = 0 ; i<st.size(); i++){
        cout<<st.front()<<" ";
        st.pop();
    }
    cout<<endl;
    
}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/NEC)