# 🧠 Memento Design Pattern

## 📌 Introduction
The **Memento Design Pattern** is a **behavioral design pattern** that allows an object to save and restore its internal state without exposing its internal details.  
It works like a **snapshot mechanism**, enabling features such as **undo, redo, and rollback** while preserving encapsulation.

---

## ❓ Problem Statement
When an object changes its state frequently, reverting it to a previous state can violate encapsulation or lead to complex logic.  
The Memento pattern solves this by storing snapshots of an object’s state externally and restoring them when required.

---

## 🧩 Components of Memento Design Pattern

### 1. Originator
- Creates and maintains the object state
- Generates a Memento to save its current state
- Restores its state from a Memento

### 2. Memento
- Stores the internal state of the Originator
- Does not expose state modification methods
- Ensures data safety and encapsulation

### 3. Caretaker
- Manages and stores Memento objects
- Does not access or modify stored state
- Provides Mementos back to the Originator when needed

### 4. Client
- Initiates save and restore operations
- Interacts with both Originator and Caretaker
![Communication](Communication-between-components-(1).webp)
---

## 🔄 How It Works
1. Client requests the Originator to save its state
2. Originator creates a Memento and passes it to the Caretaker
3. Caretaker stores the Memento
4. When undo is required, the Caretaker returns the Memento
5. Originator restores its previous state

![MementoPattern](memento_pattern.webp)
![DocumentMementoPattern](Document_memento_Pattern.webp)
---

## 🕒 When to Use Memento Pattern
- Implementing **Undo / Redo** functionality
- Creating **checkpoints or snapshots**
- Handling **transaction rollback**
- Version control systems
- Game save systems

---

## 🚫 When Not to Use
- Object state is very large or memory-intensive
- State changes occur too frequently
- Objects are immutable
- Performance is critical

---

## ✅ Advantages
- Preserves encapsulation
- Clean rollback mechanism
- Simplifies undo/redo logic
- Improves system reliability

---

## ❌ Disadvantages
- Increased memory usage
- Additional complexity
- Performance overhead for large states

---

## 🌍 Real-World Examples
- Text editors (Undo / Redo)
- Games (Save checkpoints)
- Database transactions
- Versioning systems

---

## 📌 Summary
> The **Memento Design Pattern** allows capturing and restoring an object’s state without violating encapsulation, making it ideal for undo and rollback functionality.

---

