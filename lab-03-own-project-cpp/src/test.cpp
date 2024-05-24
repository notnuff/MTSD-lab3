#include "remove_whitespace.h"

#include <sstream>

#include <gtest/gtest.h>

TEST(HelloWorld, BasicTestName) {
    std::ostringstream oss;
    oss << string::GetNoWhitespaceString("Hello World!");
    ASSERT_EQ("HelloWorld!", oss.str());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}