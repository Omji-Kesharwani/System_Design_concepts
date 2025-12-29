# 🎨 Decorator Design Pattern

## 📌 Overview
The **Decorator Design Pattern** is a **structural design pattern** that allows behavior to be **added dynamically** to individual objects without modifying their original class.  
It works by wrapping objects with decorator classes that extend functionality at runtime.

This pattern follows the **Open–Closed Principle (OCP)** — open for extension, closed for modification.

---

## 🔑 Key Features
- Add responsibilities **dynamically at runtime**
- Avoids deep inheritance hierarchies
- Promotes **composition over inheritance**
- Supports multiple, reusable decorators
- Improves flexibility and scalability

---

## 🌍 Real-World Examples
- ☕ **Coffee Shop Systems** – Add milk, sugar, whipped cream dynamically
- 🎬 **Streaming Platforms** – Subtitles, audio enhancements, resolutions
- 📝 **Text Editors** – Bold, italic, underline formatting
- 📂 **Java I/O Library** – `BufferedInputStream`, `DataInputStream`

---

## 🧩 Components of Decorator Pattern

### 1️⃣ Component
Defines the common interface for both concrete objects and decorators.

### 2️⃣ Concrete Component
Implements the base behavior.

### 3️⃣ Decorator
Abstract class that wraps a component and delegates operations to it.

### 4️⃣ Concrete Decorators
Add specific behavior to the component.

![DecoratorPattern](Decoratorpatternclassdiagram.jpg)
---

## ☕ Example Use Case – Coffee Shop

### Problem Statement
Customers can order coffee with optional add-ons:
- Milk
- Sugar
- Whipped Cream

We want to **add these features dynamically** without changing existing coffee classes.

---

## 💡 Solution Using Decorator Pattern
- Coffee → Concrete Component  
- Add-ons → Decorators  
- Each decorator wraps a coffee object  
- Multiple decorators can be stacked dynamically  

---

## 🔄 How It Works
1. Client creates a base object
2. Wraps it with one or more decorators
3. Each decorator adds behavior
4. Final object behaves as a single combined unit

---

## ✅ Advantages
- Extends behavior without modifying existing code
- Flexible and reusable components
- Simplifies client interaction
- Supports runtime composition

---

## ❌ Disadvantages
- Increased number of classes
- Debugging may be harder
- Order of decorators matters

---

## 🕒 When to Use
- When object behavior must change dynamically
- When subclassing leads to class explosion
- When multiple combinations of behavior are required

---

## 🚫 When Not to Use
- For simple, static behavior
- Performance-critical applications
- When design simplicity is a priority

---

## 📌 Summary
The **Decorator Design Pattern** provides a clean and powerful way to extend object behavior dynamically. It is widely used in real-world systems requiring customization, flexibility, and scalability.

---
