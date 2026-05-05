# Phase 1 - LLM Usage Record

## Questions Asked to AI

| # | Question Asked |
|---|----------------|
| 1 | How should I make realistic raw data for a bus route manager project? |
| 2 | Is using `HH:MM` for departure time good enough, or should I use something like ISO 8601? |
| 3 | How can I keep the time readable for users but still compare routes by minutes in the program? |
| 4 | How can I expand my small route file into more NYC-style sample data without making the values random? |

---

## What You Learned

I mainly used AI to think through the raw data part of the project. I talked about how my route file only had a few rows at first, and I wanted the data to feel more like NYC bus route data instead of random fake routes. I also learned that using a simple `HH:MM` time format is fine for this class project because we can still convert that time into minutes in the background if we need to compare it.

---

## How It Helped Your Thinking

The conversation helped me figure out what kind of data the program should read and why each field matters. It made me think more about route number, route name, departure time, duration, and distance as separate pieces of data. It also helped me decide to keep the output readable for the user while using minutes for sorting and comparing travel times.

---

> **Reminder:** Save and export your full AI conversation as a PDF
> and place it in the `llm_conversation/` folder.
