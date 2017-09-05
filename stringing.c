 #include<stdio.h>
int main(){
   char string[20];
   int i=0;
   printf("Enter a string: ");
   gets(string);
   printf("%c",*string);
   while(string[i]!='\0'){
       if(string[i]==' '){
            i++;
            printf("%c",*(string+i));
       }
       i++;
   }
   return 0;
}

