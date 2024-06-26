#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator with current time
    int daysUntilExpiration = rand() % 12; // Generate a random number between 0 and 11

    std::cout << "Days until subscription expiration: " << daysUntilExpiration << std::endl;

    switch (daysUntilExpiration) {
        case 0:
            std::cout << "Your subscription has expired." << std::endl;
            break;
        case 1:
            std::cout << "Your subscription expires within a day! Renew now and save 20%!" << std::endl;
            break;
            case 2:
            std::cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" << std::endl;
            break;
            default:
            
                
            
    }

    return 0;
}
    
    
