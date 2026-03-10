# Dijkstra Route Finder (C++)

A command-line application that finds the **shortest route between cities** using **Dijkstra’s Algorithm**.
This project demonstrates the use of **graph data structures, priority queues, and path reconstruction** in C++.

---

## 🚀 Features

* Find the **shortest path between two cities**
* Displays the **minimum distance**
* Shows the **exact route taken**
* Efficient implementation using **priority queue (min heap)**
* Graph represented using **adjacency list**

---

## 🧠 Algorithms & Data Structures Used

* Graph (Adjacency List)
* Dijkstra's Algorithm
* Priority Queue
* Path Reconstruction
* Arrays / STL

---

## 📂 Project Structure

```
dijkstra-route-finder-cpp
│
├── .gitignore
├── README.md
├── sample_input.txt
│
└── src
     └── main.cpp
```

| File               | Description                             |
| ------------------ | --------------------------------------- |
| `src/main.cpp`     | Main implementation of the route finder |
| `sample_input.txt` | Example input for testing               |
| `README.md`        | Project documentation                   |
| `.gitignore`       | Files ignored by Git                    |

---

## ▶️ How to Compile and Run

### Compile

```
g++ src/main.cpp -o routefinder
```

### Run

```
./routefinder
```

---

## 📌 Example Input

```
Enter number of cities: 5
Enter number of roads: 6

Enter roads (city1 city2 distance):

0 1 4
0 2 1
2 1 2
1 3 1
2 3 5
3 4 3

Enter source city: 0
Enter destination city: 4
```

---

## 📌 Example Output

```
Shortest Distance: 7
Route: 0 -> 2 -> 1 -> 3 -> 4
```

---

## 📚 Learning Objectives

This project helps understand:

* Graph representation using adjacency lists
* Implementation of **Dijkstra’s shortest path algorithm**
* Efficient use of **priority queues**
* Practical application of data structures in navigation systems

---

## 👨‍💻 Author

**Mohammed Saqhib Uddin Khan**

GitHub: https://github.com/mosaqhibkhan
LinkedIn: https://www.linkedin.com/in/mohammed-saqhib-uddin-khan-66aa1a354

---

⭐ If you found this project useful, consider giving it a star.

