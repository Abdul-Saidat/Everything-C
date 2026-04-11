

// 7  2  5  4  1  6  0  3
//[i]                  [n-1]
// the selection sort in pseudocode
// for i from 0 to n-1
    // find smallest number between numbers[i] and numbers[n-1]
    // swap smallest number with numbers[i]

// after checking the list firstly, the numbers change to
// 0  2  5  4  1  6  7  3

// (n-1) + (n-2) + (n-3) + ... + 1 = n(n-1)/2 = (n^2 - n)/2 = n^2/2 - n/2
// selection sort when analysed this way is on the order of n^2 steps
// i.e O(n^2), omega(n^2), theta(n^2)