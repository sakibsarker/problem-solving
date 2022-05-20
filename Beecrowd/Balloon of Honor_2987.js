"use strict";
process.stdin.resume();
process.stdin.setEncoding("utf-8");

function print(x) {
    console.log(x);
}

let inputString = "";
let currentLine = 0;

process.stdin.on("data", inputStdin => {
    inputString += inputStdin;
});
process.stdin.on("end", () => {
    inputString = inputString.split("\n");
    main();
});
function prompt() {
    return inputString[currentLine++];
}

//*******Type your main fucntion*******

function main() {
let v=prompt().charCodeAt(0)
console.log(v-64)
}
