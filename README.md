*This activity has been created as part of the 42 curriculum by <fakabban>.*

# Description
This project is a simple implementation of the `printf` function in C, which is used to print output to the standard output. The `ft_printf` function supports a variety of format specifiers, allowing for formatted output of different data types.

# Instructions

1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Compile the code using the provided Makefile by running the command `make`.
4. Use the `ft_printf` function in your C programs by including the header file and linking against the compiled library.

# Resources
- [42 Network](https://www.42.fr/)
- Libft Documentation
- AI tools used during this project:
  - **GitHub Copilot:** Used to help write documentation.
  - **Gemini:** Used to search for information and understand concepts I found difficult, especially linked lists. I also discussed problems with other students and looked at different implementations to improve my understanding.
- **C resources:**
  - [Stack Overflow](https://stackoverflow.com/)
  - [W3Schools](https://www.w3schools.com/)
  - [Koor.fr](https://koor.fr/)
  - [man7](https://man7.org/linux/man-pages/man3/)
  - [Linux.die.net](https://linux.die.net/man/)
- **Testing:**
  - [42-cli](https://github.com/brunogo25/42-cli)

# Details
The `ft_printf` function is designed to mimic the behavior of the standard `printf` function, supporting various format specifiers such as:
- `%c` - Character
- `%s` - String
- `%p` - Pointer address
- `%d` or `%i` - Signed decimal integer
- `%u` - Unsigned decimal integer
- `%x` - Unsigned hexadecimal integer (lowercase)
- `%X` - Unsigned hexadecimal integer (uppercase)
- `%%` - Literal percent sign


# explanation and justification

In this implementation, the `ft_printf` function uses a simple algorithm to parse the format string and handle the different format specifiers. The function iterates through each character of the format string, checking for the presence of a '%' character, which indicates the start of a format specifier. When a format specifier is found, the function calls the `ft_format` helper function, passing the current format specifier and the variable argument list. The `ft_format` function then determines the appropriate action to take based on the format specifier and retrieves the corresponding argument from the variable argument list using