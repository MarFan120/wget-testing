#include <iostream>
#include <string>

template <typename T>
void askAndPrint(T question) {
    std::string answer;
    std::cout << question;
    std::getline(std::cin, answer);
    std::cout << "You said: " << answer << std::endl;
}

int main() {
    askAndPrint("What is your name? ");
    askAndPrint("What is your hobby? ");
    askAndPrint("What is your favorite food? ");
    return 0;
}