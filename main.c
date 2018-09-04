#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"random.h"
int main(int argc, char* argv[])
   {
       printf( "Welcome to Play gamen\n" ) ;
       int continueGame = 1 ;
       int varSecret = 0 ;
       int varPresent = 0 ;
       int count = 0 ;
       varSecret = ramDom( varSecret ) ;
       while(continueGame == 1 )
       {
         while(varSecret != varPresent)
             {
                 printf( "Guess some number " ) ;
                 scanf("%d",&varPresent) ;
                 count =  count + 1 ;
                if(varPresent > varSecret)
                    {
                      printf( "Small\n" ) ;

                    }
                else if (varPresent < varSecret)
                    {
                      printf( "Bigger\n" ) ;
                    }
                else
                    {
                      printf( "Congratulations! number secret is %d\n",varSecret ) ;
                      printf( "You loss %d \n",count ) ;
                    }


             }
             printf( "You want continue play game\n " ) ;
             printf( "1.Yes\n" ) ;
             printf( "2.No" ) ;
             printf( "Secret is %d\n",varSecret ) ;
             printf( "Present is %d\n",varPresent ) ;
             scanf( "%d",&continueGame ) ;
             if(continueGame != 1)
                {
                   continueGame = 0 ;
                }
       }
    return 0 ;

   }
