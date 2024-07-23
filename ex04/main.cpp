#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Error: Incorrect number of arguments." << std::endl;
        return 1;
    }

    std::string filePath = argv[1];
    std::string oldWord = argv[2];
    std::string newWord = argv[3];
    std::ifstream inFile(filePath);
    if (!inFile.good()) {
        std::cerr << "Error: File does not exist." << std::endl;
        return 1;
    }
    std::string content;
    std::string line;
    size_t pos = 0;
    while (std::getline(inFile, line)) {
        int i = 0;
        while (i < line.length()) {
            pos = line.find(oldWord, i);
            if (pos != std::string::npos) {
                std::string newLine = line.substr(0, pos) + newWord;
                newLine += line.substr(pos + oldWord.length());
                line = newLine;
                i = pos + oldWord.length();
                }
                else 
                    break;
        }
        content += line;
        if (!inFile.eof())
            content += '\n';
    }
    inFile.close();
    std::string newFilePath = filePath + ".replace";
    std::ofstream outFile(newFilePath);
    outFile << content;
    outFile.close();
    return 0;
}
