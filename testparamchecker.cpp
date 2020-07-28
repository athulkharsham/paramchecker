#include "paramchecker.h"
#include <gtest/gtest.h>

TEST(VitalsTest, BPM) {
    ASSERT_EQ(true, ifVitalsOK(100,90,40));
}

TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, ifVitalsOK(100,40,30));
}

TEST(VitalsTest, RESPRATE) {
    ASSERT_EQ(true, ifVitalsOK(80,90,50));
}
                                        
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
