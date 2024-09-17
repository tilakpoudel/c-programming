
# User-Defined Functions in C

## Introduction

A **user-defined function** in C is a block of code created by the programmer to perform a specific task. It is a way to organize and reuse code. Instead of writing the same code multiple times, a function allows you to encapsulate the code and call it whenever needed. Functions help break down large programs into smaller, more manageable pieces, making the code cleaner, more modular, and easier to maintain.

Here's a simple structure of a user-defined function in C:

```c
// Function declaration
return_type function_name(parameters) {
    // Function body
    // Code to execute
    return value; // Optional, depending on return type
}

// Function call
function_name(arguments);
```

### Example
```c
#include <stdio.h>

// User-defined function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int result = addNumbers(5, 3); // Function call
    printf("Sum: %d", result); // Output: Sum: 8
    return 0;
}
```

## Advantages of User-Defined Functions

1. **Code Reusability**: Functions allow code to be written once and used multiple times. This avoids repetition and promotes reuse.
2. **Modularity**: Large problems can be divided into smaller sub-problems, making the code easier to understand, debug, and maintain.
3. **Easier Maintenance**: Changes can be made in one place (the function) and applied wherever the function is used.
4. **Improved Readability**: Functions allow programmers to break down complex logic into simpler, more understandable units.
5. **Reduced Complexity**: By dividing a large task into smaller functions, the complexity of the program is reduced.
6. **Facilitates Debugging**: Errors are easier to isolate within functions, which simplifies the debugging process.

## User-Defined vs Library Functions

### 1. **User-Defined Functions**
- Created by the programmer to perform specific tasks that may not be provided by standard libraries.
- Can be customized and tailored to the needs of the program.
- Structure: Need to be declared, defined, and called by the programmer.

Example:
```c
int square(int x) {
    return x * x;
}
```

### 2. **Library Functions**
- Predefined functions provided by C standard libraries, such as `printf()`, `scanf()`, `strlen()`, etc.
- These are optimized and tested functions that help with common tasks like input/output, string manipulation, and mathematical operations.
- Provided by libraries like `<stdio.h>`, `<math.h>`, etc.

Example:
```c
#include <stdio.h>
printf("Hello, World!");
```

## Comparison Table

| Feature                     | User-Defined Functions                                      | Library Functions                              |
|-----------------------------|-------------------------------------------------------------|------------------------------------------------|
| **Creation**                 | Created by the programmer                                  | Provided by C standard libraries               |
| **Customization**            | Fully customizable to suit specific needs                  | Predefined and cannot be modified              |
| **Optimization**             | May require optimization by the programmer                 | Already optimized for performance              |
| **Purpose**                  | Solve specific problems that are unique to the program      | Handle common tasks (I/O, math, strings, etc.) |
| **Usage**                    | Must be declared, defined, and called by the user           | Can be used directly by including the library  |

## Conclusion

User-defined functions allow C programmers to create their own functions to perform specific tasks. They provide flexibility and enhance the modularity of the code, while library functions are pre-built and widely used for common tasks. Combining both approaches leads to efficient and maintainable code.

## Elements or components of function
1. Function Declaration: Introduces the function to the compiler.
2. Return Type: Specifies the type of value the function will return.
3. Function Name: The name used to call the function.
4. Parameters: Input values the function uses to perform a task.
5. Function Body: Contains the code that executes the task.
6. Return Statement: Sends a value back to the caller.
7. Function Call: The point in the program where the function is invoked.

Example:
```
#include <stdio.h>

// Function declaration
int addNumbers(int a, int b);

// Function definition
int addNumbers(int a, int b) {
    return a + b; // Adds two numbers and returns the result
}

int main() {
    int result = addNumbers(10, 20); // Function call
    printf("Sum: %d", result); // Output: Sum: 30
    return 0;
}
```


## Categories of user defined functions (Diffrent forms of functions)
1. ### No Parameters, No Return Value
These functions neither accept any input parameters nor return any value. They are typically used for performing tasks like printing messages or manipulating global variables.

```
#include <stdio.h>

void printMessage() {
    printf("Hello, World!\n");
}

int main() {
    printMessage(); // Function call
    return 0;
}

```
2. ### With Parameters, No Return Value
These functions take input parameters but do not return any value. They are used when an action needs to be performed using the provided data, but no result is needed.

