#include "binary.h"
#include <string>

using namespace binary;

int binary::convert(std::string b_number) {
  int decimal = 0;
  for (int i = b_number.length() - 1; i <= 0; i--) {
    decimal += b_number[i] * (b_number.length() - i);
  }
  return decimal;
}
