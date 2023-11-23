# Palindrome Checker in C

A simple C program that uses a stack to check if a given number is a palindrome.

## Table of Contents

- [About](#about)
- [Project Structure](#project-structure)
- [Usage](#usage)
- [How it Works](#how-it-works)
- [Contributing](#contributing)
- [License](#license)

## About

This C program checks if a given number is a palindrome. A palindrome is a number that reads the same backward as forward.

## Project Structure

The project consists of three files:

- `main.c`: The main program file.
- `stack.c`: The implementation of the stack.
- `stack.h`: The header file for the stack implementation.

## Usage

To use this program, follow these steps:

1. Ensure you have a C compiler installed on your machine.
2. Clone this repository.

    ```bash
    git clone https://github.com/AlperErd0gan/Stack-Implementation-to-Palindrome-Numbers.git
    ```

3. Navigate to the project directory.

    ```bash
    cd Stack-Implementation-to-Palindrome-Numbers
    ```

4. Compile the program.

    ```bash
    gcc main.c stack.c -o palindrome_checker
    ```

5. Run the program with the desired number.

    ```bash
    ./palindrome_checker 12321
    ```

Replace `12321` with the number you want to check.

## How it Works

The program uses a stack to reverse the digits of the input number and then compares it with the original number to determine if it's a palindrome.

## Contributing

Feel free to contribute by submitting bug reports, feature requests, or improvements. Follow these steps:

1. Fork the repository.
2. Create a new branch.

    ```bash
    git checkout -b feature/new-feature
    ```

3. Make your changes.
4. Commit your changes.

    ```bash
    git commit -m "Add new feature"
    ```

5. Push to the branch.

    ```bash
    git push origin feature/new-feature
    ```

6. Create a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

Feel free to reach out with any questions or feedback.

---
