#include <stdio.h>
#include <string.h>
  
int main()
{
    char Str[1000];
    int i;
  
    printf("Enter the String: ");
    scanf("%s", Str);
  
    printf("Length of String is %ld", strlen(Str));
  
    return 0;
}





//int stringlen(char a[]){
//	int len=0;
//	for(len=0;a[len]>'\0';len++){
//	}
//	return (len);
//}
//
//int main(){
//	char a[1000];
//	int length;
//	
//	printf("Enter text :  ");
//	gets(a);
//	
//   length = stringlen(a);
// 
//   printf("\nLength of the String is : %d", length);
//	return 0;
//}

