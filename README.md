# 💸 ExpenseFlow - Expense Sharing & Debt Settlement System

A scalable and extensible expense-sharing platform built using modern C++ and Object-Oriented Design principles.

ExpenseFlow enables users to create groups, add shared expenses, split bills using multiple strategies, track balances, simplify debts, and settle payments efficiently.

The project demonstrates real-world backend system design concepts including Strategy Pattern, Factory Pattern, Observer Pattern, Debt Simplification Algorithms, Validation Layers, and Service-Oriented Architecture.

---

## 🚀 Features

### User Management

* Create and manage users
* Track individual balances
* Maintain peer-to-peer settlements
* View personal balance sheets

### Group Management

* Create expense groups
* Add or remove members
* Prevent members from leaving with pending dues
* Maintain group-specific ledgers

### Expense Management

* Add shared expenses
* Support multiple participants
* Track expense history
* Maintain group balance sheets

### Split Strategies

#### Equal Split

Distributes the expense equally among all participants.

Example:

Expense = ₹1200

Users = 4

Each User Pays = ₹300

---

#### Exact Split

Allows specifying exact contribution amounts.

Example:

Expense = ₹1000

```text
User A → ₹400
User B → ₹300
User C → ₹300
```

---

#### Percentage Split

Allows specifying percentage-based sharing.

Example:

Expense = ₹1000

```text
User A → 50%
User B → 30%
User C → 20%
```

---

### Balance Management

* User-to-user balances
* Group-specific balances
* Outstanding dues tracking
* Settlement support

### Debt Simplification

* Reduces unnecessary transactions
* Uses net balance calculation
* Greedy settlement optimization
* Minimizes payment graph complexity

Example:

```text
A owes B ₹100
B owes C ₹100

After Simplification

A owes C ₹100
```

---

### Notification System

* Expense creation notifications
* Settlement notifications
* Group activity updates
* Observer-based event propagation

---

## 🏗️ System Architecture

The system follows SOLID principles and separates responsibilities into independent layers.

```text
┌────────────────────────┐
│       Main App         │
└────────────┬───────────┘
             │
┌────────────▼───────────┐
│       Services         │
│ ExpenseService         │
│ GroupService           │
│ BalanceService         │
└────────────┬───────────┘
             │
┌────────────▼───────────┐
│      Validators        │
└────────────┬───────────┘
             │
┌────────────▼───────────┐
│       Factories        │
└────────────┬───────────┘
             │
┌────────────▼───────────┐
│      Strategies        │
└────────────┬───────────┘
             │
┌────────────▼───────────┐
│        Models          │
└────────────────────────┘
```

---

## 📂 Project Structure

```text
ExpenseFlow
│
├── include
│   ├── models
│   ├── services
│   ├── strategies
│   ├── factories
│   ├── observer
│   ├── algorithms
│   ├── exceptions
│   ├── enums
│   └── utils
│
├── src
│   ├── models
│   ├── services
│   ├── strategies
│   ├── factories
│   ├── observer
│   ├── algorithms
│   └── utils
│
├── tests
├── docs
└── main.cpp
```

---

## 🎯 Design Patterns Used

### Strategy Pattern

Used for implementing multiple expense splitting algorithms.

```text
SplitStrategy
├── EqualSplitStrategy
├── ExactSplitStrategy
└── PercentageSplitStrategy
```

Benefits:

* Open for extension
* Closed for modification
* Easy addition of new split types

---

### Factory Pattern

Creates appropriate split strategy at runtime.

```cpp
SplitFactory::createStrategy(splitType);
```

Benefits:

* Decouples object creation
* Cleaner service layer
* Runtime flexibility

---

### Observer Pattern

Used for notification broadcasting.

```text
Group
   │
   ├── User
   ├── User
   └── User
```

Benefits:

* Loose coupling
* Event-driven communication
* Scalable notification system

---

### Singleton Pattern

Used for central application management.

```cpp
Splitwise::getInstance();
```

Benefits:

* Single source of truth
* Global state management

---

## 🧠 Core Components

### ExpenseService

Responsible for:

* Expense creation
* Validation
* Strategy execution
* Balance updates

---

### BalanceService

Responsible for:

* Balance tracking
* Settlement calculations
* Balance sheet generation

---

### GroupService

Responsible for:

* Group creation
* Membership management
* Group operations

---

### DebtSimplifier

Responsible for:

* Net balance calculation
* Debt graph optimization
* Transaction minimization

---

## 🛡️ Validation Layer

ExpenseFlow includes a dedicated validation layer.

### Exact Split Validation

Checks:

* Sum of splits equals total expense
* Participant count matches split values

### Percentage Split Validation

Checks:

* Percentage total equals 100%
* Invalid distributions are rejected

---

## 🧪 Unit Testing

The project contains dedicated test modules:

```text
tests/
├── test_balance.cpp
├── test_group.cpp
└── test_split.cpp
```

Tests cover:

* Expense creation
* Split calculations
* Group operations
* Balance updates
* Debt simplification

---

## ⚙️ Build & Run

### Build

```bash
mkdir build
cd build

cmake ..
make
```

### Run

```bash
./splitwise
```

---

## 📈 Future Enhancements

* Expense Categories
* Multi-Currency Support
* Persistent Database Storage
* REST API Layer
* Authentication & Authorization
* Monthly Expense Reports
* Email Notifications
* Mobile Integration
* Settlement Recommendations
* Expense Analytics Dashboard

---

## 💡 Learning Outcomes

This project demonstrates:

* Object-Oriented Design
* SOLID Principles
* Low-Level Design Concepts
* Design Patterns
* Service-Oriented Architecture
* Data Modeling
* Debt Simplification Algorithms
* Scalable Backend Development
* Modern C++ Development

---

## 👨‍💻 Resume Highlights

* Designed and implemented a Splitwise-inspired expense-sharing platform using C++17 and SOLID principles.
* Implemented Strategy, Factory, Observer, and Singleton design patterns to achieve extensibility and maintainability.
* Built a debt simplification engine to minimize transaction count and optimize settlements.
* Developed modular service, model, validation, and algorithm layers following clean architecture practices.
* Created a scalable group expense management system supporting equal, exact, and percentage-based expense splitting.
