<div align="center">

# 🧪 C Programming Lab

**A curated collection of C programming assignments and laboratory exercises.**

[![Language](https://img.shields.io/badge/Language-C-blue.svg?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Editor](https://img.shields.io/badge/Editor-VS%20Code-0078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white)](https://code.visualstudio.com/)
[![License](https://img.shields.io/badge/License-MIT-green.svg?style=for-the-badge)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Active-success.svg?style=for-the-badge)]()

*Building a strong foundation in procedural programming, memory management, and data structures.*

</div>

---

## 📖 Table of Contents

- [Overview](#-overview)
- [Projects Included](#-projects-included)
- [Getting Started](#-getting-started)
- [How to Run](#-how-to-run)
- [Technologies Used](#-technologies-used)
- [Contributing](#-contributing)
- [License](#-license)
- [Author](#-author)

---

## 🚀 Overview

Welcome to the **C Programming Lab** repository! This project serves as a comprehensive portfolio of fundamental C programming concepts. It covers everything from basic input/output operations and structures to algorithmic sorting. Each program is designed to solve a specific problem, demonstrating clean code practices and efficient logic.

---

## 📂 Projects Included

Here is a breakdown of the programs available in this repository:

### 1. 🎓 Student Record Management (`p1.c`)
A program designed to manage student data using structures.
- **Features:**
  - Uses `struct` to store student details (Name & Period).
  - Handles arrays of structures (`Student students[MAX_STUDENTS]`).
  - Validates user input for the total number of students.
  - Allows dynamic display of a specified number of student records.
- **Key Concepts:** `typedef struct`, String handling (`scanf` with `%[^\n]`), Array iteration.

### 2. 🔢 Bubble Sort Algorithm (`p2.c`)
An implementation of the classic sorting algorithm to arrange integers in ascending order.
- **Features:**
  - Accepts an array of integers from the user.
  - Implements **Bubble Sort** with an optimized `swapped` flag to break early if the array is already sorted.
  - Outputs the sorted array.
- **Key Concepts:** Arrays, Nested loops, Algorithm optimization (best-case O(n)).

### 3. 💼 Employee Salary & Tax Calculator (`p3.c`)
A utility to calculate income tax based on an employee's salary period.
- **Features:**
  - Stores employee ID, Name, and Salary.
  - Automatically calculates **10% Income Tax**.
  - Displays a formatted salary slip.
- **Key Concepts:** Structures, Floating-point arithmetic, Formatted output (`%.2f`).

---

## 🛠 Getting Started

To get a local copy of this project up and running on your machine, follow these simple steps.

### Prerequisites

You will need a C compiler installed on your system. We recommend:

*   **GCC** (GNU Compiler Collection) - *For Linux/macOS/Windows*
*   **Clang** - *For macOS*
*   **MinGW** - *For Windows*

**Check if you have GCC installed:**
```bash
gcc --version
Installation
Clone the repository:

bash
git clone https://github.com/ashwaj-shetty/c_programming_lab.git
Navigate to the directory:

bash
cd c_programming_lab
🏃 How to Run
You can compile and run any of the .c files using your terminal. Here is an example for p1.c:

Compile the code:

bash
gcc p1.c -o p1
Execute the program:

Windows:

bash
p1.exe
Linux/macOS:

bash
./p1
Repeat these steps for p2.c and p3.c respectively.
 ```
💻 Technologies Used
Technology	Description
C	Core programming language used for all logic and data structures.
VS Code	Integrated Development Environment (IDE) used for development.
Git	Version control system for tracking changes.
GitHub	Hosting platform for collaboration and storage.
🤝 Contributing
Contributions are what make the open-source community such an amazing place to learn, inspire, and create. Any contributions you make are greatly appreciated.

Fork the Project

Create your Feature Branch (git checkout -b feature/AmazingFeature)

Commit your Changes (git commit -m 'Add some AmazingFeature')

Push to the Branch (git push origin feature/AmazingFeature)

Open a Pull Request

📄 License
Distributed under the MIT License. See LICENSE for more information.

<div align="center">
Developed with ❤️ by Ashwaj Shetty

⭐ Don't forget to star this repository if you found it helpful! ⭐

</div>
