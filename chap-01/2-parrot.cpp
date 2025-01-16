#include <iostream>
#include <sstream>
#include <string>
#include <vector>

// int main() {
//     std::string entry;
//     auto        sentencies  = std::vector<std::string> {};
//     auto const  perrotSound = std::string { "Craow " };
//     while (1) {
//         std::getline(std::cin, entry);
//         if (entry.empty()) {
//             break;
//         }
//         sentencies.emplace_back(perrotSound + entry);
//     }
//     for (auto sentence : sentencies) {
//         std::cout << sentence << std::endl;
//     }
//     return 0;
// }

int main() {
    std::string       entry;
    std::stringstream sentencies;
    auto const        perrotSound = std::string {};
    while (1) {
        std::getline(std::cin, entry);
        if (entry.empty()) {
            break;
        }
        sentencies << "Craow " << entry << std::endl;
    }
    std::cout << sentencies.str();

    return 0;
}
