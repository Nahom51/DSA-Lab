
#include <iostream>
#define TAX_RATE 0.12 
using namespace std;
int main() {

    cout << "*****************************************************\n";
    cout << "*   Welcome to the Product Sales and Inventory      *\n";
    cout << "*   Analysis Program!                               *\n";
    cout << "*****************************************************\n\n";

    cout << "This program helps store owners track inventory and sales efficiently. \n";
    cout << "Reminder: C++ is a compiled language, meaning it must be compiled before execution. \n\n";

    
    string productName;
    int productCategory;
    int initialInventoryQuantity;
    float productPricePerUnit;
    int numberOfItemsSold;

   
    cout << "Enter Product Name (single word): ";
    cin >> productName;
    
    cout << "Enter Product Category (1 to 5): ";
    cin >> productCategory;
    
    cout << "Enter Initial Inventory Quantity: ";
    cin >> initialInventoryQuantity;
    
    cout << "Enter Product Price per Unit: ";
    cin >> productPricePerUnit;
    
    cout << "Enter Number of Items Sold: ";
    cin >> numberOfItemsSold;

    
    int newInventory = initialInventoryQuantity - numberOfItemsSold; 
    float totalSales = numberOfItemsSold * productPricePerUnit;
    string inventoryStatus = (newInventory < 10) ? "Low Inventory" : "Sufficient Inventory";

    
    int a = 5;       
    double b {9.68};
    string c = "Nahom"; 
    int d;
    d = 71; 
    auto salesHelper = totalSales;
    decltype(initialInventoryQuantity) extraInventory = 90;

   
    const float taxRate = 0.12;

    
    if (productCategory >= 1 && productCategory <= 5) {
        cout << "Valid product category.\n";
        switch (productCategory) {
            case 1: cout << "Category 1: Electronics\n"; break;
            case 2: cout << "Category 2: Groceries\n"; break;
            case 3: cout << "Category 3: Clothing\n"; break;
            case 4: cout << "Category 4: Stationery\n"; break;
            case 5: cout << "Category 5: Miscellaneous\n"; break;
        }
    } else {
        cout << "Invalid product category. Please enter a category between 1 and 5.\n";
    }

    
    cout << "\n*********************** Receipt ***********************\n";
    cout << "Item #   Price\n";
    cout << "--------------------------------------\n";
    for (int i = 1; i <= numberOfItemsSold; ++i) {
        cout << "Item " << i << "   $" << productPricePerUnit << endl;
    }
    cout << "-----------------------------\n";
    cout << "Total: $" << totalSales << endl;
    cout << "********************** Thank you for shopping! **********************\n\n";

    
    cout << "\nTax Rate (Preprocessor): " << TAX_RATE << endl;
    cout << "Tax Rate (const variable): " << taxRate << endl;
    cout << "\n--- Product Summary ---\n";
    cout << "Product Name: " << productName << endl;
    cout << "Category: " << productCategory << endl;
    cout << "Initial Inventory: " << initialInventoryQuantity << endl;
    cout << "Product Price: $" << productPricePerUnit << endl;
    cout << "Items Sold: " << numberOfItemsSold << endl;
    cout << "New Inventory: " << newInventory << endl;
    cout << "Total Sales: $" << totalSales << endl;
    cout << "Inventory Status: " << inventoryStatus << endl;

    cout << "\n--- Helper Variables ---\n";
    cout << "Sales Helper (auto): $" << salesHelper << endl;
    cout << "Extra Inventory (decltype): " << extraInventory << endl;

    return 0;
}