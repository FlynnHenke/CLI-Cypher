#include <gtest/gtest.h>

extern "C" {
    #include "crypto.h"
}

TEST(CaesarEncryptTest, UppercaseLetters) {
    char output[100];
    caesar_encrypt('A', 'Z', 3, "HELLO", output);
    EXPECT_STREQ("KHOOR", output);
}

TEST(CaesarDecryptTest, UppercaseLetters) {
    char output[100];
    caesar_decrypt('A', 'Z', 3, "KHOOR", output);
    EXPECT_STREQ("HELLO", output);
}
