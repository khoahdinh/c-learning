# Function Practice Project (C/C++)

This project contains a set of basic function exercises, organized into logical groups and separated into multiple source and header files for clarity and reusability.

---

## 📁 File Structure & Purpose

### `main.cpp`

- Entry point of the program.
- Used to **test and run all functions**.
- Includes header files:
  - `check.h`
  - `calculate.h`
  - `modify.h`
- Calls functions and prints results to the console.

---

### `check.h`

- Declares **checking/validation functions** (`bool` return type).
- Examples:
  - `isPrime`, `isEven`, `isPalindrome`, `isLeapYear`, ...
- Must be included in:
  - `check.cpp`
  - Any file that uses these functions (e.g. `main.cpp`, `calculate.cpp`).

---

### `check.cpp`

- Implements all functions declared in `check.h`.
- Contains logic for:
  - Number checking
  - Character checking
  - Date checking
- Includes `check.h`.

---

### `calculate.h`

- Declares **calculation functions**.
- Examples:
  - Series sum
  - Digit sum
  - Mathematical formulas
- Used by `main.cpp` and implemented in `calculate.cpp`.

---

### `calculate.cpp`

- Implements functions declared in `calculate.h`.
- Focuses on **returning computed values**, not printing.

---

### `modify.h`

- Declares functions that **modify variables via reference**.
- Examples:
  - `swapInt`, `orderTwo`, `sortThree`
  - Solving quadratic equations
  - Time decomposition

---

### `modify.cpp`

- Implements all functions declared in `modify.h`.
- Uses **reference parameters** to change input values directly.

---

## ▶️ How to Compile & Run

Compile all `.cpp` files together:

```bash
g++ main.cpp check.cpp calculate.cpp modify.cpp -o main
```

## 📝 Notes

- Each .cpp file must include its corresponding .h file.

- main.cpp only includes header files, never .cpp files.

- All functions are grouped by purpose for easy maintenance and learning

Merry christmas 2025
