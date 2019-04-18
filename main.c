#include <stdio.h>

int main() 

{
   int c1;
    int c2;
    int c3;
    int a;
    int b;
    int c;
    int d;
    printf("Choose a cihper: \n1 for Rotation Cihper\n2 for Subsition Cihper\n");
    scanf("%d", &c1);

        switch(c1){
        case 1: c2=1;
        break;
        case 2: c2=2;
        break;
        default: printf("This is not an option\n");
         }
    printf("To chose Encryption please select 1, to chose Decryption please select 2\n");
if(c2 == 1) {
     c3=1;
    }else if(c2 == 2) { 
    c3=2;
}

 if(c3 == 1) {

 } 
 
    
    return 0;