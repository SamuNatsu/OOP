# OOP
OOP extention for C++
## Example
```cpp
#include "OOP.hpp"

#include <cstdio>

// Main class
class Main {
    public:
        static int num;

        // Static block just similar to Java
        static_block {
            num = 114514;
            printf("%d\n", num);
        }

        // Main method
        static void main(int argc, char* argv[]) {
            puts("Hello world");
        }
};

// Static member initialize
int Main::num = 0;

// If you have a static block, you MUST use it to run the block
STATIC_BLOCK(Main)

// Declare main class which has a valid main method
MAIN_CLASS(Main)

```
## Contrains
1. Each class can only has ONE static block
2. Coz C++ do not has static block natively, what you can do in this "fake" static block are limited, you should test your code whether it runs well
3. You MUST declare `MAIN_CLASS()` at lease ONCE, coz we move the main function into it
