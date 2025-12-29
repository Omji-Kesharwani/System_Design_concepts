# 🏨 Facade Design Pattern

## 📌 Overview
The **Facade Design Pattern** is a **Structural Design Pattern** that provides a simplified, unified interface to a set of complex subsystems.  
It hides the internal complexity of multiple components and exposes a single entry point for the client.

👉 **Facade = One simple interface to many complex systems**

---

## 🎯 Intent
- Simplify client interaction with complex subsystems
- Reduce coupling between client and subsystem classes
- Improve code readability and maintainability
- Provide a stable interface over changing subsystems

---

## 🌍 Real-World Use Cases
- **Home Automation Systems** – One controller for lights, AC, and security
- **Banking Systems** – Unified interface for transactions and balance checks
- **Video Streaming Platforms** – Simplified playback interface
- **Car Engine Start-Up** – One button coordinates fuel, ignition, and starter

---

## 🧠 Real-World Analogy: Hotel System

A hotel has multiple restaurants:
- Veg Restaurant
- Non-Veg Restaurant
- Veg & Non-Veg Restaurant

As a customer, you don’t directly interact with each restaurant.  
Instead, you talk to the **Hotel Keeper**, who knows everything and brings the correct menu.

- **Client** → Customer  
- **Facade** → Hotel Keeper  
- **Subsystems** → Restaurants  

---

## 🧩 Components of Facade Pattern

### 1️⃣ Facade
- Provides a simplified interface
- Delegates requests to appropriate subsystems

### 2️⃣ Subsystems
- Perform actual work
- Are unaware of the facade

### 3️⃣ Client
- Interacts only with the facade
- Never directly accesses subsystem objects

---

## 🔄 Interaction Flow

---

## 🛠️ Steps to Implement
1. Identify complex subsystems
2. Create a facade class
3. Expose simple methods in the facade
4. Delegate work to subsystems
5. Client uses only the facade

---

## ✅ Advantages
- Simplified interface
- Reduced coupling
- Better encapsulation
- Improved maintainability

---

## ❌ Disadvantages
- Extra abstraction layer
- Reduced flexibility
- Overengineering for small systems

---

## 📌 When to Use
- When systems are complex
- When client should be shielded from internals
- When you want a clean API over legacy systems

---

## 🧪 Example
A **Hotel Keeper** provides menus from different restaurants using the Facade Design Pattern.
![FacadePattern](Problem-Statement-of-Facade-Method-Design-Pattern.jpg)
---

## 📚 Conclusion
The Facade Pattern improves usability by hiding complexity and exposing a clean interface.  
It is ideal for large systems with multiple interacting components.

⭐ *Facade simplifies — it does not replace subsystems.*
