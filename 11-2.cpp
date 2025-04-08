#include <iostream>
#include <iomanip>
using namespace std;

struct Item {
    int id;
    string name;
    float price;
    int quantity;
};

int main() {
    const int SIZE = 3;
    Item shop[SIZE] = {
        {1, "Pen", 10.0, 100},
        {2, "Notebook", 40.0, 50},
        {3, "Pencil", 5.0, 200}
    };

    cout << "====== Shop Inventory ======" << endl;
    cout << left << setw(10) << "ID" << setw(15) << "Item" 
         << setw(10) << "Price" << setw(10) << "Qty" << endl;

    for (int i = 0; i < SIZE; ++i) {
        cout << left << setw(10) << shop[i].id 
             << setw(15) << shop[i].name 
             << setw(10) << shop[i].price 
             << setw(10) << shop[i].quantity << endl;
    }

    int searchId;
    cout << "\nEnter item ID to buy: ";
    cin >> searchId;

    for (int i = 0; i < SIZE; ++i) {
        if (shop[i].id == searchId) {
            int qty;
            cout << "Enter quantity: ";
            cin >> qty;

            if (qty <= shop[i].quantity) {
                float total = qty * shop[i].price;
                shop[i].quantity -= qty;
                cout << "Total: Rs." << total << endl;
            } else {
                cout << "Insufficient stock." << endl;
            }
        }
    }

    return 0;
}
