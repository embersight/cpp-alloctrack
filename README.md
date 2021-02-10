# cpp-alloctrack: Light-weight Dynamic Memory Allocation Tracker Library for C++

Pointers can make memory hard to track. In complex programs, it can daunting to find memory leaks. This allocation library is designed to combat these struggles.

This C++ library takes advantage of the fact that C++ uses a different methods for dynnamically allocating memory than C and of the fact that C++ builds upon C. It is designed to be very compact and simple. To put plainly, one just has to drag the library file to a currently working environment, include the file in the program's driver file, and run desired allocation commands.

cpp-alloctrack aims to use only the basic libraries included in most if not all cpp compilers for it's implementation.

## Installation

### Prerequisites

* A C++ Compiler, [recommended installation](https://hank.feild.org/courses/common/cpp-compiler.html#compiler-linux)

### Examples

To try out the chat demo application, follow the below steps.

To create a chat client, simply run this in the home directory:
```
python3 examples/chat_node.py -n NODE_NAME [-h] [-gp GROUP_PREFIX]
```
You may create as many of these as possible and all clients will sync up using SVS.

Before you run the program, you must register the group prefix as multi-cast (even if you did not specifically define the group prefix):
```
nfdc strategy set <group-prefix> /localhost/nfd/strategy/multicast/%FD%03
```
The default group prefix is ['/svs'] for our examples.
More on setting different strategies (like mutli-cast) for different prefixes can be found [here](https://named-data.net/doc/NFD/current/manpages/nfdc-strategy.html).


## License and Authors

cpp-alloctrack is an open source project that is licensed. See [`LICENSE.md`](LICENSE.md) for more information.

The Names of all authors associated with this project are below:

  * *Justin Presley* (embersight)
