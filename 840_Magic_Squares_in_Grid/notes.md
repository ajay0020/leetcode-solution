# 840. Magic Squares in Grid – Notes

## 🔍 Problem Summary
A 3×3 grid is a magic square if:
- Contains numbers 1 to 9 exactly once
- Every row, column, and diagonal sums to 15

We need to count how many such 3×3 subgrids exist.

---

## 💡 Key Observations
1. The **center must be 5** (property of 3×3 magic squares)
2. All numbers must be **distinct and between 1–9**
3. Total sum of each line must be **15**

---

## 🧠 Algorithm
- Traverse grid ignoring borders
- Fix center of 3×3
- Check:
  - Center = 5
  - Numbers are exactly 1–9
  - All rows, columns, diagonals = 15

---

## ⏱ Time & Space Complexity
- **Time:** O(R × C)
- **Space:** O(1)

---

## ✅ Why This Works
Magic squares have fixed mathematical properties, reducing brute force.
Checking only valid centers optimizes the solution.
