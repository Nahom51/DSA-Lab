#include <iostream>
#include <string>

namespace naHome {
    
    struct SnapchatFriend {
        std::string name;
        std::string status;

       
        SnapchatFriend(std::string n, std::string s) : name(n), status(s) {}
    };

  
    void displayValue(std::string item) {
        std::cout << "String value: " << item << std::endl;
    }

    
    template <typename T>
    void displayValue(T item) {
        std::cout << ":) " << item << std::endl;
    }

    
    void displayFriend(SnapchatFriend friendObj) {
        std::cout << "Friend: " << friendObj.name << " - Status: " << friendObj.status << std::endl;
    }
}

int main() {
    
    naHome::SnapchatFriend friend1("Aman", "Available");
    naHome::SnapchatFriend friend2("Noha", "Busy");
    naHome::SnapchatFriend friend3("Melat", "Offline");

    
    naHome::displayFriend(friend1);
    naHome::displayFriend(friend2);
    naHome::displayFriend(friend3);

    
    naHome::displayValue("Hello, Snapchat!");

    

    return 0;
}