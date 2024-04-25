#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

std::string fileData;

void readFromFile() {
    std::ifstream inputFile("input.txt");
    if (inputFile.is_open()) {
        std::getline(inputFile, fileData);
        inputFile.close();
    } else {
        std::cerr << "Error opening the file. Make sure the file 'input.txt' exists." << std::endl;
    }
}

int countVowels() {
    int count = 0;
    for (char c : fileData) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

int countWords() {
    int count = 0;
    for (size_t i = 0; i < fileData.length(); ++i) {
        if (std::isalpha(fileData[i]) && (i == 0 || !std::isalpha(fileData[i - 1]))) {
            count++;
        }
    }
    return count;
}

void Reverse() {
    std::string reversedString;
    for (int i = fileData.length() - 1; i >= 0; --i) {
        reversedString += fileData[i];
    }
    std::cout << "Reversed statement: " << reversedString << std::endl;
}

void capitalizeSecondLetter() {
    bool capitalize = true;
    for (char& c : fileData) {
        if (std::isalpha(c)) {
            if (capitalize) {
                c = std::toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        }
    }
    std::cout << "Statement with second letter of each word capitalized: " << fileData << std::endl;
}

int main() {
    readFromFile();

    std::cout << "Number of vowels in the text file statement: " << countVowels() << std::endl;
    std::cout << "Number of words in the text file statement: " << countWords() << std::endl;

    Reverse();

    capitalizeSecondLetter();

    return 0;
}

