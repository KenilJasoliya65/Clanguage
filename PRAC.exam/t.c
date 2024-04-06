//Q-3 :  Write a C program that defines a function to reverse a string without using any library functions.

#include <stdio.h>
void reverseString(char str[]){
    int length=0;
    while(str[length]!='\0'){
        length ++;
    }
    for(int i=0;i<length/2;i++){
        char temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
}
int main() {
  char str[100];
  printf("Enter a String:");
  scanf("%s",str);
  reverseString(str);
  
  printf("Reverse String is:%s\n",str);
  return 0;
}