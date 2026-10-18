#include "hellowordl.h"

#include <iostream>

int main(int argc, char* argv[]) {
    const HelloWorldOptions options = parseOptions(argc, argv);
    std::cout << "Hello, " << options.name << "!\n";
    return 0;
}
