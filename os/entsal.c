

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define BUFFER_SIZE 100

int main(){
int counter;
char buffer[BUFFER_SIZE];
int fd1 = open("prueba1.txt", O_RDONLY);
if (fd1 == -1){
    perror("open");
}


int fd2 = open("prueba2.pb", O_CREAT|O_RDONLY);
if (fd2 == -1){
    perror("open");
}

while(read(fd1,buffer,BUFFER_SIZE) != 0){
    write(fd2,buffer,BUFFER_SIZE);
}

if(close(fd1) == -1){
    perror("close");
}
if(close(fd2)== -1){
    perror("close)");
}
if (close(fd1) == -1){
    perror("close");
}
return 0;
}
