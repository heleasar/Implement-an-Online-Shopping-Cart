#include "ItemToPurchase.h"
#include <iostream>

ItemToPurchase::ItemToPurchase() : itemName("none"), itemPrice(0), itemQuantity(0), itemDescription("none") {}

void ItemToPurchase::SetName(const std::string& name) {
    itemName = name;
}

std::string ItemToPurchase::GetName() const {
    return itemName;
}

void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

void ItemToPurchase::SetDescription(const std::string& description) {
    itemDescription = description;
}

std::string ItemToPurchase::GetDescription() const {
    return itemDescription;
}

void ItemToPurchase::PrintItemCost() const {
    std::cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemPrice * itemQuantity) << std::endl;
}

void ItemToPurchase::PrintItemDescription() const {
    std::cout << itemName << ": " << itemDescription << std::endl;
}
