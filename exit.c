#include <stdio.h>
#include <stdlib.h>

int main ()
{
  FILE * pFile;
  pFile = fopen ("myfile.txt", "r");
  if (pFile == NULL)
  {
	printf ("Error opening file");
	exit (1);
  }
 
  return 0;
}

