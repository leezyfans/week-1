# Coding Style Guide

These are the rules I follow when writing code. The goal is to make my programs easy to read and understand, for myself and for anyone else who opens the files.

- **Use clear, meaningful names.**
  Name things for what they hold, not with a random letter. In `hello.py` I use `word` (not `w`) because it clearly means the word being reversed.

- **Keep indentation consistent.**
  Use the same amount of indentation for every line at the same level. In `hello.c` the lines inside `main()` are all indented by four spaces.

- **Write one statement per line.**
  Do not squeeze several actions onto one line. In `hello.py` I put `print("Hello!")` and `print(word[::-1])` on separate lines, so each step is obvious.

- **Add comments only where the code is not obvious.**
  A comment should explain *why*, not restate the code. The `word[::-1]` slice in `hello.py` is a good place for a short comment, because the trick is not self-explanatory.

- **Use naming style that fits the language.**
  Follow the common conventions of each language. In `hello.js` I use `const` for a value that never changes; in Python and C a plain variable is fine.

- **Keep punctuation correct for the language.**
  JavaScript and C statements end with a semicolon (`;`), Python statements do not. In `hello.js` every `console.log(...)` line ends with `;`, while `hello.py` has none.

- **Leave a blank line to separate logical blocks.**
  A blank line between different steps makes code easier to scan. In `hello.c` I leave a blank line after the includes and between the print steps.

- **Keep every project's README up to date.**
  A README should say what the project does and how to run it. This repo's README tells the reader how to run the three "Hello + reversed word" programs.
