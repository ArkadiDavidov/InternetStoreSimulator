# Internet Store Simulator

A C++ console application that simulates a simple online shopping experience, allowing users to add products to a cart, remove items, and view their total balance.

## Features
✔ Product Management – Stores product details (name, price, stock, ID).
✔ Shopping Cart Operations – Add/remove products with stock validation.
✔ Interactive Menu – User-friendly command-line interface.
✔ Real-Time Balance Calculation – Automatically updates the total cost.

## How It Works

### Predefined Products

✔ The system starts with a default list of products (Laptop, Smartphone, etc.).

### Adding Products

✔ Users select a product by ID and specify a quantity (checks stock availability).

### Removing Products

✔ Users can remove items by entering the product ID.

### Viewing Cart

✔ Displays all items, quantities, individual costs, and the total balance.

### Code Structure

####1. Product Class
 Attributes:

name (string)

price (double)

stock (int)

id (int)

 Methods:

get_info() – Displays product details.

isAvailable(quantity) – Checks if the requested quantity is in stock.

Getters (get_name(), get_price(), get_id()).

#### 2. ShoppingCart Class
Attributes:

cart – A vector<pair<Product, int>> storing products + quantities.

Methods:

addprod(Product, quantity) – Adds a product if available.

remove_product(id) – Removes a product by ID.

display_card() – Shows cart contents and calculates the total balance.

#### 3. main() Function
Initializes a list of default products.

Provides a menu-driven interface:

1. Add product  
2. Remove product  
3. Display cart  
Handles user input in a loop.

## How to Run
Compile with a C++17-compatible compiler (e.g., g++):

sh
g++ main.cpp -o shopping_cart
Run the executable:

sh
./shopping_cart
Follow the on-screen prompts.
