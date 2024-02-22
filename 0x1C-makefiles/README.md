# C Makefile Template

This folder provides a simple template for a C project using Makefiles. A Makefile automates the build process and makes it easy to compile and manage your C code.

## Prerequisites

- **GCC Compiler:** Ensure that you have the GNU Compiler Collection installed on your system. You can install it using your package manager.

## Project Structure

- **src/:** Contains the source code files (e.g., main.c, file1.c, file2.c).
- **include/:** Optional directory for header files.
- **bin/:** The output directory where the executable will be generated.
- **Makefile:** Configuration file for the build process.

## How to Use

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/lesuuda/alx-low_level_programming.git
   ```

2. **Navigate to the Project Directory:**
   ```bash
   cd 0x1C-makefiles
   ```

3. **Build the Project:**
   ```bash
   make
   ```
   This will compile the source files and generate the executable in the `bin/` directory.

4. **Run the Executable:**
   ```bash
   ./bin/school
   ```
## Customization

- **Adding Source Files:**
  Add your C source files to the `src/` directory. The Makefile will automatically detect and compile them.

- **Header Files:**
  If you have header files, place them in the `include/` directory.

- **Compiler Flags:**
  Customize compiler flags in the Makefile as needed.

- **Executable Name:**
  Change the `NAME` variable in the Makefile to set the desired name for your executable.

## Cleaning Up

- **Remove Build Artifacts:**
  ```bash
  make clean
  ```
  This command will remove the compiled object files and the executable.

## License

This project is licensed under the [MIT License](LICENSE) - feel free to use, modify, and distribute the code as needed.

## Acknowledgments

- Thanks to the open-source community for providing valuable resources on Makefiles and C programming.