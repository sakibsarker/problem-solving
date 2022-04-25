//*******submit in node.js****(SakibSarker)
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
    var input = parseInt(prompt())
    while (input--) {
        var n = parseInt(prompt())
        var half = n / 2
        if (half % 2 == 1) print("NO")
        else {
            var evenarr = [], oddarr = []
            for (var i = 2; i <= n; i += 2) {
                evenarr.push(i)
                oddarr.push(i - 1)
            }
            oddarr[half - 1] = oddarr[half - 1] + half
            print("YES")
            print(evenarr.join(" ")+" "+oddarr.join(" "))
        }

    }

}
