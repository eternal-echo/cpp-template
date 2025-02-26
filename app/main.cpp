// Executables must have the following defined if the library contains
// doctest definitions. For builds with this disabled, e.g. code shipped to
// users, this can be left out.
#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest/doctest.h"
#endif

#include <iostream>

#include "example.h"

/*
 * Simple main program that demontrates how access
 * CMake definitions (here the version number) from source code.
 */
int main() {


    /* Dummy example */
    // Bring in the dummy class from the example source,
    // just to show that it is accessible from main.cpp.
    Dummy d = Dummy();

    std::cout << "Hello, CMake world!" << std::endl;


    return d.doSomething() ? 0 : -1;
}
