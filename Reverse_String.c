#include <stdio.h>  
#include <string.h>  
  
void ReverseString(char*str1){  //Function To Reverse The String..... 
    int temp;  
    int len=strlen(str1);
    for(int i=0;i<len/2;i++){  
        temp=str1[i];  
        str1[i]=str1[len-i-1];  
        str1[len-i-1]=temp;  
    }  
}  
      
int main()  {  
    char str[50]; 
    printf ("ENTER THE STRING ::: ");  
    scanf("%s",&str);
    printf("BEFORE REVERSING THE STRING , STRING IS ::: %s \n", str);  
    ReverseString(str);  
    printf("AFTER REVERSING THE STRING , STRING IS ::: %s \n", str);  
}