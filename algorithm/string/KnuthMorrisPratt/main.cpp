#include <iostream>
#include <vector>
#include "kmp.h"

using namespace std;

void dumpKMPTable(string &str, vector<int> &kmpTable) {
  for (char ch : str) {
    cout << ch << " ";
  }
  cout << endl;
  for (int index : kmpTable) {
    cout << index << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  vector<vector<string > > tests = {
    {"abababc", "ababc"},
    {"abcdefghijklmno", "abc"},
    {"abcdefghijklmno", "klmno"},
    {"aaaaabbbbccccddddeee", "bbbccc"},
    {"aaabbbbbbbbbbcccccccc", "bbbbbb"},
    {"abcabcabcabcdabcdabcdabcdabcabc", "abcdabcdabcdab"},
    {"aaaabcabcdefabcdabc", "abcabcdefabcdabc"},
    {"aaaabcabcdefaabcdabc", "abcabcdefabcdabc"},
    {"abcdefg", "hijk"}
  };

  for (vector<string> &test : tests) {
    string str = test[0];
    string substr = test[1];
    vector<int> kmpTable = generateKMPTable(substr);

    dumpKMPTable(substr, kmpTable);
    cout << "\"" << str << "\"";

    if (contains(str, substr)) {
      cout << " contains ";
    } else {
      cout << " doesn't contain ";
    }
    cout << "\"" << substr << "\"" << endl;
  }

  return 0;
}