#include <iostream>
#include <sstream>
#include <map>
#include <string>

int main() {
    std::string paragraph;
    std::map<std::string, int> wordFrequency;

    // Prompt the user for input
    std::cout << "Enter a paragraph: ";
    std::getline(std::cin, paragraph);

    // Use a stringstream to parse the paragraph
    std::stringstream ss(paragraph);
    std::string word;

    // Read words from the stringstream and count their frequency
    while (ss >> word) {
        // Convert word to lowercase to ensure case-insensitive comparison
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        wordFrequency[word]++;
    }

    // Print the word frequencies
    std::cout << "\nWord frequencies:\n";
    for (const auto& pair : wordFrequency) {
        std::cout << pair.first << ": " << pair.second << '\n';
    }

    return 0;
}
