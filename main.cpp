#include "my_vector.h"
#include "my_map.h"
#include "gtest/gtest.h"

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::TestPartResult;
using ::testing::UnitTest;

int main(int argc, char* argv[])
{
    InitGoogleTest(&argc, argv);

    vecotr_main();

    map_main();

    return 0;
}