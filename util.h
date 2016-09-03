#ifndef OS_UTIL_H
#define OS_UTIL_H

//print error if not zero.
#define check_notZero(...) checkprint(__FILE__, __LINE__, __VA_ARGS__)

void checkprint(const char* file, const int line, int condition, const char* formatstr, ...);

#endif