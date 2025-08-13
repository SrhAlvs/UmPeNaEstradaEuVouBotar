//1
let weight = 96;

//2
console.log(typeof weight);

//3
let name = 'Estêvão';
let age = 21;
let stars = 4.9;
let isSubscribed = true;

//4
let student = {
    name: 'Lloyd',
    age: 21,
    weight: 96,
    isSubscribed: true,
}

console.log(typeof student);
console.log(student);
console.log(`${student.name} de idade ${student.age} pesa ${student.weight} kg.`);

//5
let students = []

//6
students = [
    student
];
console.log(students);

//7
console.log(students[0]);

//8
let student2 = {
    name: 'Cole',
    age: 23,
    weight: 90,
    isSubscribed: false,
}
students = [
    student,
    student2
];
/*podia ser students[1] = student2, mas dessa forma não é tão seguro*/

//9
console.log(a);
var a = 1;
//R.: 'a' existe (já que é global e local, vai acontecer o 'hoisting'), mas seu valor é 'undefined'
//Depois de ver o resultado no Console: acertei