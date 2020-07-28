#include "paramchecker.h"
#include <gtest/gtest.h>

TEST(VitalsTest, BPM) {
    ASSERT_EQ(true, isVitalsOkBpm(100));
}

TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, isVitalsOkBpm(40));
}

TEST(VitalsTest, RESPRATE) {
    ASSERT_EQ(true, isVitalsOkResprate(50));
}
                                        
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
