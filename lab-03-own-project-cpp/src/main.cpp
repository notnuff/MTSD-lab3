#include "remove_whitespace.h"

#include <boost/program_options.hpp>

#include <iostream>

auto parseArgs(int argc, char* argv[]) {
    namespace po = boost::program_options;
    po::options_description desc("Allowed options");
    desc.add_options()
            ("help,h", "Produce this message");

    auto parsed = po::command_line_parser(argc, argv)
            .options(desc)
            .allow_unregistered()
            .run();

    po::variables_map vm;
    po::store(parsed, vm);
    po::notify(vm);

    return std::pair(vm, desc);
}

int main(int argc, char* argv[]) try {
    auto [vm, desc] = parseArgs(argc, argv);

    if (vm.count("help")) {
        std::cout << desc << std::endl;
        return 0;
    }

    std::cout << string::GetNoWhitespaceString("Dummy text without spaces") << std::endl;

    return 0;
} catch (std::exception& e) {
    std::cerr << "Unhandled exception: " << e.what() << std::endl;
    return -1;
}