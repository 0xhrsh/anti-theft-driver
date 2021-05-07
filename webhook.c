#include <unistd.h>
#include <stdio.h>

int main(){
    char * arg[] = {"curl", "-d", "content=Movement Detected by IR sensor!", "-X", "POST", "https://discord.com/api/webhooks/840316032106889267/ISh3biozpeUtgjNq5lub37WYSU2ZuawkUKbhC5J9tWbX0OM1kAenGZp74L3qZ2FhfJiY"};
    execvp("curl", arg);

    return 0;
}