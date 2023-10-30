#0x15.C - FILE I/O
File I/O (Input/Output) is a fundamental operation in programming. It allows you to read data from files and write data to files. In C, file I/O is performed using standard functions and library headers.

##File_Modes
The following are some of the most used file operations in C and what they do;
r": Read mode. Opens an existing file for reading.
"w": Write mode. Creates a new file for writing or truncates an existing file.
"a": Append mode. Opens a file for writing without truncating an existing file.
"rb": Read binary mode.
"wb": Write binary mode.
"ab": Append binary mode
##Best practices
1. Always check the return value of file I/O functions for errors.
2. Use appropriate file modes for your specific needs.
3. Close files when you're finished with them.
4. Make sure to handle exceptions and errors gracefully.


