# 🧩 Components of System Design

System Design consists of multiple building blocks that work together to create **scalable, reliable, and high-performance systems**.  
Each component solves a specific problem in distributed and large-scale systems.

![System Design Components](componentsofasystem21.png)

---

## 1️⃣ Load Balancer

A **Load Balancer** distributes incoming traffic across multiple servers to ensure:
- No single server is overloaded
- High availability
- Better performance and fault tolerance

### Types of Load Balancers
- **Layer 4 Load Balancer**
  - Works at Transport Layer (TCP / UDP)
  - Routes based on IP address and ports
- **Layer 7 Load Balancer**
  - Works at Application Layer (HTTP/HTTPS)
  - Routes based on URL, headers, request type
- **Global Load Balancer**
  - Distributes traffic across regions
- **Application Load Balancer**
  - Optimized for specific protocols (HTTP/HTTPS)

---

## 2️⃣ Caching

Caching stores **frequently accessed data** in fast storage (memory) to reduce latency.

### Why Caching?
- ⚡ Faster data access
- 📉 Reduced database load
- 😊 Improved user experience

### Common Cache Types
- In-memory cache (Redis, Memcached)
- Browser cache
- CDN cache
- Database query cache

---

## 3️⃣ Content Delivery Network (CDN)

A **CDN** is a network of geographically distributed servers that deliver static content quickly.

### How CDN Works
- User request → Nearest CDN server
- Cached content is served instead of origin server
- Reduces latency and bandwidth usage

### Used For
- Images
- Videos
- CSS / JS files
- Static web pages

---

## 4️⃣ API Gateway

An **API Gateway** acts as a **single entry point** for clients accessing multiple backend services.

### Responsibilities
- Request routing
- Authentication & authorization
- Rate limiting
- Logging & monitoring
- Load management

### Benefits
- Simplifies client communication
- Hides internal microservice complexity
- Improves security

---

## 5️⃣ Key-Value Stores

A **Key-Value Store** is a NoSQL database that stores data as `{ key → value }`.

### Characteristics
- Extremely fast lookups
- Highly scalable
- Simple data model

### Types
- **In-memory** (Redis)
- **Persistent** (DynamoDB, Riak)

### Use Cases
- Session storage
- Caching
- Feature flags
- Counters

---

## 6️⃣ Blob Storage & Databases

### 🗂️ Blob Storage
Stores **unstructured data**:
- Images
- Videos
- Audio
- Documents

✔ Highly scalable  
✔ Handles massive files  
✔ Examples: AWS S3, Azure Blob Storage  

### 🗄️ Databases
Stores **structured data**:
- User records
- Transactions
- Orders

Types:
- Relational (MySQL, PostgreSQL)
- NoSQL (MongoDB, Cassandra)
- In-memory (Redis)

---

## 7️⃣ Rate Limiters

Rate limiters **control request flow** to prevent abuse and system overload.

### Types
- **Request-based**
- **User-based**
- **Token Bucket**
- **Leaky Bucket**

### Benefits
- Prevents DDoS attacks
- Ensures fair usage
- Protects backend services

---

## 8️⃣ Monitoring System

Monitoring systems **observe system health and performance**.

### What They Monitor
- CPU, memory, disk
- Network traffic
- Application response times
- Errors and failures

### Types
- Network monitoring
- System monitoring
- Application monitoring

### Tools
- Prometheus
- Grafana
- Datadog
- CloudWatch

---

## 9️⃣ Distributed Messaging Queue

Messaging queues enable **asynchronous communication** between services.

### Types
- **Point-to-Point**
- **Publish-Subscribe**
- **Hybrid**

### Benefits
- Loose coupling
- Improved scalability
- Better fault tolerance

### Examples
- Kafka
- RabbitMQ
- AWS SQS

---

## 🔟 Distributed Unique ID Generator

Used to generate **globally unique IDs** in distributed systems.

### Approaches
- Centralized ID service
- Distributed consensus
- Timestamp-based (Snowflake IDs)

### Use Cases
- Database primary keys
- Order IDs
- User IDs

---

## 1️⃣1️⃣ Distributed Search

Distributed search enables **fast searching over massive datasets**.

### Approaches
- Distributed search engines (Elasticsearch)
- Databases with indexing
- Cloud search services

### Benefits
- Horizontal scalability
- Parallel query execution
- Fault tolerance

---

## 1️⃣2️⃣ Distributed Logging Services

Collects logs from **multiple services and servers**.

### Why Distributed Logging?
- Debugging
- Monitoring
- Auditing
- Performance analysis

### Approaches
- Centralized log server
- Distributed log aggregation
- Cloud logging platforms

---

## 1️⃣3️⃣ Distributed Task Scheduler

Schedules and executes tasks across distributed systems.

### Types
- Standalone scheduler
- Built-in schedulers
- Cloud-based schedulers

### Use Cases
- Cron jobs
- Background processing
- Event-driven tasks

---

## ✅ Summary

| Component | Purpose |
|--------|--------|
Load Balancer | Traffic distribution |
Caching | Performance optimization |
CDN | Faster content delivery |
API Gateway | Unified API access |
Databases | Data storage |
Rate Limiter | Traffic control |
Monitoring | System health |
Messaging Queue | Async communication |
ID Generator | Unique identifiers |
Search | Fast data retrieval |
Logging | Debugging & analysis |
Scheduler | Task automation |

---

⭐ **If this helps you, give the repository a star!**
