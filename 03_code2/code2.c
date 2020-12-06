int printTriangle(int size) {
  int starCount = 0;
  int i = 0;
    while(i < size) {
      for  (int j = 0; j <= i; j++) {
	  printf("*");
	  starCount++;
	}
	printf ("\n");
	i++;
      }
    
      return starCount;
}
  //count from 0 (inclusive) to size (exclusive), for each number i that you count

     //count from 0 (inclusive) to i (inclusive), for each number j that you count

        //print a "*"

        //increment starCount

     //when you finish counting on j, 

     //print a newline ("\n")

  //when you finish counting on i, 

  //your answer is starCount


int main (void) {
  int numStars;
  printf("Here is a triangle with height 4\n");
  numStars = printTriangle(4);
  printf("That triangle had %d total stars\n", numStars);
   //now print "Here is a triangle with height 7\n"
  printf("Here is a triangle with height 7\n");
  numStars = printTriangle(7);
  printf("That triangle had %d total stars\n", numStars);

  //then call printTriangle, passing in 7, and assign the result to numStars

  //finally, print "That triangle had %d total stars\n", such that the %d 
  //prints the value of numStars


  return 0;
}



