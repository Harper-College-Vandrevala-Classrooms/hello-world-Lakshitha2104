#include <iostream>
#include <cctype>
#include <string>

int strcmp_case_insensitive(const std::string &str1, const std::string &str2) {
size_t i = 0;
while (i < str1.length() && i < str2.length()) {
char c1 = std::tolower(str1[i]);
char c2 = std::tolower(str2[i]);

if (c1 < c2) return -1;
if (c1 > c2) return 1;
i++;
}

if (str1.length() < str2.length()) return -1;
if (str1.length() > str2.length()) return 1;

return 0;
}

int main() {
std::string str1 = "string one";
std::string str2 = "string two";
std::string str3 = "string ONE";
std::string str4 = "STRING one";
std::string str5 = "string";

std::cout << "The comparison of \"" << str1 << "\" and \"" << str2 << "\" returns " <<
strcmp_case_insensitive(str1, str2) << "." << std::endl;
std::cout << "The comparison of \"" << str1 << "\" and \"" << str3 << "\" returns " <<
strcmp_case_insensitive(str1, str3) << "." << std::endl;
std::cout << "The comparison of \"" << str1 << "\" and \"" << str4 << "\" returns " <<
strcmp_case_insensitive(str1, str4) << "." << std::endl;
std::cout << "The comparison of \"" << str1 << "\" and \"" << str5 << "\" returns " <<
strcmp_case_insensitive(str1, str5) << "." << std::endl;
std::cout << "The comparison of \"" << str2 << "\" and \"" << str1 << "\" returns " <<
strcmp_case_insensitive(str2, str1) << "." << std::endl;

return 0;
}