#include "sample_project.h"

#include <sstream>

#include <gtest/gtest.h>

TEST(HelloWorld, BasicTestName) {
    std::ostringstream oss;
    oss << sample::HelloWorld{};
    ASSERT_EQ("Hello World!", oss.str());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}