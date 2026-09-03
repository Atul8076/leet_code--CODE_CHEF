# COMPILER - Rating 1588

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Compilers and Parsers

For an expression to be valid, a “<” symbol must always have a corresponding “>” character somewhere (not necessary immediately) after it. Moreover, each “>” symbol should correspond to exactly one “<” symbol.

So, for instance, the instructions:

```
<>
<>
<><>

```

are all valid. While:

```
>>
><><

```

are not.

Given some expressions which represent some instructions to be analyzed, you should tell the length of the longest  **prefix**  of each of these expressions that is valid, or  **0**  if there's no such a prefix.

### Input

Input will consist of an integer  **T**  denoting the number of test cases to follow.

Then,  **T**  strings follow, each on a single line, representing a possible expression in L++.

### Output

For each expression you should output the length of the longest prefix that is valid or  **0**  if there's no such a prefix.

### Constraints
- 1 ≤ $T$ ≤ 500
- 1 ≤ The length of a single expression ≤ $10^6$
- The total size all the input expressions is no more than $5 * 10^6$
### Sample 1:
Input
Output

```
3
<<>>
><
<>>>
```

```
4
0
2
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-03T17:39:47.810Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;

while(t--){
    string s;
    cin>>s;
    stack<char>st;
    int m = 0;
    for (int i = 0; i<s.length(); i++){
        if(s[i] == '<'){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                break;
            }
            else{
                st.pop();
                if(st.empty()){
                    m = i+1;
                }
            }
        }
    }
    cout<<m<<endl;
}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/COMPILER)