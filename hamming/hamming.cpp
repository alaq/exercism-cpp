#include "hamming.h"
#include <string>
#include <iostream>

using namespace hamming;

int hamming::compute(std::string strand1, std::string strand2) {
  if (strand1.length() != strand2.length()) {
    throw std::domain_error("strands are not the same size");
  }
  int c = 0;
  for (int i = 0; i < strand1.length(); i++) {
    if (strand1[i] != strand2[i]) {
      c++;
    }
  }
  return c++;
}
