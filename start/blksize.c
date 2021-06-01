#include<stdio.h>
#include<sys/stat.h>
int main()
{
  struct stat sfile;

  stat("blksize.c", &sfile);
  printf("st_blksize = %ld", sfile.st_blksize);
  return 0;
}
