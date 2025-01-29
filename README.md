# ConsonantSwap

## 📜 Description
ConsonantSwap is a simple C++ algorithm that replaces consonants with similar-sounding consonants at specific indices in a string. The program takes user input (a word or phrase) and modifies every nth consonant, where `n` defaults to `2`. The consonant substitutions are based on predefined phonetic similarities.

## ✨ Features
- 🔄 Replaces consonants at every `nth` index (default is every second consonant).
- 🔠 Maintains case sensitivity in substitutions.
- 📝 Works with phrases, preserving spaces and vowels.

## 🔍 How It Works
1. 🖊️ The user enters a word or phrase.
2. 🔄 The program scans the input and replaces consonants at specified indices using a predefined mapping.
3. 📤 The transformed string is displayed as output.

## 📌 Example Usage
```bash
Input:  "Take a step back"
Output: "Dake a szep back"
```

## ⚙️ Installation & Usage
### 📋 Prerequisites
- 🛠 A C++ compiler (e.g., `g++`, `Clang`, `MSVC`)

### 🏗️ Compilation
Compile the program using `g++`:
```bash
g++ -o consonant_swap main.cpp
```

### ▶️ Running the Program
```bash
./consonant_swap
```
Then, enter a word or phrase when prompted.

## 🔧 Customization
The function `replaceConsonantsAtIndices` allows customization of the interval at which consonants are replaced. By default, it modifies every second consonant (`n = 2`), but this can be adjusted as needed.

## 🚀 Future Improvements
- 🔢 Allow users to specify `n` dynamically.
- 🗣 Expand the consonant mapping for more phonetic variations.
- 🌎 Add support for multiple languages.
