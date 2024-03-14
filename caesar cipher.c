#include<stdio.h>
#include<stdlib.h>
#define MAX_LENGTH 100
void encrypt(char
*message, int key) {
    char ch;
    while (*message) {
        ch = *message;
        if (ch >= 'a' && ch <=
'z') {
            ch = 'a' + (ch - 'a' + key) % 26;
        } else if (ch >= 'A' && ch
<= 'Z') {
            ch = 'A' + (ch - 'A' + key) % 26;
        }
        *message = ch;
        message++;
    }
}
void decrypt(char
*message, int key) {
    encrypt(message, 26 - key); // Decryption

}
int main() {
    char message[MAX_LENGTH];
    int key;
    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);
    printf("Enter key: ");
    scanf("%d", &key);
    // Encrypt the message
    encrypt(message, key);
    printf("Encrypted message: %s\n",
message);

    printf("Decrypted message: %s\n",
message);
    return 0;


}

