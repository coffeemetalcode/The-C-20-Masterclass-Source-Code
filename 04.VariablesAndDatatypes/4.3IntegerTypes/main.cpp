#include <iostream>

int main() {
  // braced initializers
  // null -- may contain throwaway, gibberish value
  int new_elephant;

  // initializes to zero
  int new_lion {};

  int new_dog {10};

  int new_cat {15};

  // initialize by expression
  int domestic_animals { new_dog + new_cat };

  // int narrowing_conversion {2.9}; // <-- compile error 
  double narrowing_conversion {2.9}; // <-- double type

  int narrowing_conversion2 (2.9); // <-- parentheses initialization - no error or warning
                                   // <-- value is cast to int with value 2, and no notification

  int cast_from_double (narrowing_conversion);

  int narrowing_conversion_assignment = 2.9;

  std::cout << "conversion 1: " << narrowing_conversion << std::endl;
  std::cout << "conversion 2: " << narrowing_conversion2 << std::endl;
  std::cout << "conversion 3: " << narrowing_conversion_assignment << std::endl;
  std::cout << "conversion 3: " << cast_from_double << std::endl;

  // Check size with sizeof
  std::cout << "size of int: " << sizeof(int) << std::endl;
  std::cout << "size of new_cat: " << sizeof(new_cat) << std::endl;
  std::cout << "size of boolean: " << sizeof(bool) << std::endl;
  std::cout << "size of double: " << sizeof(double) << std::endl;
  std::cout << "size of narrowing_conversion: " << sizeof(narrowing_conversion) << std::endl;
  std::cout << "size of narrowing_conversion2: " << sizeof(narrowing_conversion2) << std::endl;

  //
  return 0;
}