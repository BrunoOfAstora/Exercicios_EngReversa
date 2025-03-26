#include <stdio.h>
#include <string.h>

int main() {
    
    unsigned char password[7] = {0x73, 0x65, 0x63, 0x72, 0x65, 0x74, 0xFF};
    char input[100];

    printf("Digte a senha aqui => ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Remove o '\n' que pode ter sido adicionado por fgets
        input[strcspn(input, "\n")] = '\0';

        // Aqui, para simplicidade, comparamos apenas os primeiros 6 bytes
        if (memcmp(input, password, 6) == 0) {
            printf("Acesso Lberado, Exercico concluido!!!\n");
        } else {
            printf("Acesso Negado, tente Novamente (Dica: a senha está ao contrario/ ao converter hexadecimais, não coloque o identfcador '0x')\n");
        }
    } else {
        printf("Input error.\n");
    }
    
    return 0;
}
