# University Log System

This project implements a simple university log system using the perceptron algorithm. The system evaluates whether a student can be accepted to a particular university based on the student's GPA, GRE score, and TOEFL score. The implementation consists of two primary classes: `Student` and `University`.

## Classes Overview

### 1. Student Class
The `Student` class represents a student with the following attributes:

- **Name**: The student's name (e.g., "Doğukan").
- **GPA**: The student's Grade Point Average (e.g., 2.76).
- **GRE Score**: The student's Graduate Record Examinations score (e.g., 163).
- **TOEFL Score**: The student's Test of English as a Foreign Language score (e.g., 101).
- **Number of Applications**: The number of universities the student has applied to (e.g., 2).

#### Key Features:
- **Initialization**: By default, the `name` is empty, and the `GPA`, `GRE`, `TOEFL`, and `number of applications` are set to zero.
- **System Messages**: Messages are displayed when a student enters or leaves the system.

### 2. University Class
The `University` class represents a university with the following attributes:

- **Name**: The name of the university (e.g., "Istanbul Technical University").
- **Weights**: A list of three values representing the importance of GPA, GRE, and TOEFL scores (e.g., `[3.1, -0.1, 1.0]`).
- **Bias**: A bias value used in the perceptron algorithm (e.g., 1.6).
- **Country**: The country where the university is located (e.g., "Türkiye").

#### Key Features:
- **Initialization**: By default, the `name` and `country` are empty, while the `weights` and `bias` are assigned random values.
- **Evaluate Method**: The university can evaluate a student based on their GPA, GRE score, and TOEFL score using the perceptron algorithm.
- **System Messages**: Messages are displayed when a student is admitted or rejected.

## Perceptron Algorithm

The perceptron algorithm is used to decide whether a student is accepted or rejected by a university. The decision is based on a linear combination of the student's GPA, GRE, and TOEFL scores, weighted by the university's priorities, plus a bias term. The formula used is:

result = w1 * GPA + w2 * GRE + w3 * TOEFL + bias


Where:
- `w1`, `w2`, `w3` are the weights for GPA, GRE, and TOEFL, respectively.
- `GPA`, `GRE`, `TOEFL` are the student's scores.
- `bias` is the university's bias value.

If `result` is greater than or equal to a certain threshold, the student is accepted; otherwise, they are rejected.

## Usage

1. **Create Student and University Objects**: Instantiate `Student` and `University` objects with the required attributes.

2. **Evaluate Admission**: Use the `evaluate` method of the `University` class to check if the student is admitted based on their scores.

Example:
```cpp
Student student("Doğukan", 2.76, 163, 101, 2);
University university("Istanbul Technical University", {3.1, -0.1, 1.0}, 1.6, "Türkiye");

university.evaluate(student);
```

## How to test
Run the code below to test
```
valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all ./bin/main |& tee valgrind_log.txt
calico test.yaml |& tee calico_log.txt
```
