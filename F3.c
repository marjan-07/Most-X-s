#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (int argc, char *argv[])
{
        FILE* file=fopen("F3file", "r");
        char line[500];
        int count=0;
        int max=0;
        int index=0;
        int linetracking=0;
        int finalline=0;
        while (fgets(line,sizeof(line),file))
        {
                count=0;
                index=0;
                linetracking=linetracking+1;
                while (line[index]!='\0')
                {
                        if(line[index]=='X')
                        {
                                count=count+1;
                        }
                        index=index+1;
                }
                if (count>max)
                {
                        finalline=linetracking;
                        max=count;
                }
        }

        printf("Most Xs is %d on line %d\n", max,finalline);

        fclose(file);
        return 0;
}
