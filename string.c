int main() {
   char s1[30], s2[30];
   int i;
 
   printf("\nEnter two strings :");
   gets(s1);
   gets(s2);
 
   i = 0;
   while (s1[i] == s2[i] && s1[i] != '\0')
      i++;
   if (s1[i] > s2[i])
      printf("s1 > s2");
   else if (s1[i] < s2[i])
      printf("s1 < s2");
   else
      printf("s1 = s2");
 
   return (0);
}

