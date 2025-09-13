#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <limits>

using namespace std;

// Function to format prices in UK style: £x.xx or xxp
string format_price(int pence) {
    if (pence < 100) {
        return to_string(pence) + "p";
    } else {
        int pounds = pence / 100;
        int remainder = pence % 100;
        return "£" + to_string(pounds) + "." + (remainder < 10 ? "0" : "") + to_string(remainder);
    }
}

int main() {
    // Vending machine inventory (prices in pence)
    unordered_map<int, pair<string, int>> items = {
        {1, {"C4 Watermelon", 150}},      // £1.50
        {2, {"C4 Choco", 100}},           // £1.00
        {3, {"Candypad Lock", 75}},       // 75p
        {4, {"Water", 125}},              // £1.25
        {5, {"Mars Chocolate Bar", 120}}, // £1.20
        {6, {"Protein", 250}},            // £2.50
    };

    // Valid coins/notes in pence
    unordered_set<int> valid_coins = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

    while (true) {
        // Display the available items
        cout << "\nAvailable items:\n";
        for (const auto& item : items) {
            cout << item.first << ". " << item.second.first << " - " << format_price(item.second.second) << endl;
        }

        // Prompt the user for a selection
        int choice;
        cout << "\nSelect an item by number (or 0 to exit): ";
        cin >> choice;

        // Handle invalid input
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        // Exit if user selects 0
        if (choice == 0) {
            cout << "\nGoodbye!" << endl;
            break;
        }

        // Validate if the selected item exists
        if (items.find(choice) == items.end()) {
            cout << "Invalid selection. Please try again.\n";
            continue;
        }

        string item_name = items[choice].first;
        int price = items[choice].second;
        cout << "\nYou selected " << item_name << " for " << format_price(price) << "." << endl;

        int total_inserted = 0;
        while (total_inserted < price) {
            int coin;
            cout << "Insert coin/note (valid: 1p, 2p, 5p, 10p, 20p, 50p, £1, £2, £5, £10): ";
            cin >> coin;

            // Handle invalid input
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a number.\n";
                continue;
            }

            // Check if the inserted coin is valid
            if (valid_coins.count(coin)) {
                total_inserted += coin;
                cout << "Total inserted: " << format_price(total_inserted) << endl;
            } else {
                cout << "Invalid coin/note. Please insert a valid amount.\n";
            }
        }

        // Calculate and return change if any
        int change = total_inserted - price;
        cout << "\nDispensing " << item_name << "..." << endl;
        if (change > 0) {
            cout << "Change: " << format_price(change) << endl;
        }

        cout << "Thank you for your purchase!" << endl;
    }

    return 0;
}
