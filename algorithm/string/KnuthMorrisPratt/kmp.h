#ifndef _KMP_H_
#define _KMP_H_

#include <string>
#include <vector>

using namespace std;

/**
 * @brief Generate the KMP table from the input string.
 *
 * @param str The input string.
 * @return The KMP table.
 */
vector<int> generateKMPTable(string &str);

/**
 * @brief Check whether the string contains the substring or not.
 *
 * @param str The string.
 * @param substr The substring.
 * @return ture if the string contains the substring, otherwise return false.
 */
bool contains(string &str, string &substr);

#endif /* _KMP_H_ */
