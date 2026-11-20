# Week 1

## Which language needed the most setup?

C needed the most setup to get running. Because C is a compiled language, I had to install a compiler (gcc) and translate the source into an executable with `gcc hello.c -o hello` before I could run it — an extra step that Python and JavaScript do not need. Python and JavaScript are interpreted: once their runtimes are installed, `python hello.py` and `node hello.js` execute the source code directly in one step. This is the compiled-vs-interpreted trade-off: compiled C gives more control and runs fast, but needs a build step; interpreted Python and JavaScript are more convenient to run, but rely on their interpreter at runtime.
