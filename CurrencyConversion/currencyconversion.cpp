#include <iostream>

double convertPeso(double num)
{
    return num * 0.050;
}

double convertBraz(double num)
{
    return num * 0.21;
}

double convertPeru(double num)
{
    return num * 0.27;
}

int main()
{

    std::string promp = "Enter number of ";
    double peso, braz, peru, usd;
    std::cout << promp << "Columbian Pesos: ";
    std::cin >> peso;
    std::cout << promp << "Brazilian Reais: ";
    std::cin >> braz;
    std::cout << promp << "Peruvian Soles: ";
    std::cin >> peru;
    usd = convertPeso(peso) + convertBraz(braz) + convertPeru(peru);
    std::cout << "Us Dollars = $" << usd << std::endl;
}