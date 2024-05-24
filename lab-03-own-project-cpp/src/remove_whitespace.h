#ifndef SAMPLE_HELLO_WORLD_H
#define SAMPLE_HELLO_WORLD_H

#include <string>
#include <regex>

namespace string {
    std::string GetNoWhitespaceString(const std::string &str) {
        std::regex re(R"(\s)");
        auto res = std::regex_replace(str, re, "");
        return res;
    }
}

#endif // SAMPLE_HELLO_WORLD_H