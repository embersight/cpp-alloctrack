# cpp-alloctrack: Light-weight Dynamic Memory Allocation Tracker Library for C++

Pointers can make memory hard to track. In complex programs, it can daunting to find memory leaks. This allocation library is designed to combat these struggles.

This C++ library takes advantage of the fact that C++ uses a different methods for dynnamically allocating memory than C and of the fact that C++ builds upon C. It is designed to be very compact and simple. This library exceeds and shines in environments that are not an IDE.

cpp-alloctrack aims to use only the basic libraries included in most if not all cpp compilers for it's implementation.

## Installation

To put plainly, one just has to drag the library file [`alloctrack.hpp`](alloctrack/alloctrack.hpp) to a currently working environment, include the file in the program's driver file, and run desired allocation commands. Best practice is include this file after any built-in C++ libraries but before any self-made libraries as built-in libraries may trigger a false memory leak or configuration error (see [`example.cpp`](alloctrack/example.cpp) for an example of this).

This library should be removed after all memory leaks are found.

### Prerequisites

* A C++ Compiler, [recommended installation](https://hank.feild.org/courses/common/cpp-compiler.html#compiler-linux)

### Examples

Navigate to the alloctrack folder from the main directory (this would be where the driver to a complex program would be).

You can compile the example.cpp file (the example driver file) like you would any other and run it like any other. This example purposely has a memory leak to show what information is included.

```
g++ -o TEST example.cpp

./TEST
```

## Application Programming Interface (API)

More commands should be added.

Currently, these are the following commands (and their returns) that you can run, all of these commands are in the namespace `mem`.

* void mem::debuggerPrintMissingAllocations();

## License and Authors

cpp-alloctrack is an open source project that is licensed. See [`LICENSE.md`](LICENSE.md) for more information.

The Names of all authors associated with this project are below:

  * *Justin C Presley* (justincpresley)
