#include<stdio.h>
#include<sys/stat.h>
int main()
{
  struct stat sfile;

  stat("blocks.c", &sfile);

  printf("st_blocks = %lo", sfile.st_blocks);
  return 0;
}
