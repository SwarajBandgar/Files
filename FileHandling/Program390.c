#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

int main()
{
    char Fname[20];
    int fd = 0, Length = 0;
    char Data[100];

    printf("Enter the file name that you want to create : ");
    scanf("%s",Fname);
 
    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        return -1;
    }

    Length = read(fd,Data,13);

    printf("Data from file is \n");
    write(1,Data,Length);

    close(fd);

    return 0;
}