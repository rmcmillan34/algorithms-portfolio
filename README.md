![Build PDF](https://github.com/rmcmillan34/algorithms-portfolio/actions/workflows/build-pdf.yml/badge.svg)
![C++](https://img.shields.io/badge/C%2B%2B-primary-blue)
![Python](https://img.shields.io/badge/Python-secondary-yellow)
![LaTeX](https://img.shields.io/badge/LaTeX-Portfolio-lightgrey)
![Version](https://img.shields.io/badge/version-v0.1-informational)

# Algorithms Portfolio

A curated computer science algorithms portfolio demonstrating:

- algorithm design and implementation (C++ primary, Python secondary where useful)
- correctness reasoning via invariants and structured proofs
- time and space complexity analysis
- clear technical communication via a compiled LaTeX book

The portfolio is structured as a self-contained reference that scales from
individual worked examples to a complete algorithms handbook.

---

## What to Look At

- **Portfolio PDF**  
  Built automatically via GitHub Actions and committed to the repository root.

- **Curated Problems**  
  `problems/` contains executable solutions, organized by domain and difficulty.

- **LaTeX Sources**  
  `latex/` contains the full book structure, problem write-ups, and styling.

---

## Scope

This portfolio focuses on high-signal algorithmic patterns relevant to
high-end software engineering and quantitative development, including:

- Arrays and sequences  
- Strings and parsing  
- Hashing and counting  
- Two pointers and sliding window  
- Stacks and queues  
- Linked structures  
- Trees and heaps  
- Graph traversal and search  
- Recursion and backtracking  
- Dynamic programming  
- Greedy algorithms  
- Binary search and related paradigms  

Problems are organized by data structure and algorithmic technique rather than
chronological order of completion.

---

## Build

The PDF is generated automatically on each push to the `main` branch using
GitHub Actions.

### Local Build

``` local build

cd latex
latexmk -pdf main.tex

```

The compiled output will be written to `latex/main.pdf`.  
CI copies this file to the repository root as `Algorithms-Portfolio.pdf`.

---

## Tutorial: Create Your Own Algorithms Book

This repository is designed to be forked and customized.

### High-Level Structure

``` repository root

.
├── latex/                     # All LaTeX source (book structure + prose)
│   ├── main.tex               # Entry point
│   ├── preamble.tex           # Global macros and formatting
│   ├── titlepage.tex          # Title page content
│   ├── license.tex            # Short license notice
│   ├── glossary.tex           # Glossary of terms and notation
│   └── sections/              # Chapters and curated problem includes
│       └── 01-arrays-sequences/
│           ├── index.tex
│           ├── easy.tex
│           └── problems/
│               └── lc-066-plus-one.tex
│
├── problems/                  # Executable solutions (no LaTeX)
│   └── 01-arrays-sequences/
│       └── easy/
│           └── lc-066-plus-one/
│               ├── solution.cpp
│               └── solution.py
│
└── Algorithms-Portfolio.pdf

```

---

### Step 1 — Personalize the Book

Edit the following files:

``` personalization points

- latex/titlepage.tex   : title, author, degree
- latex/preamble.tex    : headers, footers, global formatting
- latex/license.tex     : license text and repository link
- README.md             : repository description and scope

```

---

### Step 2 — Add a New Problem

1. Create the solution directory:

``` solution directory

problems/<domain>/<difficulty>/lc-XXX-problem-name/
  solution.cpp
  solution.py

```

2. Create the LaTeX write-up:

``` LaTeX problem file

latex/sections/<domain>/problems/lc-XXX-problem-name.tex

```

3. Include the problem in the appropriate difficulty file:

``` include directive

\input{sections/<domain>/problems/lc-XXX-problem-name}

```

---

### Notes and Conventions

``` important notes

- Paths in \lstinputlisting{} are relative to the .tex file performing the include
- Avoid smart punctuation (em dashes, curly quotes) when using pdflatex
- Problem files contain exposition only; executable code lives exclusively in /problems
- Use consistent naming: lc-XXX-problem-name

```

---

## License

This repository includes a root `LICENSE` file.  
Forks should update `latex/license.tex` to reflect their own licensing terms.

