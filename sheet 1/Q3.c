#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch, file_name[25];
   FILE *fp;

   printf("Enter name of a file \n");
   gets(file_name);

   fp = fopen(file_name, "r"); // read mode

   int line=0,word=0;
   if (fp != NULL)
   {
        while((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
            
            if(ch=='\n')
                line++;
            if(ch==' ')
                word++;
        }
   }
  printf("You entered: %d", line);
  printf("You entered: %d", word);

   fclose(fp);
    return 0;
}