```
#include <stdio.h>

void printSum(int a, int b) {
    printf("Sum: %d\n", a + b);
}

int main() {
    printSum(5, 3); // Function call with arguments
    return 0;
}

```

3. ### No Parameters, With Return Value
These functions do not take input parameters but return a value. They are useful for generating or calculating a result.

```
#include <stdio.h>

int getNumber() {
    return 42;
}

int main() {
    int num = getNumber(); // Function call
    printf("Number: %d\n", num);
    return 0;
}

```

4. ### With Parameters, With Return Value
These functions take input parameters and return a value. They are the most versatile form, allowing functions to process input and return a result.

```
#include <stdio.h>

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int result = addNumbers(10, 20); // Function call
    printf("Sum: %d\n", result);
    return 0;
}

```

## Summary of Categories

| **Category**                               | **Parameters** | **Return Value** | **Use Case**                                     |
|--------------------------------------------|----------------|------------------|--------------------------------------------------|
| **No Parameters, No Return Value**         | No             | No               | Tasks like printing or modifying global variables |
| **With Parameters, No Return Value**       | Yes            | No               | Perform actions using inputs, no result returned  |
| **No Parameters, With Return Value**       | No             | Yes              | Generate or calculate a value to be returned      |
| **With Parameters, With Return Value**     | Yes            | Yes              | Perform tasks using inputs and return a result    |


## Recursion
- Recursion is a programming technique where a function calls itself to solve a problem. 
- It is particularly useful for problems that can be broken down into smaller, similar subproblems. 
- Understanding recursion involves recognizing the two main components: the base case (the condition under which the recursion stops) and the recursive case (the part of the function where it calls itself).

### Key Concepts of Recursion
- Base Case: This is the condition that stops the recursion. Without a base case, the function would call itself indefinitely, leading to a stack overflow.
- Recursive Case: This part of the function reduces the problem into smaller instances and makes a call to itself.

#### Example: Factorial Calculation
A classic example of recursion is calculating the factorial of a number n is defined as:
`n!=n×(n−1)!`

For example:
```
5!=5×4!
4!=4×3!
3!=3×2!
2!=2×1!
1!=1 (base case)
```

```
#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case
    if (n == 1 || n == 0) {
        return 1;
    } else {
        // Recursive case
        return n * factorial(n - 1);
    }
}

int main() {
    int number = 5;
    int result = factorial(number);
    printf("Factorial of %d is: %d\n", number, result);
    return 0;
}
```
## Types of function call
In C programming, arguments can be passed to functions in two primary ways: pass by value and pass by reference. Each method has its own implications on how data is handled within functions.

1. ### Pass by Value
In pass by value, a copy of the actual argument's value is passed to the function. This means that changes made to the parameter inside the function do not affect the original variable.

Example:
```
#include <stdio.h>

// Function that tries to modify the value
void modifyValue(int num) {
    num = 20; // This change won't affect the original variable
}

int main() {
    int a = 10;
    printf("Before modifyValue: a = %d\n", a);
    modifyValue(a); // Pass by value
    printf("After modifyValue: a = %d\n", a); // Original value remains unchanged
    return 0;
}

Output: 
Before modifyValue: a = 10
After modifyValue: a = 10
```

2. ### Pass by Reference
In pass by reference, the address of the actual argument is passed to the function. This allows the function to modify the original variable directly. To achieve this in C, pointers are used.

Example of Pass by Reference
```
#include <stdio.h>

// Function that modifies the value using pointers
void modifyValue(int *num) {
    *num = 20; // This change will affect the original variable
}

int main() {
    int a = 10;
    printf("Before modifyValue: a = %d\n", a);
    modifyValue(&a); // Pass by reference (address of a)
    printf("After modifyValue: a = %d\n", a); // Original value is modified
    return 0;
}

Output:
Before modifyValue: a = 10
After modifyValue: a = 20
```

### Summary of Differences
#### Pass by Value:
- A copy of the variable's value is passed.
- Changes made to the parameter do not affect the original variable.
- Generally safer as it prevents unintended side effects.
#### Pass by Reference:
- The address of the variable is passed.
- Changes made to the parameter affect the original variable.
- More efficient for large data structures (like arrays) since no copy is made.
