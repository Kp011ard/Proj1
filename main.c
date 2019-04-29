#include <stdio.h>
#include <stdlib.h> // For exit() function
int main()
{

int a = 1, b, i, key;
//int e;
char message[100], ch;
scanf("%d", &a);
scanf("%s", message);
scanf("%d", &key);
//From lines 6 to 13 are the code for the menu
switch(a) {
    case 1: printf("Rotation Encryption selected\n"); b=1; break;
    case 2: printf("Rotation Decryption selected\n"); b=2; break;
    case 3: printf("Subsitution Encryption selected\n");b=3; break;
    case 4: printf("Subsitution Decryption selected\n");b=4; break;
    default: printf("Program quiting"); exit (0);
}
if(b=1);{ 
 for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		if(ch>='A' && ch<='Z'){
		ch=ch+key;
		
		}
if(ch>='a' && ch<='z') {
    ch = ch-32;
    ch=ch+key;
}
message[i] = ch;
}

 }printf("%s", message);
 return 0;
 }
