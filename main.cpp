#include "ShoppingCart.h"
#include <iostream>

void PrintMenu();
void ExecuteMenu(char option, ShoppingCart& shoppingCart);

int main() {
    std::string customerName;
    std::string currentDate;

    std::cout << "Enter customer's name:\n";
    getline(std::cin, customerName);
    std::cout << "Enter today's date:\n";
    getline(std::cin, currentDate);
    std::cout << "\nCustomer name: " << customerName << "\nToday's date: " << currentDate << std::endl;

    ShoppingCart shoppingCart(customerName, currentDate);
    
    char menuOption = '\0';
    do {
        PrintMenu();
        std::cout << "\nChoose an option:\n";
        std::cin >> menuOption;
        std::cin.ignore(); // To ignore newline character in input buffer
        ExecuteMenu(menuOption, shoppingCart);
    } while (menuOption != 'q');

    return 0;
}

void PrintMenu() {
    std::cout << "\nMENU\n"
              << "a - Add item to cart\n"
              << "d - Remove item from cart\n"
              << "c - Change item quantity\n"
              << "i - Output items' descriptions\n"
              << "o - Output shopping cart\n"
              << "q - Quit\n";
}

void ExecuteMenu(char option, ShoppingCart& shoppingCart) {
    // Implement function to handle user menu selections
    // This will involve calling the respective ShoppingCart or ItemToPurchase methods
    // based on the user's menu selection. For brevity, I'll outline a skeleton for you:
    
    switch (option) {
        case 'a': {
            // Implement "Add item to cart" logic
            break;
        }
        case 'd': {
            // Implement "Remove item from cart" logic
            break;
        }
        case 'c': {
            // Implement "Change item quantity" logic
            break;
        }
        case 'i': {
            // Implement "Output items' descriptions" logic
            shoppingCart.PrintDescriptions();
            break;
        }
        case 'o': {
            // Implement "Output shopping cart" logic
            shoppingCart.PrintTotal();
            break;
        }
        case 'q': {
            // Quit option
            std::cout << "Quit" << std::endl;
            break;
        }
        default: {
            std::cout << "Choose a valid option" << std::endl;
            break;
        }
    }
}
