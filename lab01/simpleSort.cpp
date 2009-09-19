/** 
 * Simple O(n^2) sort - bad
 */
void simpleSort( int numbers[], int last ) {
  // copy the array
  for ( int i=0; i<last; i++) {
    for ( int j=i; j<last; j++) {
      if ( numbers[j] < numbers[i] ) {
	// swap
	int swap = numbers[j];
	numbers[j] = numbers[i];
	numbers[i] = swap;
      }
    }
  }
}
