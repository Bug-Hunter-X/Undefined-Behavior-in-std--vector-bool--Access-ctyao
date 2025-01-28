# Undefined Behavior in std::vector<bool> Access

This example demonstrates a common error in C++ involving the use of `std::vector<bool>`.  Accessing elements outside the vector's bounds can lead to undefined behavior, resulting in unpredictable program crashes or incorrect results. 

**Problem:**
The code accesses `vec[index]` without checking if `index` is within the valid range of indices (0 to `vec.size()-1`). If `index` is out of bounds, the behavior is undefined. 

**Solution:**
The code is improved to check the index bounds before accessing the element.  Using `at()` instead of `[]` is also a good practice, as `at()` performs bounds checking and throws an exception if the index is out of range, making debugging easier. 