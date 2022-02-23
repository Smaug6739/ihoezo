#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <vector>
#include <sstream> //for std::ostringstream
#include <iomanip> //for std::setw, std::hex, and std::setfill
#include <string>

#include <openssl/evp.h>
#include <openssl/sha.h>

std::string bytes_to_hex_string(const std::vector<uint8_t>& bytes);

std::string sha_224(const std::string& input);
std::string sha_256(const std::string& input);
std::string sha_512(const std::string& input);


#endif