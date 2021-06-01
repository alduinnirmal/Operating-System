#include<stdio.h>
#include<sys/stat.h>
int main()
{
  struct stat sfile;

  stat("size.c", &sfile);

  printf("st_size = %ld", sfile.st_size);
  return 0;
}
