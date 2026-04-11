
// When you have two sorted halves:
//  1 3 4 6    0 2 5 7
// All you need to do is compare the values on both halves one after the other, compare 1 and 0, 0 comes first, compare 1 and 2, 1 comes next, then 3 and 2, 2 comes next, until you get to the last value

// pseudocode
// If only one number
//     Quit
// Else
//    Sort left half of numbers
//    Sort right half of numbers
//    Merge sorted halves


// 6 3 4 1  5 2 7 0
// Sort left half:   6 3 4 1 => 6 3: sort the left half of the right half => 6 
// Sort the right half => 3
// merge: 3 6 

// Sort the right half: 4 1: sort the left half of the right half => 4
// Sort the other right half => 1
// merge: 1 4

// Merge: 1 3 4 6

// Sort left half: 5 2 7 0 => 5 2: sort the left half of the right half => 5
// sort the right half => 2
// merge: 2 5

// Sort the right half => 7 0: sort the left half of the right half => 7
// Sort the right half => 0
// merge: 0 7

// Merge: 0 2 5 7

// Merge both sorted halves: 0 1 2 3 4 5 6 7

// merge sort  is on the order of: O(n log n) (upper bound)
// omega(n log n) (lower bound)
// theta(n log n)

// DIVIDE AND CONQUER!!!!...