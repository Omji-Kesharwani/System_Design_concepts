# Visitor Design Pattern

## 1. What is the Visitor Design Pattern?

The **Visitor Design Pattern** is a **behavioral design pattern** that allows you to add new operations to a group of related classes **without modifying their existing structure**.

It is especially useful when:
- The set of classes is **stable**
- The operations performed on them **change frequently**

The pattern achieves this by separating the operation logic into a **visitor object**, which visits different elements and performs specific actions.

---

## 2. Purpose

- Add new functionality **without changing existing classes**
- Follow the **Open/Closed Principle**
- Separate **business logic** from object structure
- Avoid complex conditional logic (`if-else`, `switch`)

---

## 3. Real-World Example

### Online Shopping Cart

Consider an online shopping cart containing:
- Books
- Electronics
- Clothing

Each item can accept a **visitor** that:
- Calculates total price
- Applies discounts
- Computes tax

Instead of modifying each item class for every new operation, you simply add a new visitor.  
This makes the system **easy to extend and maintain**.

---

## 4. Components of Visitor Design Pattern

### 1. Visitor Interface
- Declares a `visit()` method for each concrete element
- Defines the operations that can be performed

### 2. Concrete Visitor
- Implements the Visitor interface
- Contains the actual logic for each operation

### 3. Element Interface
- Declares an `accept(visitor)` method
- Allows a visitor to access the element

### 4. Concrete Elements
- Implement the Element interface
- Call the appropriate visitor method inside `accept()`

### 5. Object Structure
- A collection of elements
- Allows visitors to iterate and operate on elements

---
![VisitorDesignPattern](Visitor-Design-Pattern-Diagram.png)

## 5. Steps to Implement Visitor Design Pattern

### Step 1:
Create an **Element interface** with an `accept()` method.

### Step 2:
Implement **Concrete Element classes** that define how they accept a visitor.

### Step 3:
Create a **Visitor interface** declaring `visit()` methods for each element type.

### Step 4:
Implement **Concrete Visitors** that define specific operations.

### Step 5:
The element calls the visitor’s `visit()` method, enabling the visitor to operate on it.

---

## 6. Pros of Visitor Design Pattern

- **Separation of Concerns**: Logic is separated from object structure
- **Easy to Add New Operations**: Just add a new visitor
- **Centralized Logic**: All operations are in visitor classes
- **Improved Maintainability**: Changes affect fewer classes
- **Type Safety**: Each visit method targets a specific object

---

## 7. Cons of Visitor Design Pattern

- **Added Complexity**: Introduces more classes and interfaces
- **Hard to Add New Elements**: Requires changes in all visitors
- **Tight Coupling**: Visitor must know all concrete element types
- **Not Suitable for Frequent Structural Changes**

---

## 8. When to Use Visitor Pattern

✅ Use when:
- Object structure is stable
- Operations change frequently

❌ Avoid when:
- New object types are added often
- System simplicity is a priority

---

## 9. Conclusion

The Visitor Design Pattern is a powerful tool for extending behavior **without modifying existing code**.  
It is widely used in **compilers, graphics systems, game engines, and enterprise applications** where flexibility and clean design are critical.
