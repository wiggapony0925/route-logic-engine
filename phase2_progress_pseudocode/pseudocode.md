# Phase 2 — Pseudocode

## Bus Route Manager — Step-by-Step Pseudocode

<!-- Write your pseudocode below. No C++ code — plain English steps only. -->

### File Reading

```
START
  Open routes_input.txt
  IF file cannot be opened
    Display error message
    STOP
  END IF
  WHILE there is data to read
    Read one route record (route number, name, time, distance)
    Store record in array
    Store record in vector
  END WHILE
  Close input file
END
```

---

### Sorting (Bubble Sort OR Selection Sort)

```
<!-- Write your sorting pseudocode here -->
```

---

### Searching (Linear Search)

```
<!-- Write your linear search pseudocode here -->
```

---

### Output Writing

```
<!-- Write the steps for writing results to routes_output.txt -->
```

---

### Full Program Flow (Summary)

```
START
  Open input file
  Read data into array and vector
  Sort data (by time)
  Search for user-requested route
  Write results to output file
  Close files
END
```
