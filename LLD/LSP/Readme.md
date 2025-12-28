# 🔁 Liskov Substitution Principle (LSP)

> **“Derived or child classes must be substitutable for their base or parent classes.”**  
— *Barbara Liskov, 1987*

The **Liskov Substitution Principle (LSP)** states that **objects of a child class should be able to replace objects of the parent class without affecting the correctness of the program**.

If a child class changes the expected behavior of the parent class, it **violates LSP**.

---

## 🎯 Purpose
The purpose of the Liskov Substitution Principle is to:
- Ensure **correct use of inheritance**
- Prevent unexpected behavior in programs
- Improve **reliability and maintainability**
- Make polymorphism safe and predictable

This principle helps avoid **hidden bugs** caused by improper inheritance.

---

## 🧠 What
LSP means that:
- Child classes should **follow the rules** of the parent class
- A child object must behave like a parent object
- Inheritance should not **break existing functionality**

In simple words:
> **If class B extends class A, then B should be usable wherever A is expected**

---

## 🌍 Real-Life Example: Rectangle and Square ▭⬜

A **rectangle** has:
- Four sides
- Width and height can be **different**

A **square** is a special type of rectangle where:
- All four sides are **equal**
- Width and height must always be the same

At first glance, it seems logical to make:
