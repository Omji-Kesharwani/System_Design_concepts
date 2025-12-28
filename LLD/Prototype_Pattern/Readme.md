# Prototype Design Pattern (C++)

## What
The **Prototype Design Pattern** is a **creational design pattern** used when object creation is **costly or time-consuming**.

Instead of creating a new object from scratch, the pattern creates new objects by **cloning existing ones (prototypes)**.

---

## Purpose
- Reduce costly object creation
- Improve performance by cloning objects
- Avoid complex initialization logic
- Enable dynamic object creation at runtime

---

## Problem Statement
In applications like **drawing tools**, **games**, or **document editors**, objects can be complex to create.

Example:
A user designs a document with a specific layout, fonts, and styles and wants to create similar documents with minor changes.

Creating every document from scratch is inefficient.

---

## Solution (Prototype Pattern)
The Prototype Pattern:
- Creates a **prototype interface**
- Allows objects to **clone themselves**
- Client requests new objects by copying prototypes

---

## Real-Life Software Examples
- Document templates (Google Docs, MS Word)
- Game engines cloning characters or terrain
- UI component duplication
- Cache-based object creation

---

## Components of Prototype Design Pattern

### 1. Prototype Interface / Abstract Class
- Declares the `clone()` method
- Sets rules for cloning objects

### 2. Concrete Prototype
- Implements cloning logic
- Represents objects that can be copied

### 3. Client
- Uses the prototype to create new objects
- Does not depend on concrete classes

### 4. Clone Method
- Creates a copy of an existing object
- Can be shallow or deep copy

---

## Steps to Implement
1. Create a prototype interface with `clone()`
2. Implement concrete prototype classes
3. Define cloning behavior
4. Client clones existing objects
5. Modify cloned object if required

---

## Advantages
- Faster object creation
- Reduced memory and CPU cost
- Simplifies object management
- Supports runtime object creation

---

## When to Use
- Object creation is expensive
- Many similar objects are required
- Objects need dynamic creation
- Avoid subclass explosion

---

## When Not to Use
- Objects are simple to create
- Deep cloning is very complex
- Memory overhead is a concern

![Prototype Pattern UML Diagram](PrototypeDesignPattern.png)