#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h> 
#include <stdlib.h>
#include <errno.h>  
#include <sys/wait.h>

int main(){
    char * arg[] = {"curl", "-d", "content=from_c_file", "-X", "POST", "https://discord.com/api/webhooks/840022099321815070/_1FtciEWBhvgPKWAcQVS9b8hPR9NpawiBXeQx4wh0l5STkNY8ziHFHRg-StP8dkFrVVX"};
    execvp("curl", arg);
}