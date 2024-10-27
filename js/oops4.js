function person(fname, lname){
    let firstName = fname;
    let lastName = lname;

    let noAccess = function(){
        return (`Something is being returned from noAccess`);
    }
    this.access = function(){
        // return (`The first name is ${firstName} and last name is ${lastName}`);
        return noAccess();
    }
}

let p1 = new person("Aaby", "Abhay");
let p2 = new person("Aarav", "Abhay");

console.log(p1.firstName);
console.log(p1.noAccess);
console.log(p1.access());