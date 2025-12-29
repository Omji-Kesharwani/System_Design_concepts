# 🔌 Adapter Design Pattern

## 📌 Introduction
The **Adapter Design Pattern** is a **structural design pattern** that allows two incompatible interfaces to work together.  
It acts as a **bridge** between an existing class (legacy or third-party) and a new system by converting one interface into another that the client expects.

This pattern is especially useful when integrating **legacy systems**, **third-party libraries**, or **old APIs** into a modern application.

---

## 🌍 Real-World Examples

### 🔋 Physical World
- **Mobile charger adapter** converts high-voltage power into a suitable voltage for mobile devices.

### 💻 Software World
- File format converters (CSV → JSON → XML)
- Device drivers in operating systems
- Database connectors
- Language translators (English → Hindi, Chinese → English)
- Legacy API integration with new systems

---

## 🧩 Components of Adapter Design Pattern

### 1. Target Interface
- Defines the interface expected by the client
- Client interacts only with this interface

### 2. Adaptee
- Existing class with an incompatible interface
- Contains useful but incompatible functionality

### 3. Adapter
- Implements the Target interface
- Internally uses the Adaptee
- Translates client requests into a form the Adaptee understands

### 4. Client
- Uses the Target interface
- Remains unaware of the adapter and adaptee

![AdapterDesignPattern](Class-Diagram-of-Adapter-Design-Pattern_.webp)
---

## 🔄 How Adapter Design Pattern Works

1. Client calls a method via the **Target interface**
2. Adapter receives the request
3. Adapter converts the request to match the **Adaptee’s interface**
4. Adaptee processes the request
5. Adapter returns the result to the client

---

## ✅ When to Use Adapter Design Pattern
- Integrating incompatible systems
- Reusing legacy or third-party code
- Migrating from old APIs to new ones
- Centralizing compatibility logic
- Keeping client code clean and decoupled

---

## 🚫 When Not to Use Adapter Design Pattern
- When interfaces are already compatible
- For small or temporary projects
- In performance-critical systems (extra indirection)
- When adaptation logic is trivial

---

## 👍 Advantages (Pros)
- Promotes **code reuse** without modification
- Improves **maintainability**
- Enhances **flexibility and scalability**
- Decouples client from implementation details
- Supports multiple adapters for different systems

---

## 👎 Disadvantages (Cons)
- Adds extra abstraction and complexity
- Slight performance overhead
- Multiple adapters increase maintenance cost
- Risk of overengineering simple problems

---

## 🧠 Use Cases
- API compatibility layers
- Legacy system integration
- Platform-specific interfaces
- Cross-language or cross-format systems

---

## 📌 Summary
> The **Adapter Design Pattern** allows incompatible interfaces to collaborate without modifying existing code, making systems more flexible, reusable, and maintainable.
