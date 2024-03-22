// "use strict " // treat all js code as newer version

// // alert(3+3) // pop up window with 6 but not recommended to use

// console.log(typeof 3) // number
// console.log(typeof "3") // string
// console.log(typeof true) // boolean
// console.log(typeof null) // object
// console.log(typeof undefined) // undefined
// console.log(typeof {}) // object
// console.log(typeof []) // object
// console.log(typeof function () { }) // function
// console.log(typeof NaN) // number
// console.log(typeof Infinity) // number
// console.log(typeof -Infinity) // number
// console.log(typeof 0 / 0) // number
// console.log(typeof 1 / 0) // number
// console.log(typeof -1 / 0) // number
// console.log(typeof 1 / "a") // number
// console.log(typeof 1 / "1") // number


// // DATA TYPE CONVERSION CONFUSION
// //string to number####################################333
// // let score = "40abc";
// // console.log(typeof score) // number

// // let valueNumber = Number (score);
// // console.log(valueNumber) // NaN (Not a Number) because it is not a pure number

// // "33"  => 33
// // "222abc"  => NaN



// // #############################################33
// // BOOLEAN
// // 1 == 1 // true
// // 1 == 2 // false
// // 1 == "1" // true
// // 1 === "1" // false

// // #####################################################333 num to string

// // let someNumber = 33;
// // let someString = String(someNumber);

// // console.log(someString) // "33"
// // console.log(typeof someString) // string



// // #########################################

// //comparison operator
// // 2+2
// // 2-2
// // 2*2
// // 2**2
// // 2/3
// // 2%3
// // 2 + "2"
// // "2" + 2

// // "1" + 2 + 2
// // 1 + 2 + "2"


// // console.log(true) // true
// // console.log(+true) // 1
// // console.log(true+) // error
// // console.log(+"") // 0
// // "2" > 1 // true
// // "02" > 1 // true
// // null> 0 // false
// // null== 0 // false
// // null > = 0// true
 
// // imp , in js == and > , >= , < , <= has differnet way of working

// // // 2== "2" //true
// // 2 === "2" // false


// 1. # primitive 7 Types
// 1. String, 2. Number 3. Boolean, 4. Null 5. Undefined 6. Symbol ( To amke value unique )  7. BigInt

// 2. Non Primitive ( REference)
// // 1. Array ,2.  Objects, 3. Functions
// // A language is called Dynamically typed if the 'type' of a variable is checked only during the runtime unlike at compile time in a statically typed language.

// outsideTemp = null;
// let userEmail;

// const id = Symbol("124");
// const id2 = Symbol("124");

// console.log(id === id2);
// const BigNumber =  34234323343434345n;



// const heroes = ["apple", "banana"] // arrays

// {
//     name: "hitesh",
//     age: 22
// }


// // type of null is object
// type of bigInt is undefined
// // https://262.ecma-international.org/5.1/

// //########################333 Memory
// 1. Stack (Primitive), Heap ( Non Primitive)

// // Stack
// // 1. Primitive Data types

// let myYoutubename = "sandeep";
// let myYoutubename2 = myYoutubename;

// myYoutubename2 = "hitesh";
// console.log(myYoutubename); // sandeep
// console.log(myYoutubename2); // hitesh


// // Heap
// // 2. Non Primitive Data types
// // object
// let myArray = ["hitesh", "sandeep"];
// let myArray2 = myArray;

// myArray2[0] = "apple";
// console.log(myArray); // ["apple", "sandeep"]

// // example 2
// let userOne = {
//     name: "sandeep",
//     age: 22
// }

