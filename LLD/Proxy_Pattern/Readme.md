# Proxy Design Pattern

## What is the Proxy Design Pattern?

The **Proxy Design Pattern** is a **structural design pattern** in which a **proxy object** acts as an intermediary or placeholder for a **real object**.  
The client interacts with the proxy instead of directly accessing the real object.

The proxy controls access to the real object and can add extra behavior such as:
- Lazy loading
- Access control
- Logging
- Caching
- Remote communication

---

## Purpose of the Proxy Design Pattern

The Proxy Design Pattern is used to:

- Control access to an object
- Improve performance using lazy initialization
- Add security checks before accessing sensitive resources
- Reduce the cost of expensive operations
- Provide a local representation of a remote object
- Add cross-cutting concerns without modifying the real object

This pattern follows the **Open-Closed Principle**, allowing new behavior without changing existing code.

---

## Key Components

### 1. Subject
- An interface or abstract class
- Declares the common operations for both **RealSubject** and **Proxy**

### 2. RealSubject
- The actual object that performs the real work
- Implements the Subject interface

### 3. Proxy
- Implements the same interface as RealSubject
- Holds a reference to the RealSubject
- Controls access and adds extra behavior

### 4. Client
- Uses the Proxy instead of directly using the RealSubject
- Remains unaware of whether it is interacting with a proxy or the real object

![ProxyPattern](proxypatternclassdiagram.webp)
---

## Steps to Implement Proxy Design Pattern

1. **Create the Subject Interface**
   - Define common methods that both Proxy and RealSubject will implement

2. **Create the RealSubject Class**
   - Implement the actual business logic

3. **Create the Proxy Class**
   - Implement the same interface
   - Maintain a reference to RealSubject
   - Add additional behavior (logging, security, caching, lazy loading)

4. **Use the Proxy in Client Code**
   - Client interacts with the proxy instead of the real object

---

## Types of Proxy

- **Virtual Proxy** – Lazy loading of expensive objects
- **Remote Proxy** – Represents objects located remotely
- **Protection Proxy** – Controls access based on permissions
- **Caching Proxy** – Caches results of expensive operations
- **Logging Proxy** – Logs method calls

---

## Real-Life Examples

### 1. Image Loading (Virtual Proxy)
- A placeholder image is shown
- Actual image is loaded only when required

### 2. Web Browsers
- Proxy servers cache web pages to reduce load time

### 3. Security Systems
- Access to files or APIs is checked before execution

### 4. Distributed Systems
- Remote proxy communicates with objects on another server

### 5. Database or API Calls
- Results are cached to reduce repeated expensive calls

---

## When to Use Proxy Design Pattern

- When object creation is expensive
- When access control is required
- When working with remote resources
- When adding logging or monitoring
- When lazy loading improves performance

---

## When NOT to Use Proxy Design Pattern

- For simple objects with no heavy operations
- When direct access is sufficient
- When proxy introduces unnecessary complexity
- When performance degrades instead of improving

---

## Advantages

- Improved performance
- Enhanced security
- Separation of concerns
- Better control over object access
- Flexible and scalable design

---

## Disadvantages

- Increased complexity
- Additional layer may affect performance
- Harder debugging due to indirection

---

## Conclusion

The **Proxy Design Pattern** provides a powerful way to control access to objects while adding flexibility, security, and performance optimizations.  
It is widely used in real-world systems such as browsers, distributed applications, security systems, and caching layers.

---

⭐ **Use Proxy when you need control — not just access.**
