# Ox18.C - Dynamic Libraries

Dynamic or shared libraries in C are the most used type of libraries.
A library is a collection of object files that are linked to the compiled file.
With static libraries, the linker copies the library object files intp the compiled object files.
This is inconvenient as it makes the size of the executables larger, and it also makes it harder
to push changes made to the library since each it requires each executable using the library to be
recompiled.

Dynamic or shared libraries solve this. They are loaded into memory once, and all programs that needs
to use functions in the library gets a pointer to the library's location in memory.
Thus, the library is only loaded once, and only used at runtime(not compile time). This makes the size of
the executables comparably smaller, as they don't copy functions into memory.
In addition, updating is easier because we only need to update the library loaded in memory. Each executable
will now use an updated version of the library.

## About this directory

This directory contain simple exercises that creates and make use of dynamic libraries. Every file here is part
of the requirements for tasks in ALX Software Engineering Program by ALX - Holberton School
