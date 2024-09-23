
/*
C program that demonstrates all the storage classes (auto, extern, static, register) and 
the different scopes (local, global, file, and function scope). 
*/
#include <stdio.h>

// Global variable (extern by default)
int globalVar = 10;  

// File-scoped static global variable (only accessible in this file)
static int fileScopedVar = 100;

// Function declaration for extern usage
void externFunction();

// Function to demonstrate auto and static local variables
void localVarFunction() {
    auto int autoVar = 1;  // Automatic (local) variable, reinitialized every time
    static int staticVar = 1;  // Static local variable, retains value between calls
    
    printf("Inside localVarFunction - autoVar: %d, staticVar: %d\n", autoVar, staticVar);
    
    // Modify the values
    autoVar++;
    staticVar++;
}

// Function to demonstrate register variable
void registerVarFunction() {
    register int regVar = 0;  // Stored in CPU register, if possible
    printf("Inside registerVarFunction - register variable regVar: %d\n", regVar);
}

// Main function
int main() {
    // Demonstrate global and file-scoped static variables
    printf("In main - globalVar: %d, fileScopedVar: %d\n", globalVar, fileScopedVar);
    
    // Modify the global variable
    globalVar += 5;
    
    // Call functions demonstrating auto and static local variables
    localVarFunction();  // First call: autoVar = 1, staticVar = 1
    localVarFunction();  // Second call: autoVar = 1 (reset), staticVar = 2 (retained)
    localVarFunction();  // Third call: autoVar = 1 (reset), staticVar = 3 (retained)
    
    // Call function demonstrating register variable
    registerVarFunction();
    
    // Call an external function defined in another file
    externFunction();
    
    return 0;
}

// External function to demonstrate extern keyword
void externFunction() {
    // Access and modify the global variable
    printf("In externFunction - globalVar: %d\n", globalVar);
    globalVar += 10;
}
