# NLW - Next Level Week Expert 2024
## Trilha HTML + CSS + JS
**Algoritmos** são uma sequência de passos, conjuntos de regras, para realizar determinada tarefa.
**Lógica de programação** é a maneira de pensar.
**Sintaxe** é a maneira correta de escrever.
## Plataforms and Tools
* **DevTools** - F12 
    * Ao clicar em **Elements** e depois no canto superior esquerdo, numa seta com quadrado, dá para ver a configuração de cada elemento e qual a linha de código responsável pela configuração do elemento.
* [FrontEditor](fronteditor.dev) - plataforma para escrever MD, HTML, CSS e JS.
* [CODE Pen](codepen.io)
## Meanings
* Concatenação = ato de somar dados, como String, Number e Boolean.
# HTML
**HyperText Markup Language**
* HyperText = clica em um texto, imagem, etc. e abre uma outra página, uma outra janela
* Markup = formatação feita no texto com tags (escrever só "Title" não deixa ele grande, precisamos utilizar a tag `<h1>`)
    * Tag = as tags podem receber instuções, os chamados **atributos**, que são colocados dentro da tag `<a href="">`, também podem existir tags dentro de tags
## Some Commands
* `<a></a>` = links
    * `href=""` = é entre aspas que se coloca os links
    * `target="_blank"` = esse atributo faz com que ao clicar no link, abra uma página em branco, ao invés de alterar a página que já está
* `<template></template>` = é tipo, guardar tudo o que estiver aí dentro porque eu vou usar esse modelo mais tarde, aí o HTML armazena esse conjunto de comandos, mas não mostra para o usuário
* `<div></div>` = para criar blocos, quebra a linha quando colocado
    * `class=""` = classificar e organizar os elementos, blocos, tags, etc.
    * `id=""` = é como uma `class`, mas os `id` não podem repetir
* `<span></span>` = é como uma `div`, mas o modelo é *inline*, fica na mesma linha
* `<dl></dl>` = Description List, lista
* `<dt></dt>` = Description Term, um item da lista
* `<input>` = se fecha sozinha, cria um campo para receber um dado (String, Boolean, Number, etc.)
    * `value=""` = toda tag `input` precisa de um valor, ao selecionar aquela opção, um determinado valor será atribuído à ela
    * `type="text"` = dá para escrever a resposta
    * `type="radio"` = para marcar e desmarcar a bolinha
    * `name=""` = entre aspas fica tipo um nome de class, ex.: **item**, quando o sistema for buscar o valor de **item**, só pode ter um, então ao colocar o `name` nas alternativas, o usuário automaticamente só vai poder marcar uma questão
* `<></>`
## Tests
```html
<h1> Title </h1>
<a href="link" target="_blank">palavrinha em azul</a>
```
# CSS
Cascading Style Sheet = Folha de estilo em cascata
## Some Codes
## Tests
# JS
* Linguagem de programação - interpretada e executada pelos navegadores.
* HTML é a estrutura, CSS é a beleza e JS é a inteligência.
* JAVA != JS
## Some Codes
* `const` = variável com valor constante, que não muda
* `alert` = dá tipo aquela mensagem de alerta "Esse site pode te enviar notificações?"
* `array` | `[ ]` = recebe vários valores, como uma estante, String, Number, etc., só separar usando **vírgulas**
    * `nameArray` = para mostrar um `array` é só colocar o nome da variável, que o sistema já mostra ele todo
* `object` | `{ }` = parece um `array`, porém as coisas dentro desta estante devem ser "classificadas"
    * `car.year` = para acessar uma determinada informação de um `object`
    ```js
    const car = {
        color: 'lightblue',
        model: 'Fusca',
        brand: 'Volkswagen',
        year: 1996,
        weight: 820,
        automobile: true,
    }
    ```
## Tests
```js
const message = "Hello World! "
alert(message + (10 * 100) + " abraços")
// Hello World! 1000 abraços
```
```js
const questions = [
    {
        question: "Question 01",
        answers: [
            "Alternative A",
            "Alternative B",
            "Alternative C",
        ],
        rightAnswer: 2,
    },
]
alert(questions[0].answers[1]) 
    //só para ver como acessar Array dentro de um Object dentro de um Array
alert(questions[0].answers[questions[0].rightAnswer]) 
    //esse e o de baixo são a mesma coisa
alert(questions[0].answers[2]) //os dois devolvem "Alternative C"
```
```js
for(const item of questions) {
    alert(item.question)
}
//estrutura de repetição que criou a variável 'item' e vai fazer um 'alert' para cada item do Array 'questions'
```
# Chat GPT
Para gerar as perguntas de forma rápida e aleatória, usamos o comando: 
```js
// crie 10 perguntas sobre o tópico Fundamentos de JavaScript com 3 opções de resposta e uma resposta correta, para compor um aplicativo em javascript. Responda com essa estrutura de dados do exemplo abaixo.

// const questions = [
//     {
//         question: "Question 01",
//         answers: [
//             "Alternative A",
//             "Alternative B",
//             "Alternative C",
//         ],
//         rightAnswer: 2,
//     },
// ]
```
* **Comentar tudo**: `Ctrl` + `K` + `C`
* **Descomentar tudo**: `Ctrl` + `;`