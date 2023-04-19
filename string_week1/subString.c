//substring in  a string  and count the total number of occurrences of the substring:
//with strstr()

#include<stdio.h>   
#include<string.h>

int main() {
   char str[] = "Hi,this world is beautiful and you are too beautiful";
   char substr[] = "beautiful";
   char*result = str;
   int count = 0;

   while((result = strstr(result, substr)) != NULL) {
      count++;
      result++;
   }

   if(count > 0) {
      printf("Substring '%s' found in string '%s' %dtimes.\n", substr, str, count);
   } else{
      printf("Substring '%s' not found in string '%s'.\n", substr, str);
   }

   return 0;
}
