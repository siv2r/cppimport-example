# cppimport-example
To demonstrate creating bindings for source file with includes using `&lt;>` and `"` in cppimport
Install cppimport through pip before executing this code

# usage
1. `python3 main.py` 
   
This will display the following error
```bash
fatal error: src/max_val.h: No such file or directory
    1 | #include <src/max_val.h>
      |          ^~~~~~~~~~~~~~~
compilation terminated.
error: command 'x86_64-linux-gnu-gcc' failed with exit status 1
```

2. Now change the include in `src/example.cpp` from `#include <src/max_val.h>` to `#include "./max_val.h"` 
3. Execute the code by `python3 main.py`. Now the program will execute properly.

# Problem
1. The cppimport work fine when using include with `""`. How to make it work for include with `<>`?