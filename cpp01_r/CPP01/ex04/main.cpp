#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <search_string> <replace_string>" << std::endl;
        return 1;
    }

    std::ifstream inputFile(argv[1]);
    if (!inputFile)
    {
        std::cerr << "Error opening input file: " << argv[1] << std::endl;
        return 1;
    }

    std::ofstream outputFile((std::string(argv[1]) + ".replace").c_str());
    if (!outputFile)
    {
        std::cerr << "Error creating output file: " << argv[1] << ".replace" << std::endl;
        return 1;
    }

    std::string searchStr = argv[2];
    std::string replaceStr = argv[3];
    std::string line;

    while (std::getline(inputFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(searchStr, pos)) != std::string::npos)
        {
            std::string before = line.substr(0, pos);
            std::string after = line.substr(pos + searchStr.length());
            line = before + replaceStr + after;
            pos += replaceStr.length();
        }
        outputFile << line;
        if (!inputFile.eof()) {
            outputFile << std::endl;
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}