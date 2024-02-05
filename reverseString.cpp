
#include <iostream>
#include <string>

std::string reverseStringLoop(const std::string& inputStr) {
    std::string reversedStr;
    for (int i = inputStr.length() - 1; i >= 0; i--) {
        reversedStr += inputStr[i];
    }
    return reversedStr;
}

int main() {
    std::string originalStr = "HelloWorld";
    std::string result = reverseStringLoop(originalStr);
    std::cout << result << std::endl;
    return 0;
}
