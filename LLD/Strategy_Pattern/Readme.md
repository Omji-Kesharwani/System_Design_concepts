# Strategy Design Pattern

## 📌 Overview
The **Strategy Design Pattern** is a **behavioral design pattern** that allows you to define a family of algorithms or behaviors, encapsulate each one into a separate class, and make them interchangeable at runtime.  
It enables changing an object’s behavior dynamically without modifying its code.

---

## 🎯 Intent
- Define multiple algorithms independently  
- Encapsulate each algorithm in its own class  
- Allow algorithms to be selected at runtime  
- Replace large conditional statements with flexible design  

---

## 🌍 Real-World Examples

### 1. Payment Systems (E-Commerce)
- Credit Card  
- PayPal  
- UPI  
- Bank Transfer  

Each payment option has its own processing logic, selected dynamically based on user choice.

### 2. File Compression Tools
- ZIP  
- GZIP  
- TAR  

Users choose the compression strategy at runtime.

### 3. Sorting Algorithms
- Quick Sort  
- Merge Sort  
- Bubble Sort  

Sorting strategy changes depending on data size or performance needs.

---

## 🧩 Components of Strategy Design Pattern

### 1️⃣ Context
- Maintains a reference to a strategy object  
- Delegates work to the strategy  
- Does not know the implementation details  

### 2️⃣ Strategy Interface
- Declares common methods for all strategies  
- Ensures strategies are interchangeable  
- Promotes loose coupling  

### 3️⃣ Concrete Strategies
- Implement the strategy interface  
- Encapsulate specific algorithms  
- Can be swapped at runtime  

### 4️⃣ Client
- Selects and configures the strategy  
- Supplies the strategy to the context  

![Strategy Pattern](StrategyDesignPatternExample.webp)
---

## 🔄 How It Works
1. Client selects a concrete strategy  
2. Strategy is passed to the context  
3. Context delegates execution to the strategy  
4. Strategy executes its algorithm  


---

## ✅ Advantages
- Open/Closed Principle support  
- Eliminates complex `if-else` logic  
- Easy to extend and maintain  
- Supports runtime behavior changes  

---

## ❌ Disadvantages
- Increases number of classes  
- Slight performance overhead  
- Client must understand strategy differences  

---

## 🕒 When to Use
- Multiple ways to perform a task  
- Behavior needs to change at runtime  
- Want to avoid conditional logic  
- Need clean separation of algorithms  

---

## 🚫 When Not to Use
- Only one fixed algorithm  
- Very simple applications  
- Performance-critical systems with no abstraction tolerance  

---

## 🏗️ Example Use Case
**Payment Processing System**
- Context: `PaymentProcessor`  
- Strategy Interface: `PaymentStrategy`  
- Concrete Strategies: `CreditCardPayment`, `UPIPayment`, `PayPalPayment`  
- Client: Checkout module  

---

## 📌 Key Takeaway
> **Strategy Pattern promotes flexibility by favoring composition over inheritance and enables runtime algorithm selection without modifying existing code.**
