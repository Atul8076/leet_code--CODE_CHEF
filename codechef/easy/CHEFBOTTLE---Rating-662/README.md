# CHEFBOTTLE - Rating 662

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Chef and Water Bottles

Chef has $N$ empty bottles where each bottle has a capacity of $X$ litres.
There is a water tank in Chefland having $K$ litres of water. Chef wants to fill the empty bottles using the water in the tank.

Assuming that Chef does not spill any water while filling the bottles, find out the  **maximum**  number of bottles Chef can fill completely.

### Input Format
- First line will contain $T$, number of test cases. Then the test cases follow.
- Each test case contains of a single line of input, three integers $N, X,$ and $K$.
### Output Format

For each test case, output in a single line answer, the  **maximum**  number of bottles Chef can fill completely.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq N, X \leq 10^5$
- $0 \leq K \leq 10^5$
### Sample 1:
Input
Output

```
3
5 2 8
10 5 4
3 1 4
```

```
4
0
3
```

### Explanation:

 **Test Case $1$:**  The amount of water in the tank is $8$ litres. The capacity of each bottle is $2$ litres. Hence, $4$ water bottles can be filled completely.

 **Test Case $2$:**  The amount of water in the tank is $4$ litres. The capacity of each bottle is $5$ litres. Hence, no water bottle can be filled completely.

 **Test Case $3$:**  The amount of water in the tank is $4$ litres. The capacity of each bottle is $1$ litre. Chef has $3$ bottles available. He can fill all these bottles completely using $3$ litres of water.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-22T11:02:34.140Z  

```c_cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, k;
        cin >> n >> x >> k;
        
        int bottles_filled = k / x;
        cout << min(n, bottles_filled) << endl;
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CHEFBOTTLE)