# Single Responsibility Principle

This principle states that "A class should have only one reason to change" which means every class should have a single responsibility or single job or single purpose. In other words, a class should have only one job or purpose within the software system.

# Real life Example
Let's understand Single Responsibility Principle using an example:

Imagine a baker who is responsible for baking bread. The baker's role is to focus on the task of baking bread, ensuring that the bread is of high quality, properly baked, and meets the bakery's standards.

However, if the baker is also responsible for managing the inventory, ordering supplies, serving customers, and cleaning the bakery, this would violate the SRP.
Each of these tasks represents a separate responsibility, and by combining them, the baker's focus and effectiveness in baking bread could be compromised.
To adhere to the SRP, the bakery could assign different roles to different individuals or teams. For example, there could be a separate person or team responsible for managing the inventory, another for ordering supplies, another for serving customers, and another for cleaning the bakery.

# Explanation

BreadBaker Class: Responsible solely for baking bread. This class focuses on ensuring the quality and standards of the bread without being burdened by other tasks.
InventoryManager Class: Handles inventory management, ensuring that the bakery has the right ingredients and supplies available.
SupplyOrder Class: Manages ordering supplies, ensuring that the bakery is stocked with necessary items.
CustomerService Class: Takes care of serving customers, providing a focused approach to customer interactions.
BakeryCleaner Class: Responsible for cleaning the bakery, ensuring a hygienic environment.