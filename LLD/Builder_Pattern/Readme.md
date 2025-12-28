# Builder Design Pattern

## 📌 What is the Builder Design Pattern?

The **Builder Design Pattern** is a **Creational Design Pattern** that provides a **step-by-step approach to construct complex objects**.

It separates:
- **How an object is built (construction process)**
- **What the final object looks like (representation)**

Using the same construction steps, we can create **different variations** of an object.

---

## 🎯 Purpose of the Builder Design Pattern

The main purpose of the Builder pattern is to:

- Construct **complex objects** in a controlled and readable way
- Avoid **large constructors** with many parameters (telescoping constructors)
- Allow **different representations** of the same object
- Improve **code readability, flexibility, and maintainability**

---

## 🧩 Components of the Builder Design Pattern

1. **Product**
   - The complex object being built  
   - Example: `Computer`

2. **Builder (Interface / Abstract Class)**
   - Defines the steps to build parts of the product  
   - Example: `setCPU()`, `setRAM()`, `setStorage()`

3. **ConcreteBuilder**
   - Implements the Builder interface  
   - Builds a specific variation of the product  
   - Example: `GamingComputerBuilder`, `OfficeComputerBuilder`

4. **Director (Optional)**
   - Controls the order of building steps  
   - Uses the Builder to construct the object

5. **Client**
   - Uses the Builder (or Director) to get the final product

---

## 🛠 Steps to Implement the Builder Design Pattern

1. **Create the Product Class**
   - Define all attributes of the complex object

2. **Create the Builder Interface / Abstract Class**
   - Declare methods for building each part of the product

3. **Create Concrete Builder Classes**
   - Implement the builder methods for specific configurations

4. **Add a `build()` Method**
   - Returns the final constructed product

5. **(Optional) Create a Director**
   - Manages and enforces the building sequence

6. **Client Uses the Builder**
   - Calls builder methods step by step
   - Retrieves the final object using `build()`

---
![Builder Design Pattern](builder_design.webp)
## 🌍 Real-Life Software Applications

### 1. SQL Query Builders
Used in ORMs like:
- Hibernate
- SQLAlchemy
- Laravel Eloquent  

Example:
```java
query.select()
     .where()
     .orderBy()
     .build();
