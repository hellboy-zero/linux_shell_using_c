# Linux Shell Using C

A lightweight, Unix-like command-line shell implemented in C. This project demonstrates core systems programming concepts, including process management, signal handling, and file I/O.

## 🚀 Features
* **Command Execution:** Executes standard system commands by forking child processes.
* **Built-in Commands:** Supports custom implementations of essential commands like ('cd' , 'ls' , 'echo' , 'exit' , and other)
* **Process Management:** Handles basic process lifecycle management.
* **Signal Handling:** Configured to handle signals (like `Ctrl+C`) to prevent accidental termination of the shell.

## 🛠 Prerequisites
To compile and run this project, you will need:
* A C compiler (e.g., `gcc`)
* `make` (optional, for the Makefile)
* A Linux/Unix-based environment

## 📥 Installation
1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/hellboy-zero/linux_shell_using_c.git]
    cd linux_shell_using_c
    ```

2.  **Compile the source code:**
    If you have a `Makefile`, simply run:
    ```bash
    make
    ```
    

## 💻 Usage
After compiling, start the shell by running the executable:
```bash
./shell