# Static libraries
Project done during Software Engineering studies at `Holberton School`. It aims to learn about static libraries in `C language`.<br>
Static library is a compiled object file containing all symbols required by the main program to operate (functions, variables etc.) as opposed to having to pull in separate entities. Static libraries aren't loaded by the compiler at run-time; only the executable file need be loaded.

# Technologies
- C files are compiled using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- C files are written according to the `C89 standard`
- Tested on `Ubuntu 20.04 LTS`

# Files
All of the following files are programs written in C :

|**Filename**|**Description**|
|:-------|:---------:|
|`create_static_lib.sh`|Script that creates a static library called `liball.a` from all the `.c` files that are in the current directory|
|`main.h`|Header file that contains all the prototypes of the used functions|
