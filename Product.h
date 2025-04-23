#pragma once
#include <iostream>
#include <string>
class Product
{
private:

	std::string name;
	double price;
	int stock;
	int id;

public:

	Product(std::string name1, double price1, int stock1, int id1) {
		name = name1;
		price = price1;
		stock = stock1;
		id = id1;
	}

	void get_info() {
		std::cout << "Product name: " << name << std::endl;
		std::cout << "Product price: " << price << std::endl;
		std::cout << "Product stock: " << stock << std::endl;
		std::cout << "Product id: " << name << std::endl;
	}

	bool isAvailable(int quantity) {
		if (quantity <= stock) {
			return true;
		}
		return false;
	}

	std::string get_name() {
		return name;
	}

	int get_id() {
		return id;
	}

	double get_price() {
		return price;
	}

};