# Impovising OLA : An Algorithmic Approach

## Course Information

- **Course Name**: Algorithmic Problem Solving
- **Course Code**: 23ECSE309
- **Name**: Shorya Jain
- **University**: KLE Technological University, Hubballi-31
- **Portfolio Topic/Domain**: OLA ( Cab booking application )

---

## Table of Contents

1. [Introduction](#introduction)
2. [Objectives](#objectives)
3. [Business Use Cases](#business-use-cases)
4. [Learnings and Key Takeaways](#learnings-and-key-takeaways)
5. [References](#references)

---

## Introduction

In the competitive ride-hailing industry, optimizing performance and ensuring safety are crucial. This portfolio explores algorithmic solutions for enhancing the OLA cab booking system, addressing key use cases like ride matching, dynamic pricing, and driver performance monitoring. Each algorithm improves efficiency, resource allocation, and service reliability without relying on machine learning.

## Objectives

1. **Enhance Application Efficiency**

2. **Promote Driver Safety and Performance**

3. **Optimize Resource Allocation**

4. **Improve Customer Satisfaction**

5. **Detect and Prevent Fraud**

This portfolio presents algorithmic solutions to optimize various aspects of the OLA cab booking system, enhancing efficiency, safety, and customer satisfaction.

## Business Use Cases

### 1. Ride Matching

**Use Case : Matching a customer with the nearest available driver.**

Expected Results: Reduced wait time for customers.

Algorithm: Dijkstra's algorithm.

Complexity: Time: O(V^2) with adjacency matrix, Space: O(V^2).

![1](https://github.com/ShoryaJain-07/APS/assets/101664374/5d8a3280-b94b-4408-856c-4960cab744c6)

Approach:

Use Dijkstra's algorithm to find the shortest path between the customer's location and all available drivers.

Choose the driver with the minimum path distance.

This reduces the wait time by ensuring that the closest driver is always chosen.

For the ride matching use weighted sum model, weights can be assigned to the three factors as follows:

Distance of Driver from Customer: Weight = 0.5

Driver Rating: Weight = 0.3

Idle Time of Driver: Weight = 0.2

These weights can be adjusted based on the priorities and requirements of the service. The weighted sum can then be calculated as:

Score=(0.5×Distance)+(0.3×Rating)+(0.2×Idle Time)

The driver with the highest score can be assigned to the customer.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/dijkstra.cpp">Dijkstra</a>
</div>

### 2. Dynamic Pricing

**Use Case: Adjusting fare prices based on demand and supply.**

Expected Results: Balanced demand and supply, increased revenue.

Algorithm: Binary Search.

Complexity: Time: O(log N), Space: O(1).

![2](https://github.com/ShoryaJain-07/APS/assets/101664374/cf44372c-9971-4b59-ab5b-837ee5b62348)

Approach:

Use binary search to find the optimal price point in a sorted list of fare prices that balances supply and demand.

Adjust prices dynamically to maintain equilibrium.

weighted sum model for finding multiple prices for different demand supply values.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/binary_search.cpp">Binary Search</a>
</div>

### 3. Route Optimization

**Use Case: Optimizing routes for multiple pickups and drop-offs.**

Expected Results: Reduced travel time and fuel consumption.

Algorithm: Traveling Salesman Problem (TSP) using Dynamic Programming.

Complexity: Time: O(N^2 _ 2^N), Space: O(N _ 2^N).

![3](https://github.com/ShoryaJain-07/APS/assets/101664374/97efc327-2d41-49b4-a896-904b6cfa6536)

Approach:

Apply dynamic programming to solve TSP for multiple pickups and drop-offs.

Optimize the sequence of stops to minimize total travel distance.
This way ride cancellation will also have less negative effect.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/tsp.cpp">Traveling salesman</a>
</div>

### 4. Ride Pooling

**Use Case: Combining rides for passengers going in the same direction.**

Expected Results: Cost savings for passengers, better vehicle utilization.

Algorithm: Clustering (e.g., K-Means Clustering) combined with TSP.

Complexity: K-Means Clustering: Time: O(N _ K _ I), Space: O(N _ K); TSP using Dynamic Programming: Time: O(N^2 _ 2^N), Space: O(N \* 2^N).

![4](https://github.com/ShoryaJain-07/APS/assets/101664374/bd0da119-669c-47b0-8718-a1867761acdf)

Approach:

Clustering:

Use K-Means Clustering to group passengers with similar pickup and drop-off locations. This helps in forming clusters of passengers who are geographically close to each other.

Route Optimization:

For each cluster, apply the TSP algorithm to determine the optimal route that minimizes the total travel distance.

Solve the TSP for each cluster to find the best sequence of pickups and drop-offs.

Cab Assignment:

Calculate the capacity of each cab and the total number of passengers in each cluster.

Assign the minimum number of cabs required for each cluster based on cab capacity and the optimized route from the TSP solution.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/tsp.cpp">traveling salesman</a>
</div>

### 5. ETA Calculation

**Use Case: Estimating time of arrival for rides.**

Expected Results: Accurate ETA predictions, improved customer satisfaction.

Algorithm: A\* Search Algorithm.

Complexity: Time: O(E), Space: O(V).

Approach:

Use A\* search to calculate the shortest path and provide accurate ETA.
Incorporate real-time traffic data to improve predictions.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/a_star.cpp">A-star</a>
</div>

### 6. Peak Hour Demand Prediction

**Use Case: Predicting demand during peak hours.**

Expected Results: Better resource allocation.

Algorithm: Moving Average

Complexity: Time: O(N), Space: O(1).

Approach:

Use the moving average to smooth out short-term fluctuations and highlight long-term trends in demand data.

Predict peak hour demand and allocate resources accordingly.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/moving_average.cpp">Moving average</a>
</div>

### 7. Driver Allocation

**Use Case: Allocating drivers to high-demand areas.**

Expected Results: Reduced wait times, increased ride acceptance rates.

Algorithm: Max Flow Algorithm(Ford-Fulkerson)

Complexity: Time: O(VE^2), Space: O(VE).

![7](https://github.com/ShoryaJain-07/APS/assets/101664374/11918cee-da17-462d-91ca-7a9f6f7e6c0b)

Approach:

Use the Max Flow algorithm to find the optimal allocation of drivers to high-demand areas.

Ensure that drivers are efficiently distributed to match demand patterns.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/ford_fulkerson.cpp">Ford Fulkerson</a>
</div>

### 8. Real-Time Navigation

**Use Case: Providing real-time navigation updates to drivers.**

Expected Results: Reduced travel time, improved accuracy.

Algorithm: Dijkstra’s Algorithm with real-time updates(A\*)

Complexity: Time: O(E), Space: O(V).

![8](https://github.com/ShoryaJain-07/APS/assets/101664374/abf015af-1caa-4e6a-92c6-1e5a49317903)

Approach:

Implement Dijkstra's algorithm with real-time updates to account for traffic conditions.

Provide continuous navigation updates to drivers to avoid delays.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/dijkstra.cpp">Dijkstra</a>
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/a_star.cpp">A-star</a>
</div>

### 9. Fraud Detection

**Use Case: Detecting fraudulent activities in ride bookings.**

Expected Results: Reduced financial losses, increased security.

Algorithm: Hashing.

Complexity: Time: O(1), Space: O(N).

Approach:

Graph Representation:

Represent each transaction as a node in the graph.

Connect nodes with edges that represent relationships or similarities between transactions (e.g., same user, similar amount, close timestamps).

Weight Assignment:

Assign weights to edges based on the strength of the relationship or similarity (e.g., higher weight for same user, lower for similar amount).

Pattern Detection:

Use algorithms like PageRank or Community Detection (e.g., Louvain method) to identify clusters of highly connected nodes (high-weight edges).

Transactions in these clusters with unusual connections or patterns can be flagged as potentially fraudulent.

Anomaly Detection:

Look for nodes with high connectivity and abnormal edge weights, indicating unusual or suspicious patterns.

Evaluate the flagged clusters for fraud verification.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/hashing.cpp">Hashing</a>
</div>

### 10. Surge Pricing

**Use Case: Implementing surge pricing during high demand.**

Expected Results: Better driver availability, balanced demand.

Algorithm: Greedy Algorithm(Huffman)

Complexity: Time: O(N log N), Space: O(1).

Approach:

Implement a greedy algorithm to adjust prices based on current demand.

Increase prices during high demand to incentivize more drivers to become available.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/huffman.cpp">Huffman</a>
</div>

### 11. Geofencing

**Use Case: Creating virtual boundaries for service areas.**

Expected Results: Efficient service management, reduced operational costs.

Algorithm: Point-in-Polygon Algorithm(like ray casting)

Complexity: Time: O(N), Space: O(1).

![11](https://github.com/ShoryaJain-07/APS/assets/101664374/1981db74-c50b-49d6-980f-4c96b8b7ebb7)

Approach:

Use the Point-in-Polygon algorithm to determine if a location is within a geofenced area.

Manage service areas efficiently to reduce costs and improve service delivery.

Assign some drivers in case of near boundary users to overcome the limitations.

<div class="codes">Codes
    <a href="https://github.com/david-salac/polygon-pip">Ray Casting</a>
</div>

### 12. Multi-Lingual Support

**Use Case: Supporting multiple languages for customers and drivers.**

Expected Results: Enhanced user experience, increased adoption.

Algorithm: Trie.

Complexity: Time: O(N), Space: O(N).

Approach:

Use a Trie data structure to manage translations and provide quick lookups.

Ensure that language preferences are stored efficiently and accessed quickly.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/trie.cpp">Trie</a>
</div>

### 13. Payment Gateway Optimization

**Use Case: Optimizing payment processing for rides.**

Expected Results: Faster transactions, reduced payment failures.

Algorithm: Binary Heap.

Complexity: Time: O(log N), Space: O(N).

Approach:

Use a binary heap to manage and process payment transactions efficiently.

Prioritize transactions to reduce wait times and failures.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/binary_heap.cpp">Binary Heap</a>
</div>

### 14. Driver Incentive Calculation

**Use Case: Calculating incentives for drivers based on performance.**

Expected Results: Increased driver satisfaction and retention.

Algorithm: Dynamic Programming (0/1 knapsack)

Complexity: Time: O(N^2), Space: O(N).

Approach:

Use dynamic programming to calculate optimal incentives based on multiple performance factors.

Ensure that incentives are fair and motivate drivers to perform better.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/knapsack.cpp">knapsack</a>
</div>

### 15. Driver Performance Tracking

**Use Case: Driver Performance Tracking.**

Expected Results: Increased safety, improved customer satisfaction, better driver performance.

Algorithm: Segment Tree for performance tracking and scoring.

Complexity: Time: O(log N) per update/query, Space: O(N).

Approach:

Data Collection:

Collect data on traffic rule compliance, customer ratings, trip punctuality, and other performance metrics.

Segment Tree Construction:

Construct a segment tree where each node stores aggregated performance metrics for a range of drivers.

Performance Evaluation:

Use the segment tree to efficiently update and query performance scores.
Combine metrics using a weighted sum (e.g., 0.4 for traffic compliance, 0.3 for customer ratings, 0.2 for punctuality, 0.1 for other factors).

Scoring and Ranking:

Calculate a composite score for each driver using the segment tree.
Rank drivers based on their composite scores to identify top performers and those needing improvement.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/segment_tree.cpp">Segment Tree</a>
</div>

### 16. Customer Loyalty Program

**Use Case: Implementing a loyalty program for frequent customers.**

Expected Results: Increased customer retention and loyalty.

Algorithm: Fenwick Tree (Binary Indexed Tree).

Complexity: Time: O(log N), Space: O(N).

Approach:
Use a Fenwick Tree to manage and update loyalty points efficiently.
Reward frequent customers to increase retention and loyalty.

<div class="codes">Codes
    <a href="https://github.com/ShoryaJain-07/APS/blob/main/codes/fenwick_tree.cpp">Fenwick Tree</a>
</div>

---

## Learnings and Key Takeaways

Through this portfolio, the key learning and takeaways include understanding how algorithms can significantly enhance ride-hailing services' performance and efficiency. For instance, Google Maps uses the A\* algorithm to provide the shortest and fastest routes by considering real-time traffic data, demonstrating how pathfinding algorithms optimize navigation. Similarly, the use of Dijkstra's algorithm for ride matching, Exponential Smoothing for dynamic pricing, and Segment Trees for driver performance tracking showcases the power of data structures and algorithms in solving real-world problems. By applying these optimized solutions, ride-hailing applications can achieve improved resource allocation, better customer satisfaction, and heightened driver safety and performance.

---

## References

- [1] Yan, Yumeng. (2023). Research on the A Star Algorithm for Finding Shortest Path. Highlights in Science, Engineering and Technology. 46. 154-161. 10.54097/hset.v46i.7697.

- [2] Neto, Euclides & Callou, Gustavo. (2015). An Approach Based on Ford-Fulkerson Algorithm to Optimize Network Bandwidth Usage. 76-79. 10.1109/SBESC.2015.21.

- [3] N. Dhawale, "Implementation of Huffman algorithm and study for optimization," 2014 International Conference on Advances in Communication and Computing Technologies (ICACACT 2014), Mumbai, India, 2014, pp. 1-6, doi: 10.1109/EIC.2015.7230711.

-[4] B. Cao, Z. Yang, L. Yu and Y. Zhang, "Research on the star algorithm for safe path planning," 2023 IEEE International Conference on Control, Electronics and Computer Technology (ICCECT), Jilin, China, 2023, pp. 105-109, doi: 10.1109/ICCECT57938.2023.10141167.
