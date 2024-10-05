# File handling
In C, handling data files typically involves using the standard I/O functions defined in the stdio.h library. Here are some common operations you can perform when working with files in C:
## 1. Opening a File:

- To open a file, use the `fopen()` function. It returns a pointer to a FILE object that represents the file.
```
FILE *fopen(const char *filename, const char *mode);
Modes:

"r": Open for reading.
"w": Open for writing (creates a new file or truncates an existing file).
"a": Open for appending (writing data at the end).
"r+": Open for reading and writing.
"w+": Open for reading and writing (truncates the file).
"a+": Open for reading and appending.
```

Example:
```
FILE *file = fopen("data.txt", "r");
if (file == NULL) {
    printf("Could not open file.\n");
    return 1;
}
```

## 2. Reading from a File:

There are multiple ways to read from a file depending on the type of data:

- Reading characters: Use fgetc() to read one character at a time.

```
char c = fgetc(file);
```
- Reading strings: Use fgets() to read a string or line from a file.
```
char buffer[100];
fgets(buffer, 100, file);
```

- Reading formatted data: Use fscanf() to read formatted input.
```
int x;
fscanf(file, "%d", &x);
```
## 3. Writing to a File
To write data to a file, use the following functions:

- Writing characters: Use fputc().

```
fputc('A', file);

```
- Writing strings: Use fputs().

```
fputs("Hello, World!", file);
```

- Writing formatted data: Use fprintf().
```
int x = 10;
fprintf(file, "Value: %d\n", x);
```

## 4. Closing a File
When you are done working with a file, always close it using fclose() to free resources.

```
fclose(file);
```

## 5. Example: Reading and Writing a File
Here's a complete example that demonstrates how to read from one file and write to another.

```
#include <stdio.h>

int main() {
    // Open the source file for reading
    FILE *srcFile = fopen("input.txt", "r");
    if (srcFile == NULL) {
        printf("Could not open input file.\n");
        return 1;
    }

    // Open the destination file for writing
    FILE *destFile = fopen("output.txt", "w");
    if (destFile == NULL) {
        printf("Could not open output file.\n");
        fclose(srcFile);
        return 1;
    }

    // Copy contents from input.txt to output.txt
    char ch;
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close the files
    fclose(srcFile);
    fclose(destFile);

    printf("File copied successfully.\n");
    return 0;
}
```
## 6. Handling Binary Files
For binary files, open the file in binary mode ("rb", "wb", etc.) and use fread() and fwrite().

Reading binary data:
```
fread(buffer, size_of_element, number_of_elements, file_pointer);
```
- Writing binary data:
```
fwrite(buffer, size_of_element, number_of_elements, file_pointer);
```

Example: Handling Binary Files
```
#include <stdio.h>

int main() {
    FILE *file = fopen("binaryfile.bin", "wb");

    int numbers[] = {1, 2, 3, 4, 5};
    fwrite(numbers, sizeof(int), 5, file);

    fclose(file);

    return 0;
}
```

## Use of fflush()

- The `fflush()` function in C is used to flush the output buffer, ensuring that any data written to a stream is 
physically written to the file or device. 
- For example, when you write to a file using `fprintf() or fputs()`, the data may not be immediately written to 
the file; it might be buffered. 
- The `fflush()` function forces the buffer to be flushed, writing any unwritten data to the file or output 
stream immediately.

Syntax
```
int fflush(FILE *stream);
```
- If stream is not NULL, it flushes the buffer of the file associated with that stream.
- If stream is NULL, it flushes all output buffers.

### When to Use fflush()
- `Flushing stdout for immediate output`: Useful in cases where you want to see the output immediately, especially in programs where the output is interactive.
- `Flushing file buffers`: Ensures that any buffered data is written to the file before continuing, which can be useful in cases where your program crashes or terminates early, and you want to ensure that all data has been written.
- `Flushing stdin`: In some cases, it is used to clear the input buffer, though this is not recommended, as its behavior with input streams is undefined. Instead, other methods should be used for input flushing.
Example: Flushing stdout for Immediate Output
In this example, the fflush(stdout) ensures that the message is printed immediately, without waiting for the buffer to fill.

```
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    fflush(stdout);  // Force the output to be displayed immediately

    int num;
    scanf("%d", &num);

    printf("You entered: %d\n", num);
    return 0;
}
```
Without the `fflush(stdout)`, the prompt (Enter a number:) might not appear immediately if output buffering is delayed.

### Example: Flushing Data to a File
In this example, `fflush()` ensures that the data written to the file is physically written before closing the program.

