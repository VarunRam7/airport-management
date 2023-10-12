#include <iostream>
#include <string>
#include <vector>

// Define a struct to store airline information
struct Airline {
    std::string title;
    std::string time;
    int code;
    int passengers;
};

// Function to display the elements of an array
void displayArray(const std::vector<std::string>& arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << "[" << i << "] = " << arr[i] << std::endl;
    }
}

// Function to search for an item in an array
int searchArray(const std::vector<std::string>& arr, std::string_view item) {
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] == item) {
            return i;
        }
    }
    return -1; // Not found
}

// Function to update an element in an array
void updateArray(std::vector<std::string>& arr) {
    // Add code to update the array
}

// Function to insert an element into an array
void insertArray(std::vector<std::string>& arr) {
    // Add code to insert into the array
}

// Function to delete an element from an array
void deleteFromArray(std::vector<std::string>& arr) {
    // Add code to delete from the array
}

int main() {
    std::vector<std::string> AirlineTitle;
    std::vector<std::string> AirlineTime;
    std::vector<int> AirlineCode;
    std::vector<int> AirlinePass;

    std::cout << "\t Welcome To Airport Management System\t" << std::endl;

    int op;
    char continueChoice;

    do {
        std::cout << "\nSelect which operation you would like to perform:" << std::endl;
        std::cout << "1. Traverse\n2. Search\n3. Update\n4. Insert\n5. Delete\n6. Exit" << std::endl;
        std::cin >> op;

        switch (op) {
            case 1:
                std::cout << "Which array would you like to traverse:\n1. Airline Title\n2. Airline #Code\n3. Airline #Passengers\n4. A & D Time\n5. All Data" << std::endl;
                int slct1;
                std::cin >> slct1;
                if (slct1 == 1) {
                    displayArray(AirlineTitle);
                } else if (slct1 == 2) {
                    displayArray(AirlineCode);
                } else if (slct1 == 3) {
                    displayArray(AirlinePass);
                } else if (slct1 == 4) {
                    displayArray(AirlineTime);
                } else if (slct1 == 5) {
                    // Add code to display all data
                }
                break;

            case 2:
                std::cout << "Which array would you like to search:\n1. Airline Title\n2. Airline #Code\n3. Airline #Passengers\n4. A&D Time" << std::endl;
                int slct2;
                std::cin >> slct2;
                if (slct2 == 1) {
                    std::cout << "Enter the item you want to search for" << std::endl;
                    std::string item;
                    std::cin >> item;
                    int index = searchArray(AirlineTitle, item);
                    if (index != -1) {
                        std::cout << "Element found at index AirlineTitle[" << index << "]" << std::endl;
                    } else {
                        std::cout << "Oops! Element Not Present in Input Array" << std::endl;
                    }
                } else if (slct2 == 2) {
                    // Add code for searching in AirlineCode
                } else if (slct2 == 3) {
                    // Add code for searching in AirlinePass
                } else if (slct2 == 4) {
                    // Add code for searching in AirlineTime
                }
                break;

            case 3:
                // Add code for updating an array
                break;

            case 4:
                // Add code for inserting into an array
                break;

            case 5:
                // Add code for deleting from an array
                break;

            default:
                break;
        }

        std::cout << "If you want to continue, press (y). If not, press something else: ";
        std::cin >> continueChoice;
    } while (op != 6);

    return 0;
}
