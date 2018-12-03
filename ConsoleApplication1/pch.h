#ifndef PCH_H
#define PCH_H

#include <iostream>
#include <vector>
#include <iterator> 
#include <string> // C++ philosophy
#include <cstring> // C philosophy
#include <conio.h>
#include <algorithm>
#include <windows.h>
#include <limits>
#include <ctime> 
#include <numeric> // Algorithms to work with seq of num values
#include <fstream> // For working with files
#include <functional> // For manage functions as modules
#include <memory> // Dynamic mem. malloc, calloc... unique_ptr

#endif //PCH_H

// <string> VS <cstring>
//Flexible storage capacity
//Constant - time string length retrieval(rather than a linear - time functional check)
//No need to worry about manual memory management or resizing strings
//Boundary issues are handled for me, with or without a null character.
//Intuitive assignment using the = operator rather than strcpy
//Intuitive comparison using the == operator rather than strcmp
//Intuitive interfaces for other operations such as concatenation(+operator is nice!), tokenization