```
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "Writing some data to the file...\n");
    fflush(file);  // Ensure the data is written to the file immediately

    // Do more processing...
    
    fclose(file);
    return 0;
}
```
In this case, `fflush(file)` ensures that the data is written to example.txt before the program continues with other 
operations, even if the buffer is not full yet.

## Summary of fflush() Use Cases
- Ensure immediate output on the console when working with interactive programs.
- Flush file buffers to avoid data loss in case the program crashes before fclose() is called.
- Clear buffered output when writing large amounts of data and you want immediate persistence.

## Examples of 
### 1. fputc(): Writing a string to a file
The `fputc()` function is used to write a single character to a file. 
It writes the character to the specified file stream.

Syntax:
```
int fputc(int char, FILE *stream);
```
Example:
This example writes characters to a file using fputc().
```
#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");  // Open file for writing
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    char data[] = "Hello, World!";
    for (int i = 0; data[i] != '\0'; i++) {
        fputc(data[i], file);  // Write each character to the file
    }

    fclose(file);  // Close the file
    printf("Data written to file successfully.\n");
    return 0;
}
```
### 2. gets(): Reading a string from standard input (Deprecated)
The `gets()` function reads a string from stdin (standard input) until a newline character or EOF is encountered. 
Note: `gets()` is deprecated and dangerous because it does not check for buffer overflow. 
You should use `fgets()` instead for safe input handling.

Syntax:
```
char *gets(char *str);
```
Example:
This example shows how to use `gets()` to take user input. (But remember, use fgets() in practice.)

```
#include <stdio.h>

int main() {
    char name[100];

    printf("Enter your name: ");
    gets(name);  // Dangerous, prefer fgets()

    printf("Hello, %s!\n", name);
    return 0;
}
```

### Safer alternative using `fgets()`:
```
fgets(name, 100, stdin);
This will prevent buffer overflow by limiting input size.
```
### 3. putchar()
The putchar() function prints a single character to the standard output (usually the console).

Syntax:
```
int putchar(int char);
```
Example:
This example uses `putchar()` to print each character of a string to the console one by one.
```
#include <stdio.h>

int main() {
    char message[] = "Hello, World!";
    
    for (int i = 0; message[i] != '\0'; i++) {
        putchar(message[i]);  // Print each character
    }
    
    putchar('\n');  // Newline character at the end

    return 0;
}
```
### 4. Handling EOF
- EOF stands for `End Of File` and is used to indicate the end of input or output when working with files or 
standard input. 
- EOF is typically returned by functions like `fgetc(), scanf()`, etc., when no more input is available.

Example:
In this example, we read from a file character by character and stop when EOF is reached.

```
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");  // Open file for reading
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF) {  // Read until EOF
        putchar(ch);  // Print each character to the console
    }

    fclose(file);  // Close the file
    return 0;
}
```

### Summary of Functions:
- fputc(): Writes a single character to a file.
- gets(): Reads a string from the standard input (deprecated, use fgets()).
- putchar(): Prints a single character to the console.
- EOF: Signals the end of input or output, often used when reading from files or input streams.


## Binary files
- Binary files in C store data in binary format, meaning that they are not human-readable like text files. 
- Can use the `fread() and fwrite()` functions to handle binary files. 
- These functions read and write data in blocks of any size 
(such as integers, floating-point numbers, or even structures), allowing for more efficient storage and retrieval 
of data compared to text files.

Example: Writing and Reading from a Binary File
### 1. Writing to a Binary File
Here's an example of writing an array of integers to a binary file:

```
#include <stdio.h>

int main() {
    // Array of integers to write
    int numbers[] = {10, 20, 30, 40, 50};

    // Open a file for writing in binary mode
    FILE *file = fopen("data.bin", "wb");
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    // Write the array to the file
    size_t numElementsWritten = fwrite(numbers, sizeof(int), 5, file);
    if (numElementsWritten != 5) {
        printf("Error writing to file.\n");
    } else {
        printf("Data written successfully.\n");
    }

    // Close the file
    fclose(file);
    return 0;
}
```
### 2. Reading from a Binary File
Now, let's read back the integers from the binary file that we just wrote:
```
#include <stdio.h>

int main() {
    // Array to store the data read from the file
    int numbers[5];

    // Open the file for reading in binary mode
    FILE *file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    // Read the data from the file into the array
    size_t numElementsRead = fread(numbers, sizeof(int), 5, file);
    if (numElementsRead != 5) {
        printf("Error reading from file.\n");
    } else {
        printf("Data read successfully.\n");

        // Print the read data
        for (int i = 0; i < 5; i++) {
            printf("Number %d: %d\n", i + 1, numbers[i]);
        }
    }

    // Close the file
    fclose(file);
    return 0;
}
```
## Reading and writing blocks of data
- Reading and writing blocks of data in C involves using the `fread() and fwrite()` functions to handle blocks of memory 
in one go, rather than working with individual elements. 
- This can significantly improve performance, especially when dealing with large amounts of data such as arrays, 
structures, or binary files.

