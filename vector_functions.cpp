/*
================================================================================
                    ARRAY SORTING FUNCTIONS - STYLISH VERSION
================================================================================
This program demonstrates three different methods to sort arrays/vectors
Author: C++ Learning BootCamp
Purpose: Educational - Understanding sorting algorithms
================================================================================
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ================================================================================
// ║                  METHOD 1: BUILT-IN sort() FUNCTION                       ║
// ║                    ⚡ FASTEST & RECOMMENDED (O(n log n))                   ║
// ================================================================================
/*
 * Function: sortArrayBuiltIn()
 * Purpose:  Uses C++'s optimized built-in sort() function
 * 
 * Time Complexity:  O(n log n) - Very efficient!
 * Space Complexity: O(1) - Sorts in-place
 * Algorithm:        QuickSort/IntroSort (internally optimized)
 * 
 * ✓ Fastest method for production code
 * ✓ Only 1 line of actual sorting code
 * ✓ Proven and tested thoroughly
 * ✓ Works for any data type
 * 
 * @param arr: Vector of integers to sort (passed by reference)
 * @return: Sorts array in-place (no return value needed)
 */
void sortArrayBuiltIn(vector<int>& arr) {
    sort(arr.begin(), arr.end());  // ← The magic happens here!
}

// ================================================================================
// ║               METHOD 2: BUBBLE SORT (EDUCATIONAL APPROACH)                ║
// ║                       🎓 LEARNS HOW SORTING WORKS (O(n²))                 ║
// ================================================================================
/*
 * Function: bubbleSort()
 * Purpose:  Demonstrates sorting logic by comparing adjacent elements
 * 
 * Time Complexity:  O(n²) - Slower, but shows the algorithm clearly
 * Space Complexity: O(1) - Sorts in-place
 * Algorithm:        Bubble Sort (Elements "bubble" to their position)
 * 
 * How it works:
 * 1. Compare adjacent elements (arr[j] and arr[j+1])
 * 2. If arr[j] > arr[j+1], swap them
 * 3. Continue until the array is sorted
 * 4. Larger elements "bubble up" to the end with each pass
 * 
 * ✓ Easy to understand
 * ✓ Great for learning algorithm logic
 * ✓ Shows step-by-step comparison process
 * ✗ Slow for large arrays (O(n²) complexity)
 * 
 * @param arr: Vector of integers to sort (passed by reference)
 * @return: Sorts array in-place using bubble sort logic
 */
void bubbleSort(vector<int>& arr) {
    int n = arr.size();  // Get the size of array
    
    // Outer loop: Number of passes needed (n-1 passes)
    for (int i = 0; i < n - 1; i++) {
        
        // Inner loop: Compare adjacent pairs
        // Each pass, we do n-i-1 comparisons (last i elements are already sorted)
        for (int j = 0; j < n - i - 1; j++) {
            
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                
                // SWAP: If current > next, swap them
                //       This is how elements "bubble" to their correct position
                int temp = arr[j];           // Store current element
                arr[j] = arr[j + 1];         // Move next element to current position
                arr[j + 1] = temp;           // Move stored element to next position
                
                // Result: Larger element moved one position to the right
            }
        }
        // After each pass, the largest unsorted element is now in its final position
    }
}

// ================================================================================
// ║              METHOD 3: SORT IN DESCENDING ORDER (REVERSE)                 ║
// ║                    ⚡ SAME SPEED AS METHOD 1 (O(n log n))                  ║
// ================================================================================
/*
 * Function: sortArrayDescending()
 * Purpose:  Sorts array from largest to smallest (reverse order)
 * 
 * Time Complexity:  O(n log n) - Fast, same as regular sort
 * Space Complexity: O(1) - Sorts in-place
 * Algorithm:        QuickSort/IntroSort with greater<int>() comparator
 * 
 * Difference from sortArrayBuiltIn():
 * → Adds "greater<int>()" as third parameter
 * → This tells sort() to use reverse comparison (descending)
 * → Everything else is identical in performance
 * 
 * ✓ Simple modification to built-in sort
 * ✓ No performance penalty
 * ✓ Perfect for cases where you need largest values first
 * 
 * @param arr: Vector of integers to sort (passed by reference)
 * @return: Sorts array in descending order (largest to smallest)
 */
