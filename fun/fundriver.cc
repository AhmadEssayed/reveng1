#include <sstream>
#include <iostream>
#include <cstdlib>

int fun(const char* s);

static void yay() {
    std::cout << "πππππππππ½π½π½ππππππππ\n";
    std::cout << "                 FUN\n";
    std::cout << "πππππππππ½π½π½ππππππππ\n";
    exit(0);
}

static void no_fun() {
    std::cerr << "πΏπΏπΏπΏπΏπΏπΏπΏ no fun πΏπΏπΏπΏπΏπΏπΏπΏ\n";
    exit(1);
}

int main(int argc, char** argv) {
    // make a string from all the arguments
    std::string argstr;
    {
        std::stringstream sbuf;
        for (int i = 1; i < argc; ++i) {
            sbuf << (i == 1 ? "" : " ") << argv[i];
        }
        argstr = sbuf.str();
    }

    // call `fun`, and celebrate if it succeeds
    if (fun(argstr.c_str()) == 0) {
        yay();
    } else {
        no_fun();
    }
}
