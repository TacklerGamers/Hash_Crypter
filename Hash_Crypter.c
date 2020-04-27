#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <crypt.h>

int main(int argc, char *argv[]) {

   printf("This Script is Created By TACKLER\n");

   if(argc < 2) { 
      printf("Use: %s (plaintext password) (salt value)\n", argv[0]);
      exit(1); 
   }
   printf("Password \"%s\" with salt \"%s\" ", argv[1], argv[2]);
   printf("Hash is ==> %s\n", crypt(argv[1], argv[2]));
   
   return 0;
}