#include <iostream>
/**
 * Routine which prints out the number array.
 */
void showResult( int numbers[], int last ) 
{
  std::cout << "Printing the result to the console: " << std::endl;
  for (int i=0; i<last; i++ ) {
    std::cout << i << ". Number: " << numbers[i] << std::endl;
  }
  return;
}
