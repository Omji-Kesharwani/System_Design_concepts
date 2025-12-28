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


---

## ❌ Problem (LSP Violation)

If a `Rectangle` class allows:
- Setting width and height **independently**

But a `Square` class forces:
- Width = Height always

Then replacing a `Rectangle` object with a `Square` object can cause **unexpected behavior**.

Example:
- Code expects width and height to change independently
- Square breaks this expectation

This means **Square cannot safely replace Rectangle**, violating LSP.

---

## ✅ Correct Understanding of LSP

Even though a square *is* a rectangle mathematically:
- It **does not behave like a rectangle in software**
- It restricts behavior that the parent class allows

To follow LSP:
- Avoid incorrect inheritance
- Use **separate classes** or **interfaces**
- Design classes based on **behavior, not just logic**

---

## 🧩 Key Learning Points
- Inheritance should not change expected behavior
- Child classes must honor parent class contracts
- Not every “is-a” relationship fits in OOP
- LSP focuses on **behavioral compatibility**

---

## 🧪 Practice Exercise
- Design a `Shape` interface
- Implement `Rectangle` and `Square` separately
- Ensure both can be used without breaking code
- Identify where LSP could be violated

---

## ✅ Summary
The **Liskov Substitution Principle** teaches us that:
- Inheritance must be used carefully
- Child classes should never surprise the system
- Correct behavior is more important than hierarchy

Just because something *looks* like a subclass doesn’t mean it *should be* one in software design.
