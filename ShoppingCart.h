#pragma once
#include <iostream>
#include <string>
#include "Product.h"
#include <vector>
class ShoppingCart 
{
private:
	std::vector<std::pair<Product, int>> cart;
public:
	void addprod(Product product, int quantity) {
		if (product.isAvailable(quantity)) {
			cart.push_back(std::make_pair(product, quantity));
			std::cout << "Added in your shopping cart " << product.get_name()<<" in terms of quantity: "<< quantity << std::endl;
		}
		else {
			std::cout << "Error, the number of orders increases the quantity of this product in stock" << std::endl;
		}
	}

	void remove_product(int id) {
		for (int i = 0; i < cart.size(); i++) {
			if (cart[i].first.get_id() == id) {
				//std::cout << "remove " << cart[i].first.get_id() << std::endl;
				cart.erase(cart.begin() + i);
			}

		}
	}
	
	void display_card() {
		if (cart.empty()) {
			std::cout << "not found" << std::endl;
		}
		else {
			double balance = 0;
			for (int i = 0; i < cart.size(); i++) {
				std::cout << cart[i].first.get_name() << " - Quantity: " << cart[i].second
					<< " - Price: $" << cart[i].first.get_price() * cart[i].second << "\n";
				balance += cart[i].second* cart[i].first.get_price();
			}
			std::cout << "Your banalce is: " << balance << std::endl;
		}
	
	}


};
