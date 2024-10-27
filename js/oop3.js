//there is no such thing as classes in Js
//classes are just syntactic sugar over javascript's existing prototype-based inheritance

//Objects out of syntactic class
class Vehicle{
    constructor(name, maker, engine){
        this.name = name;
        this.maker = maker;
        this.engine = engine;
    }
    getDetails(){
        return (`The name of the bike is ${this.name}.`)
    }
}
let bike1 = new Vehicle('Hayabusa', 'Suzuki', '1340cc');
let bike2 = new Vehicle('Ninja', 'Kawasaki', '998cc');

console.log(bike1.name);
console.log(bike2.maker);

//Objects out of their protypes
// let VehicleObject = {
//     getDetails(){
//         return (`The name of the bike is ${this.name}.`)
//     }
// }
// let bike3 = Object.create(VehicleObject);
// bike3.name = "Pulsar";
// let bike4 = Object.create(VehicleObject);
// bike4.name = "Apache";
// console.log(bike3.getDetails());
// console.log(bike4.getDetails());


//Traditional way of creating objects
let vh = function(name, maker, engine){
    this.name = name,
    this.maker = maker,
    this.engine = engine
};

vh.prototype.getDetails = function(){
    console.log(`The name of the bike is ${this.name} made by ${this.maker}`);
}
let b1 = new vh('Hayabusa', 'Suzuki', '1340cc');
let b2 = new vh('Ninja', 'Kawasaki', '998cc');
b1.getDetails();
b2.getDetails();


//prototype
function person(name, age){
    this.name = 'Aaby';
    this.age = age;
}
person.prototype.isAdult = function(){
    return this.age >= 18;
}
person.prototype.city = 'Mumbai';

let p1 = new person('Aaby', 22);
let p2 = new person('Aarav', 15);


console.log(p1);
console.log(p1.isAdult());
console.log(p2.isAdult());
console.log(person.prototype);