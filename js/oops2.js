let coder = {
    isStudying : false,
    printIntroduction : function(){
        console.log(`My name is ${this.name}. Am I studying? ${this.isStudying}`);
        return `There should be nothing undefined here`;
    }
}

let newObj = Object.create(coder);
newObj.name = "Aaby";
newObj.isStudying = true;
console.log(newObj.printIntroduction());