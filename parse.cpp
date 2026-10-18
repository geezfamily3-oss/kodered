#include "hellowordl.h"

#include <string_view>

HelloWorldOptions parseOptions(int argc, char* argv[]) {
    HelloWorldOptions options;

    for (int i = 1; i < argc; ++i) {
        const std::string_view argument{argv[i]};
        if (argument == "--name" && i + 1 < argc) {
            options.name = argv[++i];
        }
    }

    return options;
}
