/**
 * participants.c
 *   A simple C program to print the participants from the class.
 *   Intended as an example of updating code on GitHub.
 */

// +---------+---------------------------------------------------------
// | Headers |
// +---------+

#include <stdio.h>

// +------+------------------------------------------------------------
// | Main |
// +------+

int 
main (int argc, char *argv[])
{
  int i = 0;

  printf ("%02d: Kim Tracy\n", ++i);
  
  printf ("%02d: Rui Cao\n", ++i);
  
  printf ("%02d: Noah Jett\n", ++i);
    
  printf ("%02d: Ryan Ozelie\n", ++i);

  printf ("%02d: Wenting Zhao\n", ++i);
  
  printf ("%02d: Xiao Yang\n", ++i);
  
  printf ("%02d: Andrew Posdzy\n", ++i);

  printf ("There are %i participants.\n", i);
  
  return 0;
} // main
