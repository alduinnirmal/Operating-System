#include<stdio.h>
#include<sys/stat.h>
int main()
{

  struct stat sfile;

  stat("stat.c", &sfile);
  printf("st_mode   = %o", sfile.st_mode);
  printf("\nst_gid    = %o",sfile.st_gid);
  printf("\nst_uid    = %o", sfile.st_uid);
  printf("\nst_nlink  = %ld", sfile.st_nlink);
  printf("\nst_blocks = %ld", sfile.st_blocks);
  printf("\nst_blksize= %ld", sfile.st_blksize);
  printf("\nst_ino    = %ld", sfile.st_ino);
  printf("\nst_size   = %ld\n", sfile.st_size);
    
  return 0;
}
