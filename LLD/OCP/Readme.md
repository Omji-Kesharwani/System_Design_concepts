# 🔓 Open/Closed Principle (OCP)

> **“Software entities (classes, modules, functions, etc.) should be open for extension, but closed for modification.”**

The **Open/Closed Principle (OCP)** means that **you should be able to add new functionality to a class without changing its existing code**.

👉 **Extend behavior, don’t modify existing code**

---

## 🎯 Purpose
The purpose of the Open/Closed Principle is to:
- Prevent breaking existing functionality
- Make code safer to change and extend
- Reduce bugs caused by modifying old code
- Encourage reusable and flexible design

This principle is very important when working on **large systems and real-world applications**.

---

## 🧠 What
OCP states that:
- Existing code should remain **unchanged**
- New features should be added using **extension**
- Classes should be designed to support future changes

In simple words:
> **Old code should not be touched; new code should handle new requirements**

---

## 🌍 Real-Life Example: Online Payment System 💳

Imagine an **online store** that processes payments.

### Initial Situation
You have a class called `PaymentProcessor` that processes **Credit Card payments only**.

Later, you want to add support for **PayPal payments**.

---

### ❌ Without OCP (Bad Design)
If you modify the existing `PaymentProcessor` class every time you add a new payment method:
- Existing code gets changed
- Risk of introducing bugs increases
- System becomes harder to maintain

This violates the Open/Closed Principle.

---

### ✅ With OCP (Good Design)
Instead of modifying the existing class:
- Keep `PaymentProcessor` unchanged
- Create a new class `PayPalPaymentProcessor`
- Extend the behavior using inheritance or interfaces

This way:
- Existing code is **closed for modification**
- New functionality is **added through extension**

---

## 🧩 Explanation Using Classes

### 💳 1. `PaymentProcessor` Class
- Handles basic payment processing logic
- Supports Credit Card payments
- Does not need to change when new payment methods are added

### 🅿️ 2. `PayPalPaymentProcessor` Class
- Extends `PaymentProcessor`
- Adds PayPal payment functionality
- Uses existing structure without modifying original code

Each new payment method can be added as a **new class**, following OCP.

---

## 📚 Key Learning Outcomes
After understanding OCP, students will learn:
- Why modifying existing code is risky
- How to design systems that are easy to extend
- How real-world systems support new features safely
- The importance of abstraction and extensibility

---

## 🧪 Practice Exercise
- Create a base class for payment processing
- Add new payment methods (UPI, NetBanking, Wallet)
- Do NOT modify the original class
- Explain how your design follows OCP

---

## ✅ Summary
The **Open/Closed Principle** teaches us that:
- Software should be built to **grow safely**
- New features should not break old code
- Good design plans for future changes

Just like an online store adds new payment options without breaking existing ones, **well-designed software grows by extension, not modification**.
