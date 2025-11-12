# 🏦 C++ Bank Management System

A simple console-based **Bank Management System** built in **C++** with **CMake**.  
It allows users to create accounts, deposit and withdraw money, and view account details — all via a command-line interface.

---

## 🚀 Features

- Create new bank accounts  
- Deposit and withdraw funds  
- Check account balance  
- Display all customer records  
- Data stored locally for simplicity (in-memory version)

---

## 🧩 Project Structure

```

cpp_bank_system/
│
├── src/
│   └── main.cpp
│
├── CMakeLists.txt
└── build/

````

---

## ⚙️ Build and Run Instructions

### **Step 1: Generate build files**
```bash
mkdir build
cd build
cmake .. -G "MinGW Makefiles"
````

### **Step 2: Build the project**

```bash
cmake --build .
```

### **Step 3: Run the executable**

```bash
./BankSystem.exe
```

---

## 🛠️ Requirements

* **C++17** or newer
* **CMake** (version 3.10+)
* **MinGW** or any compatible compiler

---

## 📘 Future Improvements

* File-based account storage
* Password protection for accounts
* Transaction history logs
* Admin panel for managing all users

---

## 👨‍💻 Author

**Tahir Abbas**
Software Engineer | C++ & Web Developer

---