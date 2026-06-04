# Caesar Cipher Program

A simple C++ console application that encrypts and decrypts text using the Caesar Cipher technique. It also includes a brute-force mode that tries all 25 possible shifts.

---

## Features

- **Encrypt** — Shift letters forward by a chosen amount (1–25)
- **Decrypt** — Reverse the shift to recover the original message
- **Brute Force** — Display all 25 possible decryptions to crack an unknown cipher
- Input validation for both text (letters and spaces only) and shift value

---

## How It Works

The Caesar Cipher is one of the oldest encryption techniques. Each letter in the text is shifted by a fixed number of positions in the alphabet.

**Example (shift = 3):**
```
Plain:   HELLO
Cipher:  KHOOR
```

---

## Getting Started

### Prerequisites
- A C++ compiler (e.g. g++, MSVC, MinGW)

### Compile & Run

**Using g++:**
```bash
g++ -o caesar_cipher main.cpp
./caesar_cipher
```

**Using MSVC (Visual Studio):**
Open the `.cpp` file in Visual Studio and run with Ctrl+F5.

> **Note:** The code uses `strcpy_s()` which is a Microsoft-specific safe string function. If you're compiling on Linux/macOS with g++, replace `strcpy_s(temp, text)` with `strcpy(temp, text)`.

---

## Usage

Run the program and choose from the menu:

```
========================================
        CAESAR CIPHER PROGRAM          
========================================
  1. Encrypt                           
  2. Decrypt                           
  3. Brute Force                       
  4. Exit                              
========================================
```

1. **Encrypt** — Enter your text and a shift value. The encrypted text is displayed.
2. **Decrypt** — Enter the ciphertext and the same shift value to recover the original.
3. **Brute Force** — Enter a ciphertext to see all 25 possible decryptions.
4. **Exit** — Quit the program.

---

## Example

```
Enter your choice: 1
Please Enter your text: Hello World
Please Enter number to shift: 4
Lipps Asvph
```

---

## Limitations

- Accepts only alphabetic characters and spaces (no numbers or symbols)
- Maximum text length: 100 characters
- Shift value must be between 1 and 25

---

## License

This project is open source and available under the [MIT License](LICENSE).
