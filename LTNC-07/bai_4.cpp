#include <iostream>
#include <vector>
using namespace std;

bool checkHorizontal(vector<string>& puzzle, int row, int col, string& word) {
    int wordLen = word.size();
    for (int i = 0; i < wordLen; i++) {
        if (puzzle[row][col + i] != '-' && puzzle[row][col + i] != word[i])
            return false;
    }
    return true;
}

bool checkVertical(vector<string>& puzzle, int row, int col, string& word) {
    int wordLen = word.size();
    for (int i = 0; i < wordLen; i++) {
        if (puzzle[row + i][col] != '-' && puzzle[row + i][col] != word[i])
            return false;
    }
    return true;
}

void placeWordHorizontal(vector<string>& puzzle, int row, int col, string& word) {
    int wordLen = word.size();
    for (int i = 0; i < wordLen; i++) {
        puzzle[row][col + i] = word[i];
    }
}

void placeWordVertical(vector<string>& puzzle, int row, int col, string& word) {
    int wordLen = word.size();
    for (int i = 0; i < wordLen; i++) {
        puzzle[row + i][col] = word[i];
    }
}

void removeWordHorizontal(vector<string>& puzzle, int row, int col, string& word) {
    int wordLen = word.size();
    for (int i = 0; i < wordLen; i++) {
        puzzle[row][col + i] = '-';
    }
}

void removeWordVertical(vector<string>& puzzle, int row, int col, string& word) {
    int wordLen = word.size();
    for (int i = 0; i < wordLen; i++) {
        puzzle[row + i][col] = '-';
    }
} 

bool solvePuzzle(vector<string>& puzzle, vector<string>& words, int index) {
    if (index == words.size()) {
        // All words have been placed, puzzle solved!
        return true;
    }

    string word = words[index];
    int wordLen = word.size();
    int puzzleSize = puzzle.size();

    for (int i = 0; i < puzzleSize; i++) {
        for (int j = 0; j < puzzleSize - wordLen + 1; j++) {
            if (checkHorizontal(puzzle, i, j, word)) {
                placeWordHorizontal(puzzle, i, j, word);
                if (solvePuzzle(puzzle, words, index + 1))
                    return true;
                removeWordHorizontal(puzzle, i, j, word);
            }
        }
    }


    for (int i = 0; i < puzzleSize - wordLen + 1; i++) {
        for (int j = 0; j < puzzleSize; j++) {
            if (checkVertical(puzzle, j, i, word)) {
                placeWordVertical(puzzle, j, i, word);
                if (solvePuzzle(puzzle, words, index + 1))
                    return true;
                removeWordVertical(puzzle, j, i, word);
            }
        }
    }

    return false;
}

// vector<string> crosswordPuzzle(vector<string> crossword, string wordsInput) {
//     vector<string> words;
//     string word = "";
//     for (char ch : wordsInput) {
//         if (ch == ';') {
//             words.push_back(word);
//             word = "";
//         } else {
//             word += ch;
//         }
//     }
//     words.push_back(word);

//     solvePuzzle(crossword, words, 0);
//     return crossword;
// }

int main() {
    vector<string> puzzle(10);
    for (int i = 0; i < 10; i++) {
        cin >> puzzle[i];
    }

    string wordsInput;
    cin >> wordsInput;

    vector<string> words;
    string word = "";
    for (char ch : wordsInput) {
        if (ch == ';') {
            words.push_back(word);
            word = "";
        } else {
            word += ch;
        }
    }
    words.push_back(word);

    solvePuzzle(puzzle, words, 0);

    for (int i = 0; i < 10; i++) {
        cout << puzzle[i] << endl;
    }

    return 0;
}

