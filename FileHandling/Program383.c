#include<stdio.h>
#include<stdlib.h>

// O_RD0NLY
// O_WR0NLY

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter the file name that you want to create : ");
    scanf("%s",Fname);
 
    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File is successfully created with FD %d\n",fd);
    }
    
    return 0;
}