### 1. Writing a Block of Data
Write an entire array of integers to a file in one operation using `fwrite()`.

```
#include <stdio.h>

int main() {
    // Create an array of integers to write
    int numbers[] = {10, 20, 30, 40, 50};

    // Open the file in binary write mode
    FILE *file = fopen("block_data.bin", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write the entire block (array) to the file in one go
    size_t elementsWritten = fwrite(numbers, sizeof(int), 5, file);
    if (elementsWritten != 5) {
        printf("Error writing block to file.\n");
    } else {
        printf("Block of data written successfully.\n");
    }

    // Close the file
    fclose(file);

    return 0;
}
```

### 2. Reading a Block of Data
Read back the entire block of integers from the binary file using `fread().`

```
#include <stdio.h>

int main() {
    // Array to hold the data read from the file
    int numbers[5];

    // Open the file in binary read mode
    FILE *file = fopen("block_data.bin", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read the entire block (array) from the file in one go
    size_t elementsRead = fread(numbers, sizeof(int), 5, file);
    if (elementsRead != 5) {
        printf("Error reading block from file.\n");
    } else {
        printf("Block of data read successfully.\n");

        // Print the numbers to verify the read operation
        for (int i = 0; i < 5; i++) {
            printf("Number %d: %d\n", i + 1, numbers[i]);
        }
    }

    // Close the file
    fclose(file);

    return 0;
}
```

## Random access to file
- Random access to a file in C allows you to directly move to a specific position in a file and read or write data 
from that location. 
- This is useful when you need to update, read, or write data at specific locations without reading or 
writing the entire file sequentially.

To implement random access in C, you typically use the following functions:

- `fseek()`: Moves the file pointer to a specific location in the file.
- `ftell()`: Returns the current position of the file pointer.
- `rewind()`: Resets the file pointer to the beginning of the file.

### Example: Random Access to a File
In this example, we will write an array of integers to a binary file, then access one specific element in the file 
(e.g., the 3rd element) using `fseek()` for random access.

####b1. Writing to the File
We will first write an array of integers to the file.
```
#include <stdio.h>

int main() {
    // Create an array of integers
    int numbers[] = {10, 20, 30, 40, 50};

    // Open the file for writing in binary mode
    FILE *file = fopen("random_access.bin", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write the entire array to the file
    fwrite(numbers, sizeof(int), 5, file);

    // Close the file
    fclose(file);

    printf("Array written to file successfully.\n");
    return 0;
}
```
#### 2. Random Access (Reading a Specific Element)
Now, let's read the 3rd element (which has a value of 30 in our array) by moving the file pointer directly to its location using `fseek()`.

```
#include <stdio.h>

int main() {
    // Open the file for reading in binary mode
    FILE *file = fopen("random_access.bin", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Move the file pointer to the position of the 3rd integer
    // Since each integer is 4 bytes, we move to the 3rd element at offset 2 * sizeof(int)
    fseek(file, 2 * sizeof(int), SEEK_SET);  // SEEK_SET means we are moving from the start of the file

    // Read the integer at that position
    int number;
    fread(&number, sizeof(int), 1, file);

    // Print the value of the 3rd element
    printf("The 3rd number is: %d\n", number);

    // Close the file
    fclose(file);

    return 0;
}
```
#### 3. Updating a Specific Element (Random Write)
If you want to update the 3rd element of the array to a new value (e.g., change 30 to 300), you can use `fseek()`
for random write:

```
#include <stdio.h>

int main() {
    // Open the file for reading and writing in binary mode
    FILE *file = fopen("random_access.bin", "rb+");  // "rb+" allows both reading and writing
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Move the file pointer to the position of the 3rd integer
    fseek(file, 2 * sizeof(int), SEEK_SET);

    // Write a new value at that position
    int new_value = 300;
    fwrite(&new_value, sizeof(int), 1, file);

    // Close the file
    fclose(file);

    printf("3rd element updated successfully.\n");
    return 0;
    ```
}

### Advantages of Random Access:
- Efficiency: Allows reading or writing specific parts of a large file without having to process the entire file 
sequentially.
- Flexibility: You can quickly update parts of a file or retrieve specific records, making it ideal for databases or 
large datasets.
