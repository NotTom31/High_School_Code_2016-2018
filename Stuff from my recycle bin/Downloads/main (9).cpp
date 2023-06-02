#include <iostream>
#include <string>

int main() {
    std::string name;
    double adult, child, gross, net, distributor;
    
    std::cout << "Enter movie name: ";
    std::getline(std::cin, name);
    
    
    std::cout << "Enter adult tickets sold: ";
    std::cin >> adult;
    std::cout << "Enter child tickets sold: ";
    std::cin >> child;
    
    gross = ((adult * 10) * (child * 6));
    net = gross * .20;
    distributor = gross - net;
    
    std::cout << "Movie name: " << name << "\n";
    std::cout << "Adult tickets sold: " << adult << "\n";
    std::cout << "Child tickets sold: " << child << "\n";
    std::cout << "Gross box office profit: " << gross << "\n";
    std::cout << "Net box office profit: " << net << "\n";
    std::cout << "Ammount paid to distributor: " << distributor << "\n";
    
}