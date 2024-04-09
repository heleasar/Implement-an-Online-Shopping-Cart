#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

#include <string>

class ItemToPurchase {
public:
    ItemToPurchase();
    void SetName(const std::string& name);
    std::string GetName() const;
    void SetPrice(int price);
    int GetPrice() const;
    void SetQuantity(int quantity);
    int GetQuantity() const;
    void SetDescription(const std::string& description);
    std::string GetDescription() const;
    void PrintItemCost() const;
    void PrintItemDescription() const;

private:
    std::string itemName;
    int itemPrice;
    int itemQuantity;
    std::string itemDescription;
};

#endif
