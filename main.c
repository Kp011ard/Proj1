#include <stdio.h>
#include <stdlib.h> // For exit() function
int main()
{
int a;
scanf("%d", &a);
switch(a) {
    case 1: printf("Rotation Encryption selected"); break;
    case 2: printf("Rotation Decryption selected"); break;
    case 3: printf("Subsitution Encryption selected"); break;
    case 4: printf("Subsitution Decryption selected"); break;
    default: printf("Program quiting"); exit (0);
}
}