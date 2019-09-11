#ifndef ASSERT_HPP
#define ASSERT_HPP
#include <iostream>

#ifdef assert
#undef assert
#endif

#ifdef NDEBUG
#define assert(condition, message) 0
#else
#define assert(condition, message)\
   (!(condition)) ?\
      (std::cerr << "Assertion failed: (" << #condition << "), "\
      << "function " << __FUNCTION__\
      << ", file " << __FILE__\
      << ", line " << __LINE__ << "."\
      << std::endl << message << std::endl, abort(), 0) : 1
#endif

#endif
