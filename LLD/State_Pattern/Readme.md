# State Design Pattern (C++)

## What
The **State Design Pattern** is a **behavioral design pattern** that allows an object to change its behavior when its internal state changes.

Instead of using large `if-else` or `switch` statements, the pattern encapsulates state-specific behavior into separate state classes.

---

## Purpose
- Allow an object to change behavior dynamically
- Eliminate complex conditional logic
- Encapsulate state-specific behavior
- Make state transitions explicit and manageable

---

## Problem Statement
Consider a **Media Player** that has multiple states:
- Playing
- Paused
- Stopped

The behavior of buttons (play, pause, stop) depends on the current state.  
Using conditional logic makes the code complex and hard to maintain.

---

## Solution (State Pattern)
The State Pattern:
- Represents each state as a separate class
- Delegates behavior to the current state object
- Allows state transitions at runtime

---

## Components of State Design Pattern

### 1. Context
- Maintains a reference to the current state
- Delegates requests to the state object
- Allows state changes

### 2. State Interface
- Declares common operations for all states

### 3. Concrete States
- Implement behavior specific to a state
- Handle state transitions

---

## Steps to Implement
1. Create a `State` interface
2. Create concrete state classes
3. Create a `Context` class
4. Delegate actions from context to state
5. Switch states dynamically at runtime

---
(state_pattern.webp)

## Real-Life Software Examples
- Media Player (Play / Pause / Stop)
- Document Editors (Draft / Review / Published)
- Vending Machines
- Network Connections (Connected / Disconnected)

---

## Advantages
- Clean and readable code
- Easy to add new states
- Follows **Single Responsibility Principle**
- Improves maintainability

---

## When to Use
- Object behavior changes based on state
- Many states with different behaviors
- Conditional logic is growing complex
- Frequent state transitions

---

## When Not to Use
- Few states with simple behavior
- Performance-critical systems
- State logic is unlikely to grow


