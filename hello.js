const word = process.argv[2];

if (!word) {
    console.log("Usage: node hello.js <word>");
    process.exit(1);
}

const reversed = word.split('').reverse().join('');
console.log(reversed);