void sortArrayDescending(vector<int>& arr) {
    sort(arr.begin(), arr.end(), greater<int>());  // ← greater<int>() reverses the order
}

// ================================================================================
// ║                    HELPER FUNCTION: PRINT ARRAY CONTENTS                  ║
// ║                              (Display Function)                            ║
// ================================================================================
/*
 * Function: printArray()
 * Purpose:  Displays all elements in the vector on a single line
 * 
 * Benefits:
 * ✓ Reduces code repetition in main()
 * ✓ Consistent formatting for all outputs
 * ✓ Easy to modify display format in one place
 * 
 * @param arr: Const reference to vector (passed by const reference)
 *             → Const because we don't modify it
 *             → Reference to avoid copying the entire array
 * @return: Prints elements separated by spaces, then newline
 */
void printArray(const vector<int>& arr) {
    for (int num : arr) {  // Range-based for loop: iterate through all elements
        cout << num << " ";  // Print each number followed by a space
    }
    cout << endl;  // Print newline after all elements
}

// ================================================================================
// ║                            MAIN PROGRAM STARTS HERE                       ║
// ================================================================================
int main()
{
    // ════════════════════════════════════════════════════════════════════════════
    // STEP 1: CREATE AN UNSORTED ARRAY
    // ════════════════════════════════════════════════════════════════════════════
    vector<int> unsorted = {45, 12, 78, 23, 56, 89, 34, 1, 90, 5};
    
    // ════════════════════════════════════════════════════════════════════════════
    // STEP 2: DISPLAY ORIGINAL UNSORTED ARRAY
    // ════════════════════════════════════════════════════════════════════════════
    cout << "Original unsorted array: ";
    printArray(unsorted);
    
    // ════════════════════════════════════════════════════════════════════════════
    // STEP 3: EXAMPLE 1 - USING BUILT-IN sort() [RECOMMENDED]
    // ════════════════════════════════════════════════════════════════════════════
    // Create a copy of unsorted array (don't modify original)
    vector<int> arr1 = unsorted;
    
    // Sort using built-in sort function
    sortArrayBuiltIn(arr1);
    
    // Display sorted result
    cout << "Sorted with built-in sort(): ";
    printArray(arr1);
    
    // ════════════════════════════════════════════════════════════════════════════
    // STEP 4: EXAMPLE 2 - USING BUBBLE SORT [EDUCATIONAL]
    // ════════════════════════════════════════════════════════════════════════════
    // Create another copy
    vector<int> arr2 = unsorted;
    
    // Sort using bubble sort (watch the algorithm in action!)
    bubbleSort(arr2);
    
    // Display sorted result
    cout << "Sorted with bubble sort: ";
    printArray(arr2);
    
    // ════════════════════════════════════════════════════════════════════════════
    // STEP 5: EXAMPLE 3 - SORTING IN DESCENDING ORDER
    // ════════════════════════════════════════════════════════════════════════════
    // Create another copy
    vector<int> arr3 = unsorted;
    
    // Sort in descending order (largest to smallest)
    sortArrayDescending(arr3);
    
    // Display sorted result
    cout << "Sorted in descending order: ";
    printArray(arr3);
    
    // ════════════════════════════════════════════════════════════════════════════
    // PROGRAM END
    // ════════════════════════════════════════════════════════════════════════════
    return 0;
}

int main()
{
    // Create an unsorted array
    vector<int> unsorted = {45, 12, 78, 23, 56, 89, 34, 1, 90, 5};
    
    cout << "Original unsorted array: ";
    printArray(unsorted);
    
    // Example 1: Using built-in sort (Recommended)
    vector<int> arr1 = unsorted;
    sortArrayBuiltIn(arr1);
    cout << "Sorted with built-in sort(): ";
    printArray(arr1);
    
    // Example 2: Using bubble sort
    vector<int> arr2 = unsorted;
    bubbleSort(arr2);
    cout << "Sorted with bubble sort: ";
    printArray(arr2);
    
    // Example 3: Sorting in descending order
    vector<int> arr3 = unsorted;
    sortArrayDescending(arr3);
    cout << "Sorted in descending order: ";
    printArray(arr3);
    
    return 0;
}   
