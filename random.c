#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int ramDom(int varSecret)
    {
       srand(time(NULL)) ;
       varSecret = (rand() % (100 - 1 + 1) + 1 ) ;
       return varSecret ;
    }
