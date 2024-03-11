"use strict " // treat all js code as newer version

// alert(3+3) // pop up window with 6 but not recommended to use

console.log(typeof 3) // number
console.log(typeof "3") // string
console.log(typeof true) // boolean
console.log(typeof null) // object
console.log(typeof undefined) // undefined
console.log(typeof {}) // object
console.log(typeof []) // object
console.log(typeof function () { }) // function
console.log(typeof NaN) // number
console.log(typeof Infinity) // number
console.log(typeof -Infinity) // number
console.log(typeof 0 / 0) // number
console.log(typeof 1 / 0) // number
console.log(typeof -1 / 0) // number
console.log(typeof 1 / "a") // number
console.log(typeof 1 / "1") // number


// DATA TYPE CONVERSION CONFUSION
//string to number####################################333
// let score = "40abc";
// console.log(typeof score) // number

// let valueNumber = Number (score);
// console.log(valueNumber) // NaN (Not a Number) because it is not a pure number

// "33"  => 33
// "222abc"  => NaN



// #############################################33
// BOOLEAN
// 1 == 1 // true
// 1 == 2 // false
// 1 == "1" // true
// 1 === "1" // false

// #####################################################333 num to string

// let someNumber = 33;
// let someString = String(someNumber);

// console.log(someString) // "33"
// console.log(typeof someString) // string



// #########################################
