# Pointers
- Pointers in C are variables that store the memory address of another variable. 
- They are powerful and widely used in C programming for tasks like dynamic memory allocation, array manipulation, and passing variables by reference.

## Key Concepts:
1.  Pointer Declaration: 
A pointer is declared using an asterisk * before the variable name.
```
int *p;
```
This declares a pointer p that can store the address of an integer.

2. Address Operator (&): This is used to get the address of a variable.

```
int a = 10;
p = &a;  // p now holds the address of variable a
```
3. Dereference Operator (*): This is used to access the value stored at the address held by the pointer.

```
int value = *p;  
// value is now 10, the value at the address stored in p
```

Example
```
#include <stdio.h>

int main() {
    int a = 10;     // Declare an integer variable
    int *p = &a;    // Declare a pointer to an integer and assign the address of a

    printf("Value of a: %d\n", a);           // Output the value of a
    printf("Address of a: %p\n", &a);        // Output the address of a
    printf("Value of p (address stored in p): %p\n", p);  // Output the address stored in p
    printf("Value pointed by p: %d\n", *p);  // Output the value at the address stored in p (which is the value of a)

    // Changing value of a using the pointer
    *p = 20;
    printf("New value of a: %d\n", a);       // Output the new value of a (which is 20 now)

    return 0;
}

```
Explanation:
int *p = &a; – Declares a pointer p and stores the address of variable a.
*p = 20; – This changes the value of a to 20 by dereferencing the pointer.

```
Value of a: 10
Address of a: (some address)
Value of p (address stored in p): (same address as above)
Value pointed by p: 10
New value of a: 20
```

## Why use pointers?
- Efficiency: Pointers can improve efficiency by avoiding copying large amounts of data.
- Dynamic Memory: Pointers are essential for managing dynamic memory (e.g., using malloc).
- Pass by Reference: Pointers allow functions to modify variables directly.


## Null pointer
A null pointer in C is a pointer that doesn't point to any valid memory location. It's a special pointer value used to signify that the pointer is not currently referencing any data or object.

```
#include <stdio.h>

int main() {
    int *ptr = NULL;   // Initialize a pointer to NULL
    
    if (ptr == NULL) {
        printf("Pointer is null, it doesn't point to any valid memory.\n");
    }
    
    // Unsafe to dereference the pointer here because it is null
    // printf("%d", *ptr); // This will cause a segmentation fault

    return 0;
}
```
## Pointer to pointer (Double pointer)
- A double pointer (or pointer to a pointer) in C is a pointer that holds the address of another pointer, which in turn points to some data. 
- They are often used when you need to change the value of a pointer (e.g., in dynamic memory allocation, passing 2D arrays, or modifying pointers in functions).

Key Concepts:
Single Pointer (*): Holds the address of a variable.
Double Pointer (**): Holds the address of another pointer.

Declaration
```
int **ptr2;
Here, ptr2 is a pointer to a pointer that points to an integer.
```

Example
```
#include <stdio.h>

int main() {
    int a = 10;
    int *ptr1 = &a;  // ptr1 points to the address of a
    int **ptr2 = &ptr1;  // ptr2 points to the address of ptr1

    // Output the values
    printf("Value of a: %d\n", a);            // Value of a
    printf("Value of *ptr1 (value of a): %d\n", *ptr1);  // Value at address stored in ptr1
    printf("Value of **ptr2 (value of a): %d\n", **ptr2); // Value at address stored in ptr2, which is the address of ptr1

    // Output the addresses
    printf("Address of a: %p\n", &a);
    printf("Value of ptr1 (address of a): %p\n", ptr1);    // ptr1 holds the address of a
    printf("Value of ptr2 (address of ptr1): %p\n", ptr2);  // ptr2 holds the address of ptr1
    printf("Address of ptr1: %p\n", &ptr1);  // Address of ptr1

    return 0;
}
```
## Array of pointers
- An array of pointers is an array where each element is a pointer. 
- This structure is useful when you need to manage multiple strings, arrays, or other data structures that require dynamic memory.

### Key Concepts:
1.  Array of Pointers: An array where each element is a pointer to some data type (e.g., int, char, etc.).
2.  Pointer to Array: A pointer that points to the whole array


Example: Array of Pointers to Integers
```
#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *arr[3];  // Declare an array of 3 integer pointers

    arr[0] = &a;  // Store the address of a in arr[0]
    arr[1] = &b;  // Store the address of b in arr[1]
    arr[2] = &c;  // Store the address of c in arr[2]

    // Accessing the values using the array of pointers
    for(int i = 0; i < 3; i++) {
        printf("Value of arr[%d] (value pointed by arr[%d]): %d\n", i, i, *arr[i]);
    }

    return 0;
}

```

## Passing a pointer to a function
- Passing a pointer to a function allows the function to modify the value of the variable to which the pointer points. 
- This is often used for modifying variables, working with arrays, and dynamic memory allocation.

```
#include <stdio.h>

// Function that takes a pointer to an int as an argument
void modifyValue(int *ptr) {
    *ptr = 20;  // Dereference the pointer to modify the value it points to
}

int main() {
    int num = 10;

    printf("Before modifyValue: %d\n", num);  // Output the initial value of num

    modifyValue(&num);  // Pass the address of num to the function

    printf("After modifyValue: %d\n", num);   // Output the modified value of num

    return 0;
}

```

### Pointer and 1-d array
```
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Declare and initialize a 1D array
    int *ptr;                           // Declare a pointer to an integer

    ptr = arr;  // Point the pointer to the first element of the array

    // Accessing array elements using the pointer
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, *(ptr + %d) = %d\n", i, arr[i], i, *(ptr + i));
    }

    return 0;
}

```

### Pointer and 2 d array
Using pointers with a two-dimensional array (2D array) in C allows you to navigate through the elements of the array efficiently. Let's explore a simple example of how pointers interact with 2D arrays.

Basic Concept:
- A 2D array in C is essentially an array of arrays. For example, a 2D array of size m x n can be visualized as m arrays, each containing n elements.
- A pointer can be used to navigate through the elements of the 2D array.

```
#include <stdio.h>

int main() {
    // Declare and initialize a 2D array
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int (*ptr)[4];  // Declare a pointer to an array of 4 integers
    ptr = arr;      // Point to the first array (first row) of the 2D array

    // Accessing elements using the pointer
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("arr[%d][%d] = %d, *(*(ptr + %d) + %d) = %d\n", 
                   i, j, arr[i][j], i, j, *(*(ptr + i) + j));
        }
    }

    return 0;
}

```

## Dynamic memory allocation (DMA)

- Dynamic memory allocation in C allows you to allocate memory during runtime using pointers. - This is particularly useful when you don't know the size of the data in advance. 
- The standard library provides functions like malloc, calloc, realloc, and free for dynamic memory management.

### Key Functions:
- `malloc(size_t size)`: Allocates a block of memory of specified size (in bytes) and returns a pointer to the beginning of the block. The content of the allocated memory is uninitialized.
- `calloc(size_t num, size_t size)`: Allocates memory for an array of num elements, each of a certain size (in bytes), and initializes all bytes to zero.
- `realloc(void *ptr, size_t new_size)`: Resizes the memory block pointed to by ptr to new_size. It may move the block to a new location if the requested size is larger than the original.
- `free(void *ptr)`: Frees the memory previously allocated by malloc, calloc, or realloc.

```
#include <stdio.h>
#include <stdlib.h>  // For malloc, free

int main() {
    int n, i;
    int *arr;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}

```