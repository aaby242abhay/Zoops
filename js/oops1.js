//Objects in javascript can be created in 2 ways --> 1. Object literal 2. Object constructor

//Object literal
let person = {
    firstName : "Aaby",
    lastName : "Abhay",

    getFunction : function(){
        return (`The first name is ${this.firstName} and last name is ${this.lastName}`);
    },

    phone_number : {
        mobile : 1234567890,
        landline : 999999999
    }
}

console.log(person.getFunction());
console.log(person.phone_number.mobile);

//Object constructor
//this is the way we make objects in cpp and java
function person_(firstName, lastName){
    this.firstName = firstName
    this.lastName = lastName

}
let person1 = new person_("Aaby", "Abhay");
let person2 = new person_("Aarav", "Abhay");

console.log(person1.firstName);
console.log(person2.firstName);


