# Arrays

## Arrays


## Vectors
- A vector represents a dynamic sized array in the Standard Template Library(STL) that automatically grows when elements are added beyond current capacity.
- Declaration and Initialization of vector:
> vector<T> v_name;

## Notes form the solved questions 

3. [Sorted and Rotated array] (../codes/01-Arrays/03_SortedAndRotated.cpp)
- Main thing to remember is that there are two edge cases
- 1st case: 
  Array is not sorted (in ascending) if previous element is greater than the current element
- 2nd case:
  If there is a case 1, then check if the array is rotated or not.
  For rotated array, last element of the array must be smaller than the first element.