class person{
    constructor(name){
        this.name = name;
    }
    toString(){
        return (`Name of the person is ${this.name}`);
    }
}

class student extends person{
    constructor(name, id){
        super(name);
        this.id = id;
    }
    toString(){             //this is method overriding
        return (`${super.toString()}, Student ID: ${this.id}`);
    }
}

let s1 = new student('Aaby', 22);
console.log(s1.toString());