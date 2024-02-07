const questions = [
    {
        question: "Qual é a forma correta de declarar uma variável em JavaScript?",
        answers: [
            "var myVar;",
            "let myVar;",
            "const myVar;",
        ],
        rightAnswer: 1,
    },
    {
        question: "Qual é a saída do seguinte código: console.log(typeof 42);",
        answers: [
            "string",
            "number",
            "undefined",
        ],
        rightAnswer: 1,
    },
    {
        question: "Qual é o operador lógico que representa 'ou' em JavaScript?",
        answers: [
            "&&",
            "||",
            "!",
        ],
        rightAnswer: 1,
    },
    {
        question: "Qual é a função usada para converter uma string em um número em JavaScript?",
        answers: [
            "parseInt()",
            "parseFloat()",
            "Number()",
        ],
        rightAnswer: 2,
    },
    {
        question: "Qual é a saída do seguinte código: console.log(5 == '5');",
        answers: [
            "true",
            "false",
            "TypeError",
        ],
        rightAnswer: 0,
    },
    {
        question: "Qual é a forma correta de escrever um comentário de uma única linha em JavaScript?",
        answers: [
            "// This is a comment",
            "<!-- This is a comment -->",
            "/* This is a comment */",
        ],
        rightAnswer: 0,
    },
    {
        question: "Qual é o resultado da expressão: 5 + '5' em JavaScript?",
        answers: [
            "10",
            "55",
            "Error",
        ],
        rightAnswer: 1,
    },
    {
        question: "Qual é a saída do seguinte código: console.log(typeof undefined);",
        answers: [
            "string",
            "undefined",
            "null",
        ],
        rightAnswer: 1,
    },
    {
        question: "Qual é o método usado para adicionar um elemento ao final de um array em JavaScript?",
        answers: [
            "push()",
            "pop()",
            "concat()",
        ],
        rightAnswer: 0,
    },
    {
        question: "Qual é a saída do seguinte código: console.log(10 / 'a');",
        answers: [
            "NaN",
            "SyntaxError",
            "TypeError",
        ],
        rightAnswer: 0,
    },
];
const quiz = document.querySelector('#quiz') //seleciona o 'id' #quiz
const template = document.querySelector('template') //seleciona o 'template' de como vão ficar as perguntas
for(const item of questions) { //loop de repetição para as questões
    const quizItem = template.content.cloneNode(true) //vai clonar todos os nós do arquivo HTML
    quizItem.querySelector('h3').textContent = item.question //vai modificar o 'h3' (perguntas)
    for(let answer of item.answers) { //loop de repetição para as alternativas
        const dt = quizItem.querySelector('dl dt').cloneNode(true) //vai pegar e clonar tudo o que estiver dentro do 'dt' que está dentro do 'dl'
        dt.querySelector('span').textContent = answer //vai modificar os 'span'
        quizItem.querySelector('dl').appendChild(dt) //vai colocar o item na tela
    }
    quizItem.querySelector('dl dt').remove() //vai remover a primeira alternativa, "Alternative A" que está no documento HTML
    quiz.appendChild(quizItem) //vai colocar o item na tela
}