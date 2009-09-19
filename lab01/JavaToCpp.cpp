// ==========================================================================
// $Id: JavaToCpp.cpp,v 1.1 2006/09/07 17:41:19 jlang Exp $
// CSI2372 Solution code for laboratory 0
// ==========================================================================
// (C)opyright:
//
//   Jochen Lang
//   SITE, University of Ottawa
//   800 King Edward Ave.
//   Ottawa, On., K1N 6N5
//   Canada. 
//   http://www.site.uottawa.ca
// 
// Creator: jlang (Jochen Lang)
// Email:   jlang@site.uottawa.ca
// ==========================================================================
// $Log: JavaToCpp.cpp,v $
// Revision 1.1  2006/09/07 17:41:19  jlang
// Initial checkin Lab0
//
//
// ==========================================================================
#include <iostream>
#include "showResult.cpp"
#include "simpleSort.cpp"
#include "readInput.cpp"

int main() 
{
  std::cout << "Integer Sorting" << std::endl;

  // Allocate an integer array 
  const int max = 5;
  int numbers[max];
  int last = readInput( numbers, max );
  std::cout << "Last is: " << last << std::endl;
  simpleSort( numbers, last );
  showResult( numbers, last );
  return 1;
}

