bool checkPalindrome(std::string inputString) {
    string original = inputString;
    std::reverse(inputString.begin(), inputString.end());
    return inputString == original;
}
