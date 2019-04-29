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
   FILE *fo;
   fo= fopen("Endgame.txt","w");

//From lines 6 to 13 are the code for the menu
switch(a) {
    case 1: printf("Rotation Encryption selected\n"); b=1; break;
    case 2: printf("Rotation Decryption selected\n"); b=2; break;
    case 3: printf("Subsitution Encryption selected\n");b=3; break;
    case 4: printf("Subsitution Decryption selected\n");b=4; break;
    default: printf("Program quiting"); exit (0);
}
if(b==1){ //Lines 23 to 38 is the code for the rotation Encryption
 for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];//this makes the message into seperate intergers
		if(ch>='A' && ch<='Z'){
		ch=ch+key;//this is the math behind the encryption
		
		}
if(ch>='a' && ch<='z') {//lines 30 to 33 accounts to make all leters
//captials
    ch = ch-32;
    ch=ch+key;
}
message[i] = ch; //this reverts the intergers to characters
}
printf("%s", message);//This prints out the Encrypted message
fprintf(fo, "%s", message);//This SHOULD print the message to a file.
   fclose(fo);
return 0;
 }
 if(b==2) {//Lines 40 to 58 is code for rotation decryption
     for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];//this makes the message into seperate intergers
		if(ch>='A' && ch<='Z'){
		ch=ch-key;//this is the math behind the encryption
		
		}
if(ch>='a' && ch<='z') {//lines 47 to 50 accounts to make all leters
    ch = ch-32;
    ch=ch-key;
}
message[i] = ch;//this reverts the intergers to characters
}
printf("%s", message);//prints the message
fprintf(fo, "%s", message);//This SHOULD print the message to a file.
   fclose(fo);

return 0;
 }
 }
 
 
