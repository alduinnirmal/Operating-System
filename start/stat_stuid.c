#include<stdio.h>
#include<sys/stat.h>
int main()
{

  struct stat sfile;
  stat("stat_stuid.c", &sfile);
  printf("st_uid = %o", sfile.st_uid);
  return 0;
}
