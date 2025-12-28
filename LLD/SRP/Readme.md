# 🧱 Single Responsibility Principle (SRP)

> **“A class should have only one reason to change.”**

The **Single Responsibility Principle (SRP)** states that **each class in a software system should have exactly one responsibility or job**.  
If a class handles more than one responsibility, changes in one part may affect others, making the system harder to maintain.

👉 **One class = One responsibility**

---

## 🎯 Purpose
The purpose of the Single Responsibility Principle is to:
- Improve **code clarity and readability**
- Make systems **easy to maintain**
- Reduce the risk of **unexpected bugs**
- Encourage **modular and scalable design**

This principle is especially important for **students learning system design and OOP concepts**.

---

## 🧠 What
SRP means that:
- A class should do **only one task**
- It should have **only one reason to change**
- Multiple responsibilities should be split into **separate classes**

---

## 🌍 Real-Life Example: Bakery 🍞

Imagine a **baker** working in a bakery.

### ❌ Without SRP (Bad Design)
If the baker is responsible for:
- Baking bread  
- Managing inventory  
- Ordering supplies  
- Serving customers  
- Cleaning the bakery  

This creates **confusion and overload**.  
The baker may lose focus on baking quality.

This situation is similar to a **single class handling too many responsibilities** in software.

---

### ✅ With SRP (Good Design)
To follow SRP, tasks are divided:

- One person bakes bread
- One manages inventory
- One orders supplies
- One serves customers
- One cleans the bakery

Each role has **one clear responsibility**, improving efficiency and quality.

---

## 🧩 Explanation Using Classes

Each responsibility is handled by a **separate class**:

### 🍞 1. `BreadBaker` Class
- Responsible only for baking bread
- Ensures quality and baking standards

### 📦 2. `InventoryManager` Class
- Manages ingredients and stock
- Ensures availability of required items

### 🛒 3. `SupplyOrder` Class
- Handles ordering supplies
- Communicates with suppliers

### 🧑‍💼 4. `CustomerService` Class
- Serves customers
- Handles queries and orders

### 🧹 5. `BakeryCleaner` Class
- Maintains cleanliness
- Ensures hygiene and safety

Each class has **one job and one reason to change**, which follows SRP.

---

## 📚 Key Learning Outcomes
After understanding SRP, students will learn:
- How to design **clean and modular code**
- Why separating responsibilities is important
- How real-life examples relate to software design
- How SRP improves maintainability and scalability

---

## 🧪 Practice Exercise
- Choose a real-life system (ATM, Hospital, School)
- Identify all responsibilities
- Divide them into separate classes
- Explain which design follows SRP and why

---

## ✅ Summary
The **Single Responsibility Principle** teaches us that:
- Focus leads to better quality
- Smaller, well-defined classes are easier to manage
- Good design starts with **clear responsibilities**

Just like a bakery works smoothly when everyone has **one role**, software systems work best when **each class has one responsibility**.
