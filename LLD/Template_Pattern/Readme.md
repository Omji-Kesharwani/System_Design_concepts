# 🧩 Template Method Design Pattern

## 📌 Overview
The **Template Method Design Pattern** is a **behavioral design pattern** that defines the **skeleton of an algorithm** in a base (abstract) class while allowing subclasses to **override specific steps** without changing the overall structure.

Think of it like a **recipe** 🍵:
- The main steps are fixed
- Some steps can be customized

---

## 🎯 Intent
- Define a fixed algorithm structure
- Allow subclasses to customize certain steps
- Promote code reuse and consistency

---

## 🧠 Core Components

### 1️⃣ Abstract Class / Interface
- Defines the **template method**
- Contains both implemented and abstract (or hook) methods

### 2️⃣ Template Method
- Defines the algorithm skeleton
- Calls steps in a specific order
- Often marked `final` to prevent modification

### 3️⃣ Abstract / Hook Methods
- Placeholder methods
- Subclasses override them to provide specific behavior

### 4️⃣ Concrete Subclasses
- Implement the abstract steps
- Customize specific parts of the algorithm

![TemplatePattern](TemplateMethodComponent-(1).webp)
---

## ⚙️ How to Implement Template Method Pattern

### Step 1: Create an Abstract Class
Define the overall structure of the algorithm.

### Step 2: Define the Template Method
Create a method that calls all algorithm steps in order.

### Step 3: Implement Core Steps
- Some steps have default implementations
- Others are abstract or optional hooks

### Step 4: Create Subclasses
Override only the steps that require customization.

### Step 5: Use the Template Method
Calling the template method runs the full algorithm with subclass-specific behavior.

---

## 🌍 Use Cases

### ✅ Common Algorithm with Variations
When multiple processes share the same structure but differ in details.

### ✅ Code Reusability
Centralizes shared logic in one place.

### ✅ Enforcing Structure
Ensures steps are executed in a defined order.

### ✅ Reducing Duplication
Avoids repeating common logic across classes.

---

## 🚫 When NOT to Use

❌ Algorithms with very different structures  
❌ When steps are tightly coupled  
❌ When frequent runtime changes are required  
❌ When abstraction adds unnecessary complexity  

---

## ⭐ Benefits
- Encourages clean and maintainable code
- Improves consistency across implementations
- Reduces duplication
- Promotes reuse through inheritance

---

## ☕ Example Scenario: Beverage Preparation

### Common Steps:
1. Boil water
2. Brew beverage
3. Pour into cup
4. Add ingredients

### Custom Steps:
- Tea adds lemon
- Coffee adds milk and sugar

The **Template Method** defines the preparation process, while subclasses customize ingredient steps.

---

## 📚 Design Pattern Type
**Behavioral Design Pattern**

---

## 🏁 Conclusion
The Template Method Design Pattern is ideal when you want to **fix the overall flow of an algorithm** while allowing **controlled customization** of individual steps. It strikes a balance between flexibility and structure.

---
