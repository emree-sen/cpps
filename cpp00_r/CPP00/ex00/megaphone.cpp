#include <iostream>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;

    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    while(argv[++i] != NULL)
    {
        while(argv[i][j] != '\0')
            std::cout << (char)std::toupper(argv[i][j++]);
        j = 0;
        std::cout << " ";
    }
    std::cout << std::endl;
}