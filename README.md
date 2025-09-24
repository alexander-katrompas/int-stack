# Integer Stack Solution

This project provides a complete implementation of an integer stack in C++,
including robust testing, proper error handling, and detailed comments for
instructional purposes. The solution adheres to professional coding standards
and includes academic comments for demonstration and teaching (noted with
the preface "INSTRUCTIONAL."

Note that testing is in "script" form, meaning that the tests are integrated
within the main program rather than using a separate testing framework.
This is done for simplicity and clarity in an educational context.
Normally, a dedicated testing framework would be used for more complex projects.

## Features

- **Stack Operations**:
    - `push(value)`: Adds an integer to the stack.
    - `pop()`: Removes and returns the top integer from the stack.
    - `peek(&value)`: Retrieves the top integer without removing it.
    - `isEmpty()`: Checks if the stack is empty.

- **Testing**:
    - Underflow tests.
    - Overflow tests.
    - Mid-stack tests.
    - Randomized crash tests.

- **Error Handling**:
    - Handles stack underflow and overflow gracefully using exceptions.

## Project Structure

- `README.md`: Project documentation.
- `.gitignore`: Git ignore file.
- `main.cpp/h`: Contains the creation of the stack and all test cases.
- `stack.cpp/h`: Stack class implementation and interface.

## How to Build and Run

1. **Prerequisites**:
    - A C++ compiler (e.g., `g++`).
    - A development environment (e.g., CLion, Visual Studio Code, or terminal).

2. **Build**:
    - Compile the project using the following command:
      ```bash
      g++ -I ./ *.cpp
      ```

3. **Run**:
    - Execute the compiled binary:
      ```bash
      ./a.out
      ```

## Testing

The project includes comprehensive tests to validate the stack's behavior under various conditions:
- **Underflow Tests**: Ensure the stack handles popping from an empty state correctly.
- **Overflow Tests**: Verify the stack's behavior when exceeding its maximum capacity.
- **Mid-Stack Tests**: Test operations when the stack is partially filled.
- **Randomized Tests**: Perform random operations to ensure stability and prevent crashes.

## Notes

- **Commenting**:
    - Block comments are used to mimic professional commit standards.
    - Line comments (marked as `INSTRUCTIONAL`) are for academic purposes and should be removed in production code.

- **Guidelines**:
    - Follow the [commenting guidelines] provided in the course for proper documentation.

## License

This project is for educational purposes and does not include a specific license. Modify and use it as needed for learning.

## Acknowledgments

This project was developed as part of a course assignment to demonstrate stack implementation and testing in C++.