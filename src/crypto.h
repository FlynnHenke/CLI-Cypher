#ifndef CRYPTO_H
#define CRYPTO_H

// Lib Headers
#include <stddef.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <assert.h>

// Function declarations

void caesar_encrypt(unsigned char range_low, unsigned char range_high, int key, const char *plain_text, char *cipher_text);
void caesar_decrypt(unsigned char range_low, unsigned char range_high, int key, const char *cipher_text, char *plain_text);



#endif