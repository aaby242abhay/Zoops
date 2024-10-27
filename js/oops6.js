//difference between string and primitive

let strPrimitive = "Aaby Abhay"
console.log(typeof strPrimitive);   //string
console.log(strPrimitive instanceof String);    //false

let stringObject = new String("Aaby Abhay");
console.log(typeof stringObject);   //object
console.log(stringObject instanceof String);    //true


//Defining global variables to be owned by objects
const outsideFunction = function(){
    console.log(`Let's greet each other`);
}

let myObj = {
    inner : outsideFunction,
    inside : function(){
        console.log("I am inside the object");
    }
}

myObj.inside();
myObj.inner();
