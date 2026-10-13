#include<stdio.h>
#include<stdlib.h>
int main()
{
    char sentence[100];
    printf("enter the sentence:");
    scanf(" %[^\n]",sentence);
    int *vowelcount=calloc(5,sizeof(int));
    for(int i=0;sentence[i]!='\0';i++)
    {
        char ch=sentence[i];
        if(ch=='a'){vowelcount[0]++;}
        else if(ch=='e'){vowelcount[1]++;}
        else if(ch=='i'){vowelcount[2]++;}
        else if(ch=='o'){vowelcount[3]++;}
        else if(ch=='u'){vowelcount[4]++;}
       
    }
   char vowels[]={'a','e','i','o','u'};
   for(int i=0;i<5;i++){
    printf("the vowel  %c count is:%d\n",vowels[i],vowelcount[i]);
   }


    free(vowelcount);
    return 0;
}