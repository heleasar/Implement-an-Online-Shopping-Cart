Implement an Online Shopping Cart. Create five files to submit:
ItemToPurchase.h - Class declaration
ItemToPurchase.cpp - Class definition
ShoppingCart.h - Class declaration
ShoppingCart.cpp - Class definition
main.cpp - main() function
(1) Build the ItemToPurchase class with the following specifications:
Default constructor
Public class functions (mutators & accessors)
SetName() & GetName()
SetPrice() & GetPrice()
SetQuantity() & GetQuantity()
SetDescription() mutator & GetDescription() accessor
PrintItemCost() - Outputs the item name followed by the quantity, price, and subtotal
Ex. of PrintItemCost() output:
Bottled Water 10 @ $1 = $10
PrintItemDescription() - Outputs the item name and description
Ex. of PrintItemDescription() output:
Bottled Water: Deer Park, 12 oz.
Private data members
string itemName - Initialized in default constructor to "none"
int itemPrice - Initialized in default constructor to 0
int itemQuantity - Initialized in default constructor to 0
string itemDescription - Initialized in default constructor to "none"
(2) Build the ShoppingCart class with the following specifications.
Default constructor
Parameterized constructor which takes the customer name and date as parameters
Private data members
string customerName - Initialized in default constructor to "none"
string currentDate - Initialized in default constructor to "January 1, 2016"
vector < ItemToPurchase > cartItems
Public member functions
GetCustomerName() accessor
GetDate() accessor
AddItem()
Adds an item to cartItems vector. Has parameter ItemToPurchase. Does not return anything.
RemoveItem()
Removes item from cartItems vector. Has a string (an item's name) parameter. Does not return anything.
If item name cannot be found, output a message: Item not found in cart. Nothing removed.
ModifyItem()
Modifies an item's description, price, and/or quantity. Has parameter ItemToPurchase. Does not return anything.
If item can be found (by name) in cart, check if parameter has default values for description, price, and quantity. If not, modify item in cart.
If item cannot be found (by name) in cart, output a message: Item not found in cart. Nothing modified.
GetNumItemsInCart()
Returns quantity of all items in cart. Has no parameters.
GetCostOfCart()
Determines and returns the total cost of items in cart. Has no parameters.
PrintTotal()
Outputs total of objects in cart.
If cart is empty, output a message: SHOPPING CART IS EMPTY
Ex. of PrintTotal() output:
John Doe's Shopping Cart - February 1, 2016
Number of Items: 8
 
Nike Romaleos 2 @ $189 = $378
Chocolate Chips 5 @ $3 = $15
Powerbeats 2 Headphones 1 @ $128 = $128
 
Total: $521
PrintDescriptions()
Outputs each item's description.
If cart is empty, output a message: SHOPPING CART IS EMPTY
Ex. of PrintDescriptions() output:
John Doe's Shopping Cart - February 1, 2016
 
Item Descriptions
Nike Romaleos: Volt color, Weightlifting shoes
Chocolate Chips: Semi-sweet
Powerbeats 2 Headphones: Bluetooth headphones
 
(3) In main(), prompt the user for a customer’s name and today’s date. Output the name and date. Create an object of type ShoppingCart.
 
Ex:
Enter customer's name:
John Doe
Enter today's date:
February 1, 2016
 
Customer name: John Doe
Today's date: February 1, 2016
(4) In main(), call PrintMenu() and prompt for the user's choice of menu options. Each option is represented by a single character.
If an invalid character is entered, continue to prompt for a valid choice. When a valid option is entered, execute the option by calling ExecuteMenu(). Then, print the menu and prompt for a new option. Continue until the user enters 'q'.
Hint: Implement Quit before implementing other options.
Ex:
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit
 
Choose an option:
 
(5) Implement the shopping cart menu options.
 
Implement "Output shopping cart" menu option in ExecuteMenu().
Ex:
OUTPUT SHOPPING CART
John Doe's Shopping Cart - February 1, 2016
Number of Items: 8
 
Nike Romaleos 2 @ $189 = $378
Chocolate Chips 5 @ $3 = $15
Powerbeats 2 Headphones 1 @ $128 = $128
 
Total: $521
Implement "Output items' descriptions" menu option in ExecuteMenu().
Ex:
OUTPUT ITEMS' DESCRIPTIONS
John Doe's Shopping Cart - February 1, 2016
 
Item Descriptions
Nike Romaleos: Volt color, Weightlifting shoes
Chocolate Chips: Semi-sweet
Powerbeats 2 Headphones: Bluetooth headphones
 
Implement "Add item to cart" menu option in ExecuteMenu().
Ex:
ADD ITEM TO CART
Enter the item name:
Nike Romaleos
Enter the item description:
Volt color, Weightlifting shoes
Enter the item price:
189
Enter the item quantity:
2
 
Implement "Remove item from cart" menu option in ExecuteMenu().
Ex:
REMOVE ITEM FROM CART
Enter name of item to remove:
Chocolate Chips
 
Implement "Change item quantity" menu option in ExecuteMenu().
Hint: Make new ItemToPurchase object and use ItemToPurchase modifiers before using ModifyItem() method.
Ex:
CHANGE ITEM QUANTITY
Enter the item name:
Nike Romaleos
Enter the new quantity:
3
