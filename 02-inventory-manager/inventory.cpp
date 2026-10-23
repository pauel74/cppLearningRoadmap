/*
Project 2: Warehouse Inventory Manager

- Manage multiple shelves containing items (ID, name, price, quantity)
- Add, remove, search, and edit items.
- Move items between shelves.
- Sort items by ID, name, price, or quantity.
- Display shelves and their contents.
- Save inventory to a file and load it on startup.
- Handle invalid input and duplicate IDs.

- Requirements: struct, vector, string, functions, fstream.

- Done when all operations work and data persists after restarting.
*/

#include <iostream>
#include <random>
#include <ctime>
#include <algorithm>
#include <cstdlib>

using namespace std;

struct Item {

    int shelf;
    int itemInShelf;

    string name;

    int id;

    float price;

    int quantity;

    int condition; // 1 broken, 2 used, 3 brand meow
};

vector<Item> buildWarehouse() {

    srand(time(0));

    // ai generated
    string cheapItems[] = {
        "Screw", "Nail", "Washer", "Nut", "Bolt",
        "Cable Tie", "Pencil", "Pen", "Notebook", "Marker",
        "Sandpaper", "Duct Tape", "Packing Tape", "Glue Stick", "Eraser",
        "Light Bulb", "Battery", "Wall Anchor", "Paper Clips", "Rubber Band",
        "Cleaning Cloth", "Trash Bags", "Paintbrush", "Utility Knife", "Ruler",
        "Work Gloves", "Sponge", "Hook", "Small Box", "Zip Bag"
    };
    string mediumPriceItems[] = {
        "Hammer", "Screwdriver Set", "Pliers", "Wrench", "Handsaw",
        "Measuring Tape", "Spirit Level", "Flashlight", "Toolbox", "Drill Bits",
        "Safety Goggles", "Hard Hat", "Extension Cord", "Power Strip", "Padlock",
        "Door Handle", "Hinge Set", "Shelf Bracket", "Rubber Hose", "Watering Can",
        "Electric Kettle", "Desk Lamp", "Computer Mouse", "Keyboard", "USB Hub",
        "Digital Scale", "Stapler", "Storage Bin", "Hand Truck", "First Aid Kit"
    };
    string expensiveItems[] = {
        "Cordless Drill", "Circular Saw", "Angle Grinder", "Air Compressor", "Water Pump",
        "Welding Machine", "Pressure Washer", "Generator", "Industrial Vacuum", "Laser Level",
        "Bench Grinder", "Hydraulic Jack", "Workshop Vise", "Power Tool Set", "Lawn Mower",
        "Electric Chainsaw", "Shop Workbench", "Heavy Duty Ladder", "Industrial Shelving",
        "Pallet Jack", "Professional Tool Chest", "3D Printer", "Desktop Computer",
        "Laser Printer", "Barcode Scanner", "Industrial Scale", "Network Switch",
        "Security Camera System", "Portable Air Conditioner", "Forklift"
    };
    
    Item newItem;
    vector<Item> shelfes;
    
    for(int iShelf = 0; iShelf < 6; iShelf++) { // generate shelves
        for(int itemNumber = 0; itemNumber < 11; itemNumber++) {

            newItem.shelf = iShelf + 1;
            newItem.itemInShelf = itemNumber + 1;

            newItem.id = rand() % 899 + 100; // three diget id
            newItem.price = rand() % 30000;
            newItem.price /= 100; // makes for example 4125 to 41,25 because rand doesnt generate decimal numbers
            int nameIndex = rand() % 29;

            if(newItem.price < 100) {
                newItem.name = cheapItems[nameIndex];
                newItem.quantity = rand() % 99 + 1;
            }
            else if(newItem.price < 200) {
                newItem.name = mediumPriceItems[nameIndex];
                newItem.quantity = rand() % 49 + 1;
            }
            else {
                newItem.name = expensiveItems[nameIndex];
                newItem.quantity = rand() % 24 + 1;
            }
            newItem.condition = rand() % 3 + 1;
            newItem.price = newItem.price / (4-newItem.condition);

            shelfes.push_back(newItem);
        }
    }
    return shelfes;
}

void showItems(vector<Item> warehouse) {
    system("clear");
    cout << "Select Shelf:\n\n";
    for(int i = 0; i < 6; i++) {
        cout << "[" << i+1 << "] Shelf\n";
    }
    int lookAtShelf;
    cin >> lookAtShelf;
    int shelfX = lookAtShelf;
    lookAtShelf = (lookAtShelf-1) * 10;
    system("clear");
    cout << "SHELF " << shelfX << "\n\n";
    for(int j = lookAtShelf; j < lookAtShelf+10; j++) {
        cout << "[" << warehouse[j].id << "] " << warehouse[j].quantity << "x " << warehouse[j].name;
        cout << "\nCondition: ";
        for(int c = 0; c<warehouse[j].condition;c++) {
            cout << "★ ";
        }
        if(warehouse[j].condition == 2) {cout << "☆ ";}
        if(warehouse[j].condition == 1) {cout << "☆ ☆";}
        cout << "\nPrice per Item: " << warehouse[j].price << "$\n\n";
    }
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.get();
    showItems(warehouse);
}

int main() {
    
    vector<Item> warehouse = buildWarehouse();

    showItems(warehouse);

    return 0;/*

    int mainMenuSelection;
    int itemManagerSelection;
    int searchSortSelection;

    system("clear");

    cout << "--- Warehouse ---\n\n";
    cout << "[1] Item Manager\n[2] Search and Sort" << endl;
    cout << "Select System: ";
    cin >> mainMenuSelection;

    system("clear");

    switch (mainMenuSelection) {
        case 1:
            cout << "--- Warehouse ---\n\nItem Manager\n[1] Edit/Move Item\n[2] Remove Item\n\n[3] Back to Main Menu\n";
            cout << "Select System: ";
            cin >> itemManagerSelection;
            
            system("clear")

            switch (searchSortSelection) {
                case 1:
                    //edit/move item
                    break;
                
                case 2:
                    //remove item
                    break;
                
                case 3:
                    //Sort by ID function
                    break;
            } 
            
            break;
            
        case 2:
            cout << "--- Warehouse ---\n\nSearch and Sort\n[1] List all Items\n--------------\nSort by:\n[2] Name\n[3] ID\n[4] Price\n[5] Quantity\n[6] Condition\n\n[7] Back to Main Menu";
            cout << "Select System: ";
            cin >> searchSortSelection;

            system("clear")

            switch (searchSortSelection) {
                case 1:
                    showItems()
                    break;
                
                case 2:
                    //Sort by Name function
                    break;
                
                case 3:
                    //Sort by ID function
                    break;

                case 4:
                    //sort by Price function
                    break;

                case 5:
                    //sort by Quantity
                    break;

                case 6:
                    //sort by Quality
                    break;

                case 6:
                    //return to home
                    break;
            } 

            break;
    }

    system("clear");

    /* if(searchSortSelection == 1) {
        listItems();
    }
    */
}