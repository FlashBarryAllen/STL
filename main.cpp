#include "my_vector.h"
#include "my_map.h"
#include "jjalloc.h"
#include "mylist-iter-test.h"
#include "test.h"
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

    ::jjalloc_main();

    ::test_main();

    ycl::test_main();

    test::test_main();

    iter_test_main();

    return 0;
}