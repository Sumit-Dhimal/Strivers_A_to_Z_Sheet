# Arrays

## Arrays

Arrays are a collection of elements stored at contiguous memory
locations.\
They allow direct access using indices.

------------------------------------------------------------------------

## Vectors

-   A **vector** represents a dynamic-sized array in the Standard
    Template Library (STL) that automatically grows when elements are
    added beyond the current capacity.
-   Declaration and initialization of a vector:

``` cpp
vector<T> v_name;
```

------------------------------------------------------------------------

## Notes from the Solved Questions

### 3. Sorted and Rotated Array

[Sorted and Rotated Array](../codes/01-Arrays/03_SortedAndRotated.cpp)

-   Main things to remember:

1.  **Check if the array is not sorted (ascending order)**
    -   The array is not sorted if the previous element is greater than
        the current element.
2.  **If case 1 occurs, check if the array is rotated**
    -   For a rotated sorted array,\
        the **last element must be smaller than the first element**.

------------------------------------------------------------------------
