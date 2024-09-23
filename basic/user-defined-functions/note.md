
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
#### Pass by Value: Protecting Original Data and Lightweight Operations
- A copy of the variable's value is passed.
- Changes made to the parameter do not affect the original variable.
- Generally safer as it prevents unintended side effects.

##### Practical Use Cases:
- When you don't want to modify the original data: In many situations, you want to ensure that the original data passed to a function remains unchanged. By passing a copy of the variable, the function works with the copy, leaving the original variable intact.

    - Use Case: In banking software, when processing transactions, you want to calculate new values (e.g., account balances) without altering the current values before confirming a transaction.

- Small data types or variables: For small data types like integers, floats, and chars, passing by value is efficient because copying small pieces of data is not performance-heavy.
    - Use Case: In games or scientific calculations, when passing simple scalar values, there's no need to modify the original values (e.g., coordinates or scores).

#### Pass by Reference:  Efficiency and Direct Modifications
- The address of the variable is passed.
- Changes made to the parameter affect the original variable.
- More efficient for large data structures (like arrays) since no copy is made.

##### Practical Use Cases:
- Modifying the original data: When you need to change the original variable, passing by reference allows the function to directly modify it. This is common in functions that manage or update objects, collections, or large data structures.

    - Use Case: In sorting algorithms (like quicksort or mergesort), pass by reference is essential for swapping or updating values in place efficiently.
- Large data structures: For large objects, arrays, or structures, passing by reference avoids the overhead of copying the entire structure. Instead, only the memory address is passed, which is much more efficient.
    - Use Case: In data-heavy applications like image processing, machine learning, or database management, passing large arrays, matrices, or structs by reference is crucial for performance reasons.

#### Key Considerations for Choosing Pass by Value vs Pass by Reference
When to Use Pass by Value:

- When the data is small (e.g., integers, floats) and copying is not performance-intensive.
- When you want to protect the original data from being changed.
- When the operation is lightweight and doesn't require modifying the original data.

When to Use Pass by Reference:

- When you need to modify the original variable.
- When you're dealing with large data structures (arrays, structs) where copying would be costly.
- When you want to return multiple values from a function.
- When memory efficiency is a concern, especially with large data or recursive calls.

#### Real-World Example
- Pass by Value: In cryptographic libraries, you might want to calculate hash values of data. Since you don’t want to modify the original data (like passwords or files), you’ll pass the data by value to ensure its integrity.

- Pass by Reference: In machine learning, when you are training a model using large datasets, you need to pass data structures (like matrices or tensors) by reference to avoid memory overhead, as copying the entire dataset would be inefficient.


## Storage class and Scope rules

In C, storage classes and scope rules define the lifetime, visibility, and initialization of variables in a program. There are four main storage classes: `auto, extern, static, and register`. 
These control how and where variables are stored and their accessibility within different parts of the code.

1. ### Storage Class: auto (Automatic Storage Class)
- Default storage class for local variables.
- Variables are local to the function in which they are defined.
- Lifetime: The variable exists only during the execution of the block in which it is defined (inside a function).
- Initialization: Not automatically initialized; it contains garbage values if not initialized explicitly.

```
#include <stdio.h>

void function() {
    auto int x = 10;  // auto is optional, x is a local variable
    printf("Inside function: x = %d\n", x);
}

int main() {
    function();
    // x is not accessible here
    return 0;
}

Explanation: x is a local variable with the auto storage class. It is created and initialized when function() is called, and it is destroyed when the function completes. Outside function(), x is not accessible.

Scope: Local to the block/function in which it's declared.
```
2.  ### Storage Class: extern (External Storage Class)
- Used to declare a variable that is defined elsewhere, usually in another file or earlier in the same file.
- Lifetime: Exists for the entire duration of the program (global).
- Initialization: Default is 0 for uninitialized extern variables.
- Scope: The variable can be accessed across multiple files (global).

```
#include <stdio.h>

extern int count;  // Declaration of an external variable

void function() {
    count = 10;  // Modify the external variable
    printf("Inside function: count = %d\n", count);
}

int count = 0;  // Definition of the external variable

int main() {
    function();
    printf("Inside main: count = %d\n", count);
    return 0;
}

Explanation: The extern keyword tells the compiler that the variable count is defined somewhere else. In this case, count is defined later in the same file. The variable persists for the duration of the program and can be accessed and modified by multiple functions.

Scope: Global across files or the entire program.
```
3. ### Storage Class: static (Static Storage Class)
- Used to retain the value of a variable across function calls or to limit the scope of a global variable to the file in which it is declared.
- Lifetime: Exists for the entire duration of the program (global), but its scope is limited to the block or function where it is declared.
- Initialization: Automatically initialized to 0 if not explicitly initialized.

#### 3.1. Static Local Variable:
```
#include <stdio.h>

void function() {
    static int x = 0;  // Static local variable retains its value between function calls
    x++;
    printf("x = %d\n", x);
}

int main() {
    function();  // x is incremented to 1
    function();  // x is incremented to 2
    function();  // x is incremented to 3
    return 0;
}

Explanation: The static variable x is local to the function() but retains its value between function calls. Unlike an auto variable, which is reinitialized every time the function is called, x is initialized only once, and its value persists.

Scope: Local to the function but exists throughout the program.
```

#### 3.2 Static Global Variable:
```
#include <stdio.h>

static int count = 5;  // Static global variable, visible only within this file

void function() {
    count++;
    printf("Count in function: %d\n", count);
}

int main() {
    function();
    printf("Count in main: %d\n", count);
    return 0;
}

Explanation: The static global variable count is only accessible within the file it is declared in. Even though it is a global variable, the static keyword limits its visibility to this file. Other files cannot access or modify count.

Scope: Limited to the file in which it is declared, but its lifetime is the entire program.
```

### 4. Storage Class: register (Register Storage Class)
- Suggests to the compiler that the variable be stored in a CPU register instead of RAM for faster access.
- Lifetime: Same as an auto variable (local to the block).
- Scope: Local to the block or function in which it is declared.
- Initialization: Not automatically initialized; contains garbage values if not explicitly initialized.
```
#include <stdio.h>

void function() {
    register int i;  // Request to store i in a CPU register
    for (i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }
}

int main() {
    function();
    return 0;
}

Explanation: The register keyword requests the compiler to store the variable i in a CPU register, which may lead to faster access during repetitive operations, like loops. However, it's just a suggestion, and the compiler may ignore it if registers are unavailable.

Scope: Local to the block or function in which it is declared.
```