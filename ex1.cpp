#include <iostream>
#include <cstring> 

bool checkPass(const char* passwd, const char* userInput) {
    return strcmp(passwd, userInput) == 0;
}

int main() {
    char userIn[50];  // Buffer p/ input do usuário
    const char* passwd = "passwd123@";  // Senha armazenada em texto plano

    int num1;
    bool booleanStat;

    std::cout << "Digite a senha: \n";
    std::cin >> userIn;  

    bool callCheckPass = checkPass(passwd, userIn); 

    if (callCheckPass) {
        std::cout << "Senha correta \n";
    } else {
        std::cout << "Erro: senha incorreta \n";
    }

    return 0;
}
