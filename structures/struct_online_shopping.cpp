/*Create a program that simulates an online shopping order system using nested structures.

Define the following structures:

Product
Product ID
Product Name
Price

Order
Order ID
Product (structure)
Quantity Ordered

The program should:
Store information for multiple orders.
Calculate the total cost of each order using:
Total Cost = Price × Quantity
Display the order with the highest total cost.*/

#include <iostream>
#include <limits>
using namespace std;
// ===========PRODUCT STRUCTURE===========
struct product
{
    int product_ID;
    string product_name;
    float price;
};
// =============SHOP STRUCTURE============
struct shop
{
    int order_ID;
    product prod;
    int quantity;
    int order_count;
    float total_cost;
};
// =============MAIN FUNCTION============
int main()
{
    int num_orders;

    cout << "\n-----------------------Online Shopping Store----------------------\n";
    cout << "Enter Number of Orders: ";
    cin >> num_orders;

    shop order[num_orders];

    // TAKING INPUT OF ORDERS
    for (int i = 0; i < num_orders; i++)
    {
        cout << "\nEnter Details of Order " << i + 1 << endl;
        cout << "\nEnter Order ID: ";
        cin >> order[i].order_ID;
        cout << "Enter Product ID: ";
        cin >> order[i].prod.product_ID;
        cout << "Enter Product Name: ";
        cin >> order[i].prod.product_name;
        cout << "Enter Product Price: ";
        cin >> order[i].prod.price;
        cout << "Enter Quantity: ";
        cin >> order[i].quantity;

        // CALCULATING TOTAL COST
        order[i].total_cost = order[i].prod.price * order[i].quantity;
    }

    // OUTPUT
    cout << "-------------------------------------------------------------------------------------------\n";
    cout << "\nOrder ID\t" << "Product ID\t" << "Product Name\t" << "Price\t" << "Quantity Ordered\t" << "Total Cost\t" << "\n";
    cout << "--------------------------------------------------------------------------------------------\n";
    for (int i = 0; i < num_orders; i++)
    {
        cout << order[i].order_ID << "\t\t" << order[i].prod.product_ID << "\t\t" << order[i].prod.product_name << "\t\t" << order[i].prod.price << "\t"
             << order[i].quantity << "\t\t\t" << order[i].total_cost << "\t" << endl;
    }
    cout << "--------------------------------------------------------------------------------------------\n";

    float highest_price_order = numeric_limits<float>::lowest();
    int index;

    for (int i = 0; i < num_orders; i++)
    {
        if (order[i].total_cost > highest_price_order)
        {
            highest_price_order = order[i].total_cost;
            index = i;
        }
    }

    cout << "\nOrder with Highest Total Cost: " << highest_price_order << endl;
    cout << "\nOrder ID\t" << "Product ID\t" << "Product Name\t" << "Price\t" << "Quantity Ordered\t" << "Total Cost\t" << "\n";
    cout << "--------------------------------------------------------------------------------------------\n";

    cout << order[index].order_ID << "\t\t" << order[index].prod.product_ID << "\t\t" << order[index].prod.product_name << "\t\t" << order[index].prod.price << "\t"
         << order[index].quantity << "\t\t\t" << order[index].total_cost << "\t" << endl;

    return 0;
}