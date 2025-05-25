# DATA-COMPRESSION-TOOL

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: NANDYALA NANDITHA

*INTERN ID*: CT04DN872

*DOMAIN*: C Programming

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH KUMAR

**OVERVIEW OF THE PROJECT**

**Program Title**:
String Compression using Run-Length Encoding (RLE) in C

**Objective**:
The goal of this program is to implement a basic lossless data compression algorithm known as Run-Length Encoding (RLE). This technique compresses a string by replacing sequences of repeated characters with the character followed by the number of times it appears consecutively. The purpose is to reduce the overall size of the data while ensuring no information is lost during the process.

**Concept**:
Run-Length Encoding is a simple and effective method of compressing data that contains many repeated characters. Instead of storing each character individually, it stores a single instance of the character and its repetition count. It is best suited for data that contains many contiguous repeating elements, such as text files with repeating characters or uncompressed images with large areas of the same color.

**For example**:

Input: aaabbcaaa

Output: a3b2c1a3

This means:

'a' is repeated 3 times,

'b' 2 times,

'c' once,

and 'a' again 3 times.

 **Program Explanation**:
1. Header Files:
c
Copy code
#include <stdio.h>
#include <string.h>
These headers provide necessary functions:

stdio.h: For input and output (printf, scanf).

string.h: For string manipulation (strlen function).

2. runLengthEncode Function:
c
Copy code
void runLengthEncode(char *input)
This function accepts a string pointer as input and performs the RLE compression logic. It calculates the string length using strlen, then iterates through each character.

A count variable is initialized to track how many times a character repeats.

A while loop checks if the current character equals the next one and increases the count.

Once the sequence ends, it prints the character and the count.

Example:

c
Copy code
printf("%c%d", input[i], count);
3. main Function:
c
Copy code
int main() {
    char input[100];
Declares a character array input to store the user's string (maximum 99 characters + null terminator).

Prompts the user with:

c
Copy code
printf("Enter a string to compress using RLE: ");
Reads the input using:

c
Copy code
scanf("%s", input);
Calls the runLengthEncode function and prints the result.

**Sample Input & Output**:
Input:

vbnet
Copy code
Enter a string to compress using RLE: aaabbcaaa
Output:

csharp
Copy code
Compressed string: a3b2c1a3

**Conclusion**:
This Run-Length Encoding program demonstrates how simple logic can achieve meaningful data compression. It introduces the concept of reducing data size without losing information — a fundamental requirement in many applications like file storage, image encoding, and data transmission. The program is concise, easy to understand, and provides a great foundation for exploring more complex compression algorithms in the future, such as Huffman Coding or LZW.

**OUTPUT**:

![Image](https://github.com/user-attachments/assets/521ea689-2f77-432c-bb4a-a92ffdb8445e)
