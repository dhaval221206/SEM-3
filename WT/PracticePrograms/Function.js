// function function name(msg){
//     parameter--->Input;
//     console.log(msg);
// }
// function name(msg);



// --------------------------------------------------------------------------------------------------------------------------------------



// function myFunction(){
//     console.log("Hello....!!!");
//     console.log("How Are You..??");

// }
// myFunction();  
// 
// 
// 


// --------------------------------------------------------------------------------------------------------------------------------------



//  -------SUM OF TWO NUMBERS--------
//  function sum(x, y){
//  s = x + y;
//   console.log("value of x :",x);
//  console.log("before return");
//   return s;
// console.log("After return");-->this code never execute...
//  return statement is the last line of function...

// function parameter --->like local variable of function --->block scope(function na block scope sudhi jivta rey)

//  }
//  let val = sum(3, 4);
//  console.log(val);



//  //  -------MULTIPLICATION-------
//  function mul(a, b){
//     return a * b;
//  }



// -----------------------------------------------------------------------------------------------------------------------------------------



//  // --------ARROW FUNCTION-----(PART OF MODERN JAVASCRIPCT)
//  const arrowSum = (a, b) => {
//     console.log(a + b);
//  };

//  const arrowMul = (a, b) => {
//     console.log(a * b);

//  }


// Create a function the "function " keyword that takes a String as an arguments & returns the number of vowels in the string

function countVowel(str) {
    let count = 0;
    for (const char of str) {
        if (char == 'a' || char == 'e' || char == 'i' || char == 'o' || char == 'u' || car == 'A' || char == 'E' || char == 'I' || char == 'O' || char == 'U') {
            count++;
        }
    }
    console.log(count);
}

// -----------------------------------------------------------------------------------------------------------------------------------------------------

//  let companies=["Bloomberg", "MIcrosoft","Uber","Google","IBM"];
//  companies.spilce(index number, delete number, name which you add);
// companies.splice(2, 1, "Ola");
// companies.push("Amazon");   