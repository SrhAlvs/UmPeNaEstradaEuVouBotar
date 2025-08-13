//NÃO FAZER DESSE JEITO
const jota = function(num1, num2){
    total = num1 + num2;
    return total;
}

jota(451, 215);
console.log(total);

//FAZER DESSE JEITO
const ka = function(nume1, nume2){
    return 'a soma é igual a: ' + nume1 + nume2
};
const totalCerto = ka(451, 215);
console.log(totalCerto);

//
//FUNCTION SCOPE 1
//
let treco = 'alguma coisa';
function iDontKnow(treco) { //essa variável vai "pegar" o valor da outra já existente
    return treco            //como se estivesse "chamando" ela
}

console.log(iDontKnow(treco));
console.log(treco);

//
//FUNCTION SCOPE 2
//
let coisa = 'algum treco';

function iDontCare(coisa) {         //aqui é como se estivesse reatribuindo um valor para a variável
    coisa = 'não é o mesmo treco';   //mas essa "reatribuição" só existe no scopo da função
    return coisa;
}

console.log(coisa);
console.log(iDontCare(coisa));

//
//FUNCTION HOISTING
//
/*
aColor();
const aColor = function() {
    console.log('lightblue')
}; //dá erro com 'const', 'var' e 'let'
//tá comentado para não ficar dando erro
*/

//
//FUNCTION CONSTRUCTOR
//
function ManyPeople(name) {
    this.name = name;
}

const jay = new ManyPeople('Jay');
console.log(jay);

const zane = new ManyPeople('Zane');
console.log(zane);