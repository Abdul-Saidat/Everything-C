
// 7  2  5  4  1  6  0  3
//[i] [i+1]
// the bubble sort in pseudocode
// Repeat n times
//  For i from 0 to n-2
//   If numbers[i] and numbers[i+1] out of order
//       Swap them

// (n-1) * (n-1)
// n^2 -2n + 1
// The upper bound of bubble sort running time will be  O(n^2)

// the pseudocode could be this if the list was sorted
// Repeat n-1 times
//  For i from 0 to n-2
//      If numbers[i] and numbers[i+1] out of order
//          Swap them
//  If no swaps
//      Quit

// The lower bound of bubble sort running time will be  omega(n), since I will make only one pass through the list
