#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// Structure to represent each item in the vending machine
struct Item {
    string name;
    int price; // price in pence
};

// Accepted UK coins/notes in pence
vector<int> accepted_money = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

// Function to format prices in UK style: £x.xx or xxp
string format_price(int pence) {
    if (pence < 100) {
        return to_string(pence) + "p";
    } else {
        int pounds = pence / 100;
        int remainder = pence % 100;
        stringstream ss;
        ss << "£" << pounds << "." << (remainder < 10 ? "0" : "") << remainder;
        return ss.str();
    }
}

// Function to display the items available in the vending machine
void display_items(const unordered_map<int, Item>& items) {
    cout << "Welcome to the Vending Machine!" << endl;
    cout << "Available items:" << endl;
    for (const auto& entry : items) {
        cout << entry.first << ". " << entry.second.name << " - " << format_price(entry.second.price) << endl;
    }
    cout << "-----------------------------------------" << endl;
}

// Main vending machine logic
void vending_machine() {
    // Vending machine inventory (prices in pence)
    unordered_map<int, Item> items = {
        {1, {"C4 watermelon", 150}},  // £1.50
        {2, {"C4 choco", 100}},       // £1.00
        {3, {"Candypad lock", 75}},   // 75p
        {4, {"Water", 125}},          // £1.25
        {5, {"Mars Chocolate Bar", 120}}, // £1.20
        {6, {"Protein", 250}},        // £2.50
        {7, {"Protein Bar (Large)", 180}}, // £1.80
        {8, {"Redbull Drink", 200}}, // £2.00
        {9, {"C4 lemon", 175}},      // £1.75
        {10, {"Coffee", 150}},       // £1.50
        {11, {"Tea", 130}},          // £1.30
        {12, {"Gym towel", 160}},    // £1.60
        {13, {"Biscuit Pack", 90}},  // 90p
        {14, {"On Protein Bar", 220}} // £2.20
    };

    while (true) {
        display_items(items);

        int choice;
        cout << "Please select an item by number (or 0 to exit): ";
        cin >> choice;

        if (choice == 0) {
            cout << "Thank you for using the vending machine. Goodbye!" << endl;
            break;
        }

        if (items.find(choice) == items.end()) {
            cout << "Invalid selection. Please try again." << endl;
            continue;
        }

        Item selected_item = items[choice];
        int price = selected_item.price;
        cout << "You selected " << selected_item.name << " which costs " << format_price(price) << "." << endl;

        int total_inserted = 0;
        while (total_inserted < price) {
            cout << "Insert coin/note ("; 
            for (int i = 0; i < accepted_money.size(); i++) {
                cout << format_price(accepted_money[i]);
                if (i < accepted_money.size() - 1) cout << ", ";
            }
            cout << "): ";
            
            string coin_input;
            cin >> coin_input;

            // Remove £ or p from the input and convert to integer value in pence
            coin_input = coin_input.substr(0, coin_input.find_first_of("p£"));
            int coin_value = 0;
            try {
                if (coin_input.back() == 'p') {
                    coin_value = stoi(coin_input);
                } else {
                    coin_value = stoi(coin_input) * 100;  // Convert pounds to pence
                }

                if (find(accepted_money.begin(), accepted_money.end(), coin_value) == accepted_money.end()) {
                    cout << "Invalid coin/note. Try again." << endl;
                    continue;
                }

                total_inserted += coin_value;
                cout << "Inserted: " << format_price(coin_value) << " | Total: " << format_price(total_inserted) << endl;
            } catch (exception& e) {
                cout << "Invalid input. Please insert a valid coin/note." << endl;
            }
        }

        int change = total_inserted - price;
        cout << "\nDispensing " << selected_item.name << "..." << endl;
        if (change > 0) {
            cout << "Returning change: " << format_price(change) << endl;
        }

        cout << "Thank you for your purchase!" << endl;
    }
}

int main() {
    vending_machine();
    return 0;
}
