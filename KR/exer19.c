
/* write a program to replace one o more blanks for only one blank */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;
  

    while ((c = getchar()) != EOF){
        putchar(c);
        while (c == ' '){
            c = getchar();
            if (c != ' '){
                putchar(c);
            }

        }
       
        
    }
    
    return 0;
}
