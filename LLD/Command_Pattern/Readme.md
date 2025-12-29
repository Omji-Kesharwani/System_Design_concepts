# 🎮 Command Design Pattern

## 📌 What is the Command Design Pattern?
The **Command Design Pattern** is a **behavioral design pattern** that encapsulates a request as an object.  
It decouples the **sender (Invoker)** from the **receiver**, allowing requests to be **queued, logged, parameterized, undone, or redone**.

Each request is wrapped inside a command object, enabling flexible and extensible execution of operations.

---

## 🎯 Purpose
- Decouple the object that invokes an operation from the object that performs it
- Enable undo/redo functionality
- Support command queues, logs, and macro commands
- Allow dynamic command execution at runtime

---

## 🌍 Real-Life Software Examples

### 🖱 GUI Applications
- Buttons like **Copy, Paste, Save, Undo**
- Each button triggers a command without knowing its implementation

### 📬 Job Queues
- AWS SQS, RabbitMQ
- Each job/task is a command object executed later or on another system

### 🗄 Database Transactions
- Hibernate, JPA, SQL Transaction Managers
- INSERT, UPDATE, DELETE are commands
- Rollback supported using stored command history

### 📺 Remote Control (Classic Example)
- Each button represents a command
- Remote doesn’t know what device it controls

---

## 🧩 Components of Command Design Pattern

### 1. Command Interface
- Declares a common method such as `execute()`
- All commands implement this interface

### 2. Concrete Command
- Implements the Command interface
- Encapsulates the action and receiver

### 3. Receiver
- Performs the actual business logic
- Knows how to execute the operation

### 4. Invoker
- Triggers the command
- Does not know how the command works internally

### 5. Client
- Creates and configures command objects
- Assigns commands to invokers

---

## 🔄 How Command Pattern Works

1. Client creates a **Concrete Command** and assigns a **Receiver**
2. Client sets the command to an **Invoker**
3. Invoker calls `execute()` on the command
4. Command forwards the request to the **Receiver**
5. Receiver performs the actual action

![CommandPattern](CommandPatternExampledrawio-(3).png)
---

## ✅ When to Use Command Pattern
- When sender and receiver should be loosely coupled
- When undo/redo functionality is required
- When requests need to be queued or logged
- When commands must be executed dynamically
- When macro commands (multiple commands together) are needed

---

## 🚫 When Not to Use
- For very simple or one-time operations
- When performance is extremely critical
- When undo/redo is unnecessary
- When direct method calls are sufficient

---

## 👍 Advantages (Pros)
- Strong decoupling between sender and receiver
- Easy to add new commands without modifying existing code
- Supports undo/redo operations
- Enables command queuing and logging
- Follows Open/Closed Principle

---

## 👎 Disadvantages (Cons)
- Increases number of classes
- Adds complexity to the codebase
- Slight performance overhead
- Can be overkill for simple systems

---

## 🛠 Steps to Implement Command Design Pattern

1. Create a **Command interface** with `execute()` method
2. Implement **Concrete Command classes**
3. Create a **Receiver** class with actual logic
4. Create an **Invoker** to trigger commands
5. Client assembles and connects everything

---

## 📌 Summary
> The **Command Design Pattern** turns requests into objects, enabling flexible execution, undo/redo support, and loose coupling between components.

---

