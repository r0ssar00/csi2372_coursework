#include <iostream>
/**
 * Input routines which reads a maximum of size 
 * of input array integers.
 * Returns the last number read.
 */
int readInput( int numbers[], int last ) 
{
  std::cout << "Please enter integers." << std::endl;
  std::cout << "Press non integer to terminate" << std::endl;
  int inRead;
  int index = 0;
  do {
    std::cin >> inRead;
    if (std::cin.fail()) return index;
    numbers[index] = inRead;
    index++;
  } while ( index < last );
  return index;
}
