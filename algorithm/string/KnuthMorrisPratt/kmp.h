#ifndef _KMP_H_
#define _KMP_H_

#include <string>
#include <vector>

using namespace std;

vector<int> generateKMPTable(string &str);

bool contains(string &str, string &substr);

int find(string &str, string &substr, int start = 0);

#endif /* _KMP_H_ */
