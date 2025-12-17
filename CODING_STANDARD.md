# Coding Style / Reviewability Rules
This repository follows explicit, review-friendly coding rules.<br>
The goal is to reduce human review and maintenance cost.

## Control Flow
- Always use braces {} for:
  - if / else
  - for
  - while
  - switch
- Single-line bodies without braces are not allowed.
```c
/* OK */
if (cond) {
    do_something();
}

/* NG */
if (cond)
    do_something();
```

### Empty Loop Bodies
- Empty loop bodies are discouraged.
- If unavoidable, they must be explicitly visible and annotated.
```c
/* OK */
for (i = 0; s[i]; i++) {
    /* intentional empty loop */
}

/* NG */
for (i = 0; s[i]; i++);
```

## Function Design
- One function = one responsibility.
- Split functions when:
  - The logic can be described as “A and B”
  - Error handling or cleanup dominates the function body
- Internal helpers must be static.

## Early Return
- Guard clauses (early returns) are preferred to deep nesting.
```c
if (!ptr) {
    return (NULL);
}
```

## Comments
- Do not restate what the code already says.
- Comments must describe:
  - Preconditions (e.g. NULL allowed or not)
  - Postconditions
  - Error behavior
```c
/* Returns 0 if s is NULL */
size_t ft_strlen(const char *s);
```

### Naming
- Avoid unclear abbreviations (tmp, var, buf1).
- Boolean names must start with:
  - is_
  - has_
  - can_
- Functions that allocate memory must clearly indicate ownership:
  - dup_*, new_*, etc.

## Error Handling
- Error handling behavior must be consistent across the library.
- Return conventions must be explicit (NULL, 0, -1, etc.).
- Do not silently ignore allocation failures.

## Formatting
- Readability is preferred over compactness.
- Do not compress logic into a single line for brevity.
- Indentation and brace placement must be consistent.

## Rationale (Minimal)
These rules exist to:
- Prevent common control-flow mistakes
- Make behavior obvious during code review
- Reduce future modification risk
