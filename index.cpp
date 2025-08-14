#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Uso: " << argv[0] << " <nome_arquivo>\n";
        return 1;
    }

    std::string nameFile = argv[1];
    
    std::ofstream File(nameFile);
    
    if (!File){
        std::cerr << "Erro ao criar o arquivo: " << nameFile << "\n";
        return 0;
    }
    
    return 0;
}
