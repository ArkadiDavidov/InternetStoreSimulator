#include <iostream>
#include <string>
#include "ShoppingCart.h"
#include "Product.h"
#include <vector>



int main() {
    std::vector<Product> products = {
        Product("Laptop", 1200, 5, 1),
        Product("Smartphone", 800, 10, 2),
        Product("Headphones", 150, 15, 3),
        Product("Mouse", 40, 20, 4)
    };

    ShoppingCart cart;
    int quantity, cartID, choice, id;

    std::cout << "Hello, please select 1 of the following functiuons " << std::endl;
    std::cout << "1.Add product\n2.Remove product\n3.Display cart" << std::endl;
    while (true) {
        std::cin >> choice;
        if (choice == 1) {
            for (auto f : products) {
                std::cout << f.get_id() << "\t";
                std::cout << f.get_name() << std::endl;
            }
            std::cin >> quantity >> cartID;
            for (auto h : products) {
                if (h.get_id() == cartID) {
                    cart.addprod(h, quantity);
                }
            }
            continue;
        }
        if (choice == 2) {
            std::cout << "Enter product cartID " << std::endl;
            std::cin >> id;
            cart.remove_product(cartID);
            for (auto h : products) {
                if (cartID  == id) {
                 std::cout << "Removed  " << h.get_name() << std::endl;
                 break;
            }   
            else {
                std::cout << "Error " << std::endl;
                break;
                }
      
            }
            continue;
        }
        if (choice == 3) {
            cart.display_card();

        }

        if (choice >= 4 || choice <= 0) {
            std::cout << "Årror, action not found. Try again." << std::endl;
        }
        break;
    }
    return 0;
}