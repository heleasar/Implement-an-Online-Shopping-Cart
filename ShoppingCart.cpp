#include "ShoppingCart.h"
#include <iostream>

ShoppingCart::ShoppingCart() : customerName("none"), currentDate("January 1, 2016") {}

ShoppingCart::ShoppingCart(const std::string& name, const std::string& date) : customerName(name), currentDate(date) {}

std::string ShoppingCart::GetCustomerName() const {
    return customerName;
}

std::string ShoppingCart::GetDate() const {
    return currentDate;
}

void ShoppingCart::AddItem(const ItemToPurchase& item) {
    cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(const std::string& itemName) {
    for (auto it = cartItems.begin(); it != cartItems.end(); ++it) {
        if (it->GetName() == itemName) {
            cartItems.erase(it);
            return;
        }
    }
    std::cout << "Item not found in cart. Nothing removed." << std::endl;
}

void ShoppingCart::ModifyItem(const ItemToPurchase& item) {
    for (auto& cartItem : cartItems) {
        if (cartItem.GetName() == item.GetName()) {
            if (item.GetDescription() != "none") {
                cartItem.SetDescription(item.GetDescription());
            }
            if (item.GetPrice() != 0) {
                cartItem.SetPrice(item.GetPrice());
            }
            if (item.GetQuantity() != 0) {
                cartItem.SetQuantity(item.GetQuantity());
            }
            return;
        }
    }
    std::cout << "Item not found in cart. Nothing modified." << std::endl;
