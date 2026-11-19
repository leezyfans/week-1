import sys

if len(sys.argv) < 2:
    print("Usage: python hello.py <word>")
    sys.exit(1)

word = sys.argv[1]
reversed_word = word[::-1]
print(reversed_word)
