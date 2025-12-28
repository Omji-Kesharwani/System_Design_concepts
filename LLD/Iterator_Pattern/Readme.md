# Iterator Design Pattern (C++)

## What
The Iterator Design Pattern is a **behavioral design pattern** that provides a way to access the elements of a collection sequentially **without exposing its internal structure**.

It defines a separate object called an *iterator* that encapsulates the traversal logic of a collection.

---

## Purpose
- To provide a **uniform way to iterate** over different collections
- To **decouple traversal logic** from the collection
- To allow changes in collection structure **without affecting client code**
- To support **multiple independent traversals**

---

## Problem Statement
We want to iterate over a collection of employees to calculate the total salary.
However, the employees may be stored using different data structures (array, vector, list, etc.).

The client code should **not depend** on how employees are stored.

---

## Solution (Iterator Pattern)
The Iterator Pattern introduces:
- An **Iterator interface** for traversal
- A **Concrete Iterator** that implements traversal logic
- An **Aggregate interface** that creates iterators
- A **Concrete Aggregate** that stores the collection

---

## Steps to Implement
1. Create an `Iterator` interface with `hasNext()` and `next()`
2. Create an `Aggregate` interface with `createIterator()`
3. Implement a `ConcreteIterator` for traversal
4. Implement a `ConcreteAggregate` (collection)
5. Client uses only the iterator, not the collection

---

## Real-Life Example
- Iterating over playlists in music apps
- Navigating browser history
- Iterating database query results
- STL iterators in C++ (`vector::iterator`)

---

## Advantages
- Hides internal structure of collection
- Cleaner and simpler client code
- Supports multiple iterators
- Follows **Single Responsibility Principle**

---

## When to Use
- Sequential access is needed
- Multiple traversals are required
- Collection implementation may change
- Client code must remain decoupled

---

## When Not to Use
- Direct random access is required
- Performance is extremely critical
- Collection structure is fixed and simple

