#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "ItemToPurchase.h"
#include <vector>
#include <string>

class ShoppingCart {
public:
    ShoppingCart();
    ShoppingCart(const std::string& name, const std::string& date);
    std::string GetCustomerName() const;
    std::string GetDate() const;
    void AddItem(const ItemToPurchase& item);
    void RemoveItem(const std::string& itemName);
    void ModifyItem(const ItemToPurchase& item);
    int GetNumItemsInCart() const;
    int GetCostOfCart() const;
    void PrintTotal() const;
    void PrintDescriptions() const;

private:
    std::string customerName;
    std::string currentDate;
    std::vector<ItemToPurchase> cartItems;
};

#endif

