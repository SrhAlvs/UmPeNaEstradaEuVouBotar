//Algoritmo que tranforma as notas do sistema numérico 
//para sistema de notas em caracteres tipo A B C D E.
//-------------------------------------------------------------
//Dependendo da sua nota, ela é classificada em tipos de A à E.
//-------------------------------------------------------------
/*
JEITO 1 
let grade = 100
if(grade >= 90 && grade <= 100) {
    console.log('Nota de tipo A.')
} else if(grade >= 80 && grade <= 89) {
    console.log('Nota de tipo B.')
} else if(grade >= 70 && grade <= 79) {
    console.log('Nota de tipo C.')
} else if(grade >= 60 && grade <= 69) {
    console.log('Nota de tipo D.')
} else if(grade < 60 && grade >= 0) {
    console.log('Nota de tipo E.')
} else {
    console.log('Erro. Tente novamente.')
}
*/
//-------------------------------------------------------------
//JEITO 2 - function, para poder usar quando quiser
function getYourGrade(grade) {
    if(grade >= 90 && grade <= 100) {
        return 'Nota de tipo A.'
    } else if(grade >= 80 && grade <= 89) {
        return 'Nota de tipo B.'
    } else if(grade >= 70 && grade <= 79) {
        return 'Nota de tipo C.'
    } else if(grade >= 60 && grade <= 69) {
        return 'Nota de tipo D.'
    } else if(grade < 60 && grade >= 0) {
        return 'Nota de tipo E.'
    } else {
        return 'Erro. Tente novamente.'
    }
}
console.log(getYourGrade(-10))
console.log(getYourGrade(48))
console.log(getYourGrade(85))
console.log(getYourGrade(74))
console.log(getYourGrade(63))
console.log(getYourGrade(52))
console.log(getYourGrade(93))
console.log(getYourGrade(105))
console.log(getYourGrade(6))
console.log(getYourGrade(0))