#include "crypto.h"


void caesar_encrypt(unsigned char range_low, unsigned char range_high, int key, const char *plain_text, char *cipher_text)
{

assert(plain_text != NULL && cipher_text != NULL);
assert(range_high > range_low);

// Make key positive and in valid range
int range_size = range_high - range_low + 1;
key = ((key % range_size) + range_size) % range_size;

while (*plain_text != '\0')
{
// Is character in encryption range?
if (*plain_text >= range_low && *plain_text <= range_high)
{
// Caesar encryption formula
*cipher_text = (unsigned char)(range_low + (((unsigned char)*plain_text - range_low + key) % range_size));
}
else
{
*cipher_text = *plain_text;
}
plain_text++;
cipher_text++;
}

*cipher_text = '\0';
}

void caesar_decrypt(unsigned char range_low, unsigned char range_high, int key, const char *cipher_text, char *plain_text)
{
caesar_encrypt(range_low, range_high, -key, cipher_text, plain_text);
}