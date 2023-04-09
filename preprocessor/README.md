# Preprocessor
Project done during Software Engineering studies at `Holberton School`. It aims to learn about how to include guard in the header files and macros in `C language`.<br>

What is preprocessor in C?

In simple terms, a C Preprocessor is just a text substitution tool and it instructs the compiler to do required pre-processing before the actual compilation. We'll refer to the C Preprocessor as CPP. All preprocessor commands begin with a hash symbol (#).

![Preprocessor](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Preprocessor-In-C.png)

# Technologies
- C files are compiled using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- C files are written according to the `C89 standard`
- Tested on `Ubuntu 20.04 LTS`

# Files
All of the following files are programs written in C :

|**Filename**|**Description**|
|:-------|:---------:|
|`0-object_like_macro.h`|Header file that defines a macro named `SIZE`|
|`1-pi.h`|Header file that defines a macro named `PI`|
|`3-function_like_macro.h`|Function-like macro `ABS(x)` that computes the absolute value of a number `x`|
|`4-sum.h`|Function-like macro `SUM(x,y)` that computes the sum of the numbers `x` and `y`|
