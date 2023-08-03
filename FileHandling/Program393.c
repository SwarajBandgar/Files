#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

int main()
{
    char Fname[20];
    int fd = 0, Length = 0, Count = 0,i = 0;
    char Data[100];

    printf("Enter the file name that you want to create : ");
    scanf("%s",Fname);
 
    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((Length = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i = 0; i < Length; i++)
        {
            if(Data[i] >='a' && Data[i] >='z')
            {
                Count++;
            }
        }
    }

    printf("Size of File is %d bytes\n",Size);
    
    close(fd);

    return 0;
}