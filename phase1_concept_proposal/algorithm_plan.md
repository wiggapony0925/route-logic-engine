# Phase 1 - Algorithm Plan

## Sorting Algorithm

### Which algorithm will you use?

We plan to use **Bubble Sort**. It will sort the bus routes from the shortest travel time to the longest travel time.

### How does it work for your data?

Bubble Sort works by comparing two routes next to each other and switching them if they are in the wrong order. For our project, the value being compared is the route time in minutes.

For example, if one route takes 35 minutes and another route takes 20 minutes, the 20 minute route should come first.

---

## Searching Algorithm

### How will searching work?

Searching will use **linear search**. The program will check the routes one at a time until it finds the route number the user is looking for. If the route is found, the program will show that route's information. If it is not found, the program will say that the route was not found.

---

## Program Steps (High-Level)

1. Start the program.
2. Open `routes_input.txt` and read the route data.
3. Store each route record in an array or vector.
4. Sort the routes by travel duration using Bubble Sort.
5. Search for a route number using linear search.
6. Find the shortest and longest route by time.
7. Write the sorted routes and summary information to `routes_output.txt`.
8. End the program.
