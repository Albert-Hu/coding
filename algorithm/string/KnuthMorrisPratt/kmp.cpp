#include "kmp.h"

vector<int> generateKMPTable(string &str) {
  int current = 2;
  int compareTo = 0;
  vector<int> table(str.length(), 0);

  while (current < str.length()) {
    if (str[current - 1] == str[compareTo]) {
      compareTo++;
      table[current] = compareTo;
      current++;
    } else if (compareTo > 0) {
      compareTo = table[compareTo];
    } else {
      current++;
    }
  }

  return table;
}

bool contains(string &str, string &substr) {
  int strIndex = 0, substrIndex = 0;
  vector<int> kmpTable = generateKMPTable(substr);

  while (strIndex < str.length() && substrIndex < substr.length()) {
    if (str[strIndex] == substr[substrIndex]) {
      strIndex++;
      substrIndex++;
    } else if (substrIndex > 0) {
      substrIndex = kmpTable[substrIndex];
    } else {
      strIndex++;
    }
  }

  return (substrIndex == substr.length());
}
