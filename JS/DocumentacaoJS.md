# Trilha Fundamentar | Guia Estelar de JavaScript
* Linguagem de programação que adiciona interatividade à um site.
* Linguagem de programação que roda no navegador do usuário (front-end), mas roda também no computador (back-end).
* ECMAScript: órgão que padroniza o JavaScript
* **`//comentário em linha | /*comentário em bloco*/`** = comentários não afetam o código
## Anatomia JS
* Sintaxe: a maneira correta de escrever uma certa linguagem. 
    ```js
    console.log("mostrar na tela") //certo
    consolelog("mostrar na tela") //errado
    coso.lelog("mostrar na tela") //errado
    console.log("
    mostrar na tela") //errado
    ```
* JS no HTML
    ```html
    <script>
        console.log('mostrar na tela')
    </script>
    /*OU*/
    <script src="caminho_de_arquivo.js"></script>
    ```
* **comentários** = anotações feitas no código, mas que o usuário não pode ver
    * `// algo` = comentário em linha, igual C++
    * `/* algo 2.0*/` = comentário em bloco, igual no CSS
## Tipos de dados
### Primitive/Primitive value
* `String` = cadeia de caracteres, para escrever textos em JS
    * `"texto"` = aspas duplas, se no texto tiver aspas simples usa elas para não dar problema
    * `'texto'` = aspas simples, se no texto tiver aspas duplas usa elas para não dar problema
    * ``` `texto` ``` = template literals ou template strings, pode usar aspas simples e duplas, permite multilinhas e a inserção de valores e expressões
* `Number` = números
    * `666` = inteiro, positivos e negativos
    * `6.66` = reais (float no inglês), positivos e negativos
    * `NoN` = Not a Number
    * `Infinity` = infinito, tem que ser com o I maiúsculo
* `Boolean` = V ou F
    * `true` = verdadeiro
    * `false` = falso
* `undefined` = indefinido (não existe)
* `Symbol` = leia a [Documentação MDN: Symbol](https://developer.mozilla.org/pt-BR/docs/Web/JavaScript/Reference/Global_Objects/Symbol)
* `BigInt` = armazena números inteiros com uma ótima precisão, mais informações na [Documentação MDN: Estrutura de dados do JavaScript](https://developer.mozilla.org/pt-BR/docs/Web/JavaScript/Data_structures#symbol_type)
### Structural Root Primitive
* `null` = nulo (existe, mas é "vazio")
### Object
[Documentação MDN: Standard built-in objects](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects)
Dado estrutural, todos têm propriedades/atributos e funcionalidades/métodos.
* `{propriedade: "valor"}` = pode colocar mais de um valor dentro das {}, é só separar por vírgula
* Acessar valores dentro de um Object: 
    ```js
    const person = {
        name: 'Rodrigo',
        age: 25,
        pet: 'cats',
        quantity: 4
        //tem que ter as vírgulas depois
    }
    console.log(`${person.name} have ${person.age} years old and have ${person.quantity} cute ${person.pet}.`)
        //Rodrigo have 25 years old and have 4 cute cats.
    ```
### Array
Vetores, uma lista, agrupamento de dados.
* `["coisa", "treco", 18]` = entre [], separa por vírgulas
* Acessar valores dentro de um Array:
    ```js
    const backpackThings = [
        'clothes', //0
        'shoes', //1
        'sunscreen' //2
        { //3
            toDry: 'towel',
                toHair: 'hair cream'
        }
    ]
    console.log(backpackThings[0]) 
        //clothes
    console.log(backpackThings[3].toDry) 
        //towel
    ```
* Posso colocar `function` dentro de um `Array` e ainda posso rodar ela
    ```js
    const iDontKnow = [
        'gray', //0
        'pants', //1
        function() {return "e aí? tudo blz?"} //3
    ]
    console.log(iDontKnow[3])
        //vai dizer que é uma função: f () {return "e aí? tudo blz?"} 
    console.log(iDontKnow[3]())
        //vai rodar a função: e aí? tudo blz?
    ```
#### Arrays with Strings
* `.split("")` = js separa em elementos de Array de acordo com o que estiver entre aspas. Ex.: coloco "o", então onde tiver "o" ele vai sumir e criar um elemento
* `.join("")` = js "emenda/junta/liga" os elementos de um Array usando o que estiver dentro das aspas 
```js
let text = "I am hungry o_o"
let array = text.split(" ")
    //(4) ["I", "am", "hungry", "o_o"]
let arrayTogether = array.join("~")
    //I~am~hungry~o_o
```
#### Array with Constructors
```js
let myArray = new Array('a', 'b', 'c')
    //(3) ["a", "b", "c"]
let emptyArray = new Array(6)
    //(6) [empty * 6]
    //tenho 6 posições vazias
```
#### Array elements quantity
```js
console.log(["a", "b", "c"].length) //2
```
#### Cadeia de caracteres => Array
```js
let word = 'rain'
console.log(Array.from(word))
    //(4) ["r", "a", "i", "n"]
```
#### Manipulções de Array
* `.push()` = adiciona um item no **final** do array, entre () é o item a ser adicionado, antes do . ponto é o nome do Array
* `.unshift()` = adiciona um item no **começo** do array, entre () é o item a ser adicionado, antes do . ponto é o nome do Array
* `.pop()` = remove o **último** item do Array, se colocar mais de um ele vai removendo sempre o último
* `.shift()` = remove o **primeiro** item do Array, se colocar mais de um ele vai removendo sempre o primeiro
* `.slice()` = seleciona alguns elementos do Array, nos parênteses coloca-se dois números:
    * **1º número** = começando do zero, eu coloco a posição do primeiro elemento que eu quero
    * **2º número** = começando do um, eu coloco a posição do último elemento que eu quero, aí ele monta uma "lista" dos elementos
* `.splice()` = remove algum elemento do Array, nos parênteses coloca-se dois números:
    * **1º número** = começando do zero, eu coloco a posição do primeiro elemento que eu quero retirar
    * **2º número** = començando do um e contando a partir do primeiro elemento selecionado, eu escolho a quantidade de elementos que eu quero retirar
* `.indexOf()` = para encontrar a posição de um elemento, entre parênteses coloca o elemento
    ```js
    let car = ['banco', 'volante', 'rádio']
        //(3) ['banco', 'volante', 'rádio']
    car.push('porta-luvas')
        //(4) ['banco', 'volante', 'rádio', 'porta-luvas']
    car.unshift('porta-malas')
        //(5) ['porta-malas', 'banco', 'volante', 'rádio', 'porta-luvas']
    car.pop()
        //(4) ['porta-malas', 'banco', 'volante', 'rádio']
    car.shift()
        //(3) ['banco', 'volante', 'rádio']
    console.log(car.slice(1, 3))
        //(2) ['volante', 'rádio']
    car.splice(2, 1)
        //(2) ['banco', 'volante']
    console.log(`A posição do volante é: ${car.indexOf('volante')}`)
        //A posição do volante é: 1
    ```
## Variáveis
Tem 3 formas de criar uma variável: `var`, `let` e `const`
* `console.log(typeof `nomeVariável`)` = mostra na tela qual o tipo da variável
* `let coisa, treco, algo` = agrumpamento de declarações, declara várias variáveis ao mesmo tempo
* múltiplos argumentos na função = colocar várias variáveis em um comando só
    ```js
    let name, pet, quantity
        name = Rodrigo
        pet = gatos
        quantity = 4
    console.log(name, pet, quantity)
        //'Rodrigo' 'gatos' '4'
    ```
* texto + variáveis = concatenar valores
    ```js
    let name, pet, quantity
        name = Rodrigo
        pet = gatos
        quantity = 4
    console.log( name + " tem " + quantity, pet ".")
        //'Rodrigo' tem '4' 'gatos'.
    ```
* texto + variáveis = interpolação valores
    ```js
    let name, pet, quantity
        name = Rodrigo
        pet = gatos
        quantity = 4
    console.log( `${name} tem ${quantity} ${pet}.`) 
        //'Rodrigo' tem '4' 'gatos'.
        //template literals/strings (crase) e não aspas simples
    ```
### `var`
Pode variar/mudar seu valor.
* Declarar variável
    ```js
    var coisa = algo //"coisa" recebe "algo"
    ```
### `let`
Pode variar/mudar seu valor.
* Declarar variável
    ```js
    let coisa = algo
    ```
### `const`
Não pode variar, mesmo que seja colocado um novo valor para ela mais para frente, o `const` sempre vai pegar o primeiro valor atribuído à ele
* Declarar variável
    ```js
    const coisa = algo
    ```
### Dynamic types
* **Linguagem fortemente tipada**: precisa colocar o tipo dela para que seja criada e é estática, se ela é desse tipo ela não muda lá na frente
    ```js
    let coisa: String //aí só recebe esses tipos de dados
    ```
* **Linguagem fracamente tipada**: o tipo de variável é definido de acordo com o valor atribuído à ele, ele é dinâmico, dá para alterar o valor mais tarde
    ```js
    let coisa =  //se receber número é Number, se receber letra é String e assim por diante
    console.log(typeof coisa) //mostra na tela qual o tipo da variável
    ```
    * `const` é o mesmo tipo para sempre
### Scope
Determina a visibilidade de alguma variável. 
* `var` = global (em todo o código) e local (somente dentro do scopo onde está)
    ```js
    console.log("Existe algo antes do bloco?", algo) //existe, mas com valor `undefined`
        //em tese, "algo" não existe ainda, mas o js "pega" essa var e joga para cima, deixando somente o seu valor onde está, isso se chama "hoisting"
    {
        var algo = 6
    }
    console.log("Existe algo depois do bloco?", algo)
        //agora sim ele recebe o valor para a var "já existente"
    ```
* `let` e `const` = local (somente dentro do scopo onde está)
    ```js
        console.log("Existe treco antes do bloco?", treco) //não existe
        {
            console.log("Existe treco?", treco) //existe, mas dá erro, não é possível acessar o valor
            let treco = 6
            console.log("Existe treco?", treco) //existe
        }
        console.log("Existe treco depois do bloco?", treco) //não existe
    ```
    * **curiosidade**
        ```js
        let coisa = 6
        console.log("Qual o valor de 'coisa'?", coisa) //o valor é 6
        {
            coisa = 3
            console.log("Qual o valor de 'coisa'?", coisa) //o valor é 3, pois está dentro do scopo
        }
        console.log("Qual o valor de 'coisa'?", coisa) //o valor é 3, o js procura o valor de baixo para cima, até mesmo dentros dos scopos e mostra o primeiro que achar
        ```
        ```js
        const coisa = 6
        console.log("Qual o valor de 'coisa'?", coisa) //o valor é 6
        {
            coisa = 3
            console.log("Qual o valor de 'coisa'?", coisa) //erro, const não muda o valor
            const coisa = 3
            console.log("Qual o valor de 'coisa'?", coisa) //o valor é 3, já que uma nova const foi criada
        }
        console.log("Qual o valor de 'coisa'?", coisa) //o valor é 6, se estou fora do scopo, só uso o que estiver fora do scopo
        ```
#### Block Statement
Declaração de bloco. O bloco também cria um scopo novo, `block-scoped`
```js
{ //abre bloco
    //dentro do bloco, pode colocar qualquer código
} //fecha o bloco
```
### Nomeação de variáveis
* Pode: 
    * Iniciar com caracteres especiais: $ _
    * Iniciar com letras
        * Maiúsculas e minúsculas fazem diferença
    * Colocar acentos
* Não pode:
    * Iniciar com números
    * Colocar espaços vazios
* Ideal:
    * Colocar nomes que fazem sentido
        * Que explique qual a função da variável
    * Escrever em inglês
    *camelCase = onde seria espaço coloca maiúculo, OiTudoBemComVocê
    *snake_case = onde seria espaço coloca underline, oi_tudo_bem_com_você
## Funções
* `function` *name*`() {}` = function statement, declaração da função, essa parte vai ficar guardada na memória
    * `{aqui}` = conjunto de comandos que a função precisa guardar em memória
    * *name*`()` = assim para executar a função que estava guardada em memória
    * **as variáveis que estiverem entre chaves só funcionam dentro da função, parâmetros**
    ```js
    function meLembre() {
        console.log("- organizar o quarto;")
        console.log("- limpar o banheiro;")
        console.log("- estudar para a prova;")
        console.log("- fazer as atividades;")
        console.log("- etc.")
    } //guardando na memória para mostrar mais tarde
    //resto do código bla bla bla
    meLembre() //aqui estou "chamando" a minha função, só assim para que ela seja exibida
    ```
* **função autoexecutável**
    ```js
    (function() {
        console.log('I love sushi')
    })()
    ```
### Return
* `return` = comando utilizado para retornar o que vier a seguir
* ao colocar uma função dentro de um `console.log`, ela é executada normalmente, porém seu valor fica como `undefined`
    * caso tenha um `console.log` dentro da função em questão, o `console.log` da função é executado antes do `console.log` do código
* para mostrar o resultado de uma função o `return` é adicionado ao final da função e ao chamar a função no código, o que estiver depois do `return` que vai ser retornado
* para retornar o resultado sem precisar chamar a função inteira no `console.log`, é só executar/chamar a função antes de pedir o valor à ser retornado
    * mas isso não é muito bom, já que pode atribuir um valor à alguma variável já existentente antes da função, logo, chame a função inteira
```js
const randomName = function(num1, num2){
    total = num1 + num2
    return total
}
randomName(451, 215)
console.log(total)
// não é bom fazer assim
const RandomName = function(num1, num2){
    return num1 + num2
}
const total = RandomName(451, 215)
console.log(total)
//assim é melhor
```
### Function expression/anonymous
* `const sum = function(){}` = mesmo que `function`, mas desse modo ela é declarada em formato de variável
    * pode usar qualquer variável: `var | let | const`
    * *sum* é somar
    * **as variáveis que estiverem entre chaves só funcionam dentro da função, parâmetros**
    ```js
    const sum = function(num1, num2){
        console.log(num1 + num2)
    }
    sum(18, 9) 
        //18 fica na posição de 'num1'
        //9 fica na posição de 'num2'
    ```
### Function scope
--- bug --- 
--- tem arquivo de teste sobre ---
### Function hoisting
```js
aColor()
function aColor() {
    console.log('lightblue')
}
```
* Não existe ainda, mas o js "pega" essa var e joga para cima, acontece o 'hoisting'
* Se for um 'function anonymous' usando `const | var | let` dá erro
    * `const | let` = não consegue acessar o valor da função antes dela ter sido chamada/rodada
    * `var` = registra como 'undefined', dá erro já que não entende como função e depois dá erro de novo, resumindo: erro, erro e mais erro
        ```js
        aColor()
        var aColor = function() {
            console.log('lightblue')
        }
        //o que acontece é:
        var aColor //undefined
        aColor() //chega aqui e entende que "aColor não é uma função, é undefined"
        aColor = function() { //aí dá erro aqui, tipo, não era undefinned??
            console.log('lightblue')
        }
        ```
### Arrow function
Function anonymous compact. Usa essa seta: => (arrow); entre os () e os {}
```js
//no compact
const aColor = function() {
    console.log('lightblue')
}
//compact
const aColor = () => {
    console.log('lightblue')
}
```
### Callback function
Callback = chamar de volta.
Uma *function* que passa *parameter* para outra *function*.
```js
function aColor(color) {
    color()
}
aColor(
    () => {
        console.log('lightblue')
    }
)
```
### Function constructor
--- não entendi muito bem ---
Cria objetos dentro de uma função
```js
function ManyPeople(name) {
    this.name = name
}
const jay = new ManyPeople('Jay')
console.log(jay)
const zane = new ManyPeople('Zane')
console.log(zane)
```
## Prototype
--- não entendi muito bem ---
Se colocar '.\_\_proto\_\_' antes de alguma coisa (String, Number, Boolean, etc.) o próprio .js mostra o protótipo, propriedades do valor escrito, mostra cor da fonte e vários etc.
## Type conversion/typecasting | Type coersion
Alteram um tipo de dado para outro dado. 
* Type coersion 
    ```js
    console.log('9' + 5) //95
        //sem a gente ver, js vai pegar o 5, tranformar em String e concatenar os dois
    console.log('9' + '5') //é o mesmo que isso aqui
    ```
* Type conversion/typecasting = quando a gente faz a alteração de um dado para outro de modo explícito, às vezes o js usa ele implicitamente
    ```js
    console.log(Number('9') + 5) //14
        //forço o js a tranformar a String em Number
    console.log(9 + 5) //é o mesmo que isso aqui
    ```
## Manipulações
### Aleatórios
* `.reverse()` = vai pegar o valor (tipo valores de *Array*/função) e inverter a ordem, precisa usar o `.slice()` antes
* `.replace("", "")` = o que estiver entre as primeiras aspas será trocado pelo o que está entre as segundas aspas
    * `.replace(/[]/g, "")` = dentro dos colchetes pode colocar vários caracteres e o **g** é de *global* (tipo remover tal coisa de uma frase **completa**)
* `.slice()` = vai fatiar algo, uma palavra por exemplo (só depois do *slice* que dá para usar o *reverse*)
* `.split("")` = js separa em elementos de *Array* de acordo com o que estiver entre aspas. Ex.: coloco "o", então onde tiver "o" ele vai sumir e criar um elemento
* `.join("")` = js "emenda/junta/liga" os elementos de um *Array* usando o que estiver dentro das aspas 
    ```js
    let text = "The house is cute"
    console.log(text.split(" ")) //["The", "house", "is", "cute"]
    let textArray = ["The", "house", "is", "cute"]
    console.log(textArray.join(" ")) //The house is cute
    ```
* `.push()` = adiciona um item no **final** do *Array*, entre () é o item a ser adicionado, antes do . ponto é o nome do *Array*
* `.unshift()` = adiciona um item no **começo** do *Array*, entre () é o item a ser adicionado, antes do . ponto é o nome do *Array*
* `.pop()` = remove o **último** item do *Array*, se colocar mais de um ele vai removendo sempre o último
* `.shift()` = remove o **primeiro** item do *Array*, se colocar mais de um ele vai removendo sempre o primeiro
* `Math.max()` = detro dos parênteses vão um conjunto de números que vão ser comparados e o maior número entre eles que vai ser retornado
* `.sort()` = vai ordenar elementos de um *Array* de acordo com a verificação de código Unicode, exemplo da [Documentação MDN](https://developer.mozilla.org/pt-BR/docs/Web/JavaScript/Reference/Global_Objects/Array/sort):
    ```js
    var fruit = ['cherries', 'apples', 'bananas'];
    fruit.sort(); 
        // ['apples', 'bananas', 'cherries']
    var scores = [1, 10, 2, 21];
    scores.sort(); // [1, 10, 2, 21]
        // 10 vem antes do 2 porque o 1 vem antes do 2
        // porque '10' vem antes de '2' em ponto de código Unicode.
    var things = ['word', 'Word', '1 Word', '2 Words'];
    things.sort(); // ['1 Word', '2 Words', 'Word', 'word']
        // em Unicode, números vêem antes de letras maiúsculas,
        // as quais vêem antes das minúsculas.
    ```
* `.reduce()` = maior valor e menor valor de um *Array* (eu acho, não entendi muito bem)
    ```js
    //maior valor
    const maxValue = values.reduce(function(prev, current) { 
	    return prev > current ? prev : current; 
        });
    //menor valor
    const minValue = values.reduce(function(prev, current) { 
	    return prev < current ? prev : current; 
        });
    ```
### Number <=> String
De ***String*** para ***Number***:
*   ```js
    let treco = "666" //string
    Number(treco) //agora 666 é Number
    ```
De ***Number*** para ***String***:
*   ```js
    let coiso = 666 //string
    String(coiso) //agora 666 é String
    ```
### Contar caracteres e dígitos
*Number* não recebe `length`, tem que transformar em *String*
```js   
let word = "Sushi"
console.log(word.length) //5
```
### De . para , | Quantidade de casas decimais
* `.toFixed(0)` = número com apenas algumas casas decimais (entre parênteses é o número de casas que eu quero)
* `.replace("", "")` = o que estiver entre as primeiras aspas será trocado pelo o que está entre as segundas aspas
```js
let number = 854.8456129846594
console.log(number.toFixed(4).replace(".", ",")) //854,8456
    //vai aparecer no formato de String, se transformar em Number dá erro por causa da vírgula
```
### Maiúsculas <=> minúsculas
* `.toUpperCase` = tudo maiúsculo
    ```js
    let phrase = "Frase aleatória com sentido pik4"
    console.log(phrase.toUpperCase()) //FRASE ALEATÓRIA COM SENTIDO PIK4
    ```
* `.toLowerCase` = tudo minúsculo
    ```js
    let phrase = "Frase Aleatória Com Sentido Pik4"
    console.log(phrase.toLowerCase()) //frase aleatória com sentido pik4
    ```
### Procurar palavra no texto
* `.includes()` = o que estiver entre parênteses ele vai procurar no texto
```js
let text = "I am hungry o_o"
console.log(text.includes("very"))
    //false
console.log(text.includes("Hungry"))
    //false
console.log(text.includes("hungry"))
    //true
```
### Array manipulations
* `.push()` = adiciona um item no **final** do array, entre () é o item a ser adicionado, antes do . ponto é o nome do Array
* `.unshift()` = adiciona um item no **começo** do array, entre () é o item a ser adicionado, antes do . ponto é o nome do Array
* `.pop()` = remove o **último** item do Array, se colocar mais de um ele vai removendo sempre o último
* `.shift()` = remove o **primeiro** item do Array, se colocar mais de um ele vai removendo sempre o primeiro
* `.slice()` = seleciona alguns elementos do Array, nos parênteses coloca-se dois números:
    * **1º número** = começando do zero, eu coloco a posição do primeiro elemento que eu quero
    * **2º número** = começando do um, eu coloco a posição do último elemento que eu quero, aí ele monta uma "lista" dos elementos
* `.splice()` = remove algum elemento do Array, nos parênteses coloca-se dois números:
    * **1º número** = começando do zero, eu coloco a posição do primeiro elemento que eu quero retirar
    * **2º número** = començando do um e contando a partir do primeiro elemento selecionado, eu escolho a quantidade de elementos que eu quero retirar
* `.indexOf()` = para encontrar a posição de um elemento, entre parênteses coloca o elemento
    ```js
    let car = ['banco', 'volante', 'rádio']
        //(3) ['banco', 'volante', 'rádio']
    car.push('porta-luvas')
        //(4) ['banco', 'volante', 'rádio', 'porta-luvas']
    car.unshift('porta-malas')
        //(5) ['porta-malas', 'banco', 'volante', 'rádio', 'porta-luvas']
    car.pop()
        //(4) ['porta-malas', 'banco', 'volante', 'rádio']
    car.shift()
        //(3) ['banco', 'volante', 'rádio']
    console.log(car.slice(1, 3))
        //(2) ['volante', 'rádio']
    car.splice(2, 1)
        //(2) ['banco', 'volante']
    console.log(`A posição do volante é: ${car.indexOf('volante')}`)
        //A posição do volante é: 1
    ```
## Expressões e Operadores
Qualquer linha de código que resolve algo.
### Expressões
Pode colocar ';' (ponto e vírgula) depois de qualquer expressão, afinal não muda nada.
* único caso que é obrigatório: quando tem uma função auto-executável depois da expressão
* Algumas expressões: `let | new`
    * `new` = cria um novo objeto de uma função
### Operadores
* **Binary** 
    Preciso de dois valores para o operador ficar entre eles
    ```js
    let number = 6
    console.log(number + 12)
        //18
    ```
* **Unary**
    Preciso de somente um valor e uso o operador para "incrementar/decrementar" o valor
    * `typeof | delete | ...`
    ```js
    let number = 6
    console.log(++number)
        //12
    ```
    ```js
    let number = 6
    console.log(typeof number)
        //number
    ```
* **Ternary**
    Recebe três expressões, esse exemplo é o único Ternary
    ```js
    console.log(true ? 'alo' : 'nada')
        //alo
    console.log(false ? 'alo' : 'nada')
        //nada
    ```    
#### Grouping operator ( )
Operador que agrupa expressões, parênteses. Pode ser usado em String.
Uso os parênteses para indicar qual operação eu quero que faça primeiro:
```js
//normal
let calc = 3 + 3 * 6
console.log(calc) 
    //3 + 18
    //21
//usando grouping operator
calc = (3 + 3) * 6
console.log(calc)
    //6 * 6
    //36
```
#### Operadores Aritméticos (binary)
* `nº * nº` = multiplicação
* `nº / nº` = divisão
* `nº + nº` = soma
* `nº - nº` = subtração
* `nº % nº` = resto da divisão
* `nº ** nº` = exponencial, isso elevado a isso
* `nº++` ou `++nº` = incremento, o número soma +1 **(unary)**
* `nº--` ou `--nº` = decremento, o número subtrai -1 **(unary)**
    * Postfix increment:
    ```js
    let x = 3;
    const y = x++;
    // x is 4; y is 3
    let x2 = 3n;
    const y2 = x2++;
    // x2 is 4n; y2 is 3n
    ```
    * Prefix increment:
    ```js
    let x = 3;
    const y = ++x;
    // x is 4; y is 4
    let x2 = 3n;
    const y2 = ++x2;
    // x2 is 4n; y2 is 4n
    ```
    * Diferença entre o *postfix* e o *prefix* increment:
    ```js
    let thing = 6
    console.log(thing++) //6, ele só vai somar depois dessa linha
    console.log(thing)   //7
        //ou
    console.log(++thing) //7, já soma nessa linha
    console.log(thing--) //7, ele só vai subtrair depois dessa linha
    console.log(thing)   //6
        //ou
    console.log(--thing) //6, já subtrai nessa linha
    ```
#### Operadores de Comparação (binary)
Vai comparar valores e retornar a resposta como Boolean.
* `__ == __` = \___ é igual a \___?
* `__ != __` = \___ é diferente de \___?
* `__ === __` = \___ é estritamente igual a \___?, compara os valores e o **tipo** do elemento
* `__ !== __` = \___ é estritamente diferente de \___?, compara os valores e o **tipo** do elemento
* `nº > nº` = \___ é maior que \___?
* `nº < nº` = \___ é menor que \___?
* `nº >= nº` = \___ é maior ou igual a \___?
* `nº <= nº` = \___ é menor ou igual a \___?
```js
let six = 6
let twelve = 12
console.log(twelve == 6)      //false
console.log(six == "6")       //true
console.log(six != twelve)    //true
console.log(six != 6)         //false
console.log(twelve != "12")   //false
console.log(six === "6")      //false; valor igual, mas tipo diferente (six = variável que recebe Number | "6" = String)
console.log(six === 6)        //true; valor igual, a variável recebe Number, então é igual
console.log(twelve !== "12")  //true
console.log(twelve !== 12)    //false
console.log(six < twelve)     //true
console.log(six > twelve)     //false
console.log(six >= 6)         //true
console.log(twelve <= 6)      //false
console.log(six <= twelve)    //true
```
#### Operadores de atribuição (binary)
* `__ = __` = \___ recebe \___
* `__ += __` = \___ soma  \___, vai pegar o valor antigo e somar com o novo
* `__ -= __` = \___ subtrai \___, vai pegar o valor antigo e subtrair o novo
* `__ *= __` = \___ multiplica \___, vai pegar o valor antigo e multiplicar com o novo
* `__ /= __` = \___ divide \___, vai pegar o valor antigo e dividir pelo novo
* `__ %= __` = \___ resto da divisão \___, vai pegar o valor antigo, divide pelo novo e mostrar o resto da divisão
```js
let x    //x é undefined
x = 6    //x recebe 6
x += 6   //x + 6 = 12
x -= 6   //x - 6 = 6
x *= 6   //x * 6 = 36
x /= 6   //x / 6 = 6
x %= 4   //x % 4 = 2
x **= 6  //x ** 6 = 64
```
#### Operadores lógicos (binary)
Dois valores do tipo Boolean que quando verificados vão dar uma resposta de tipo Boolean também
* `__ && __` = AND, tenho \___ e \___?
* `__ || __` = OR, tenho \___ ou \___?
* `__ ! __` = NOT, \___ is *true*? now is *false* | \___ is *false*? now is *true*
```js
//AND
let cheese = true             //tenho queijo
let coffee = true             //tenho café
console.log(cheese && coffee) //true
```
```js
//AND
let cheese = false            //não tenho queijo
let coffee = true             //tenho café
console.log(cheese && coffee) //false
```
```js
//OR
let cheese = false            //não tenho queijo
let coffee = true             //tenho café
console.log(cheese || coffee) //true
```
```js
//OR
let cheese = true             //tenho queijo
let coffee = true             //tenho café
console.log(cheese || coffee) //true
```
```js
//OR
let cheese = false            //não tenho queijo
let coffee = false            //não tenho café
console.log(cheese || coffee) //false
```
```js
//NOT
let cheese = true             //tenho queijo
let coffee = false            //não tenho café
console.log(!coffee)          //true
console.log(!cheese)          //false
```
#### Operadores condicionais (ternary)
Dependendo da condição, mostra 1 valor de 2 possíveis. 
* `condition ? value1 : value2` = se \___ acontecer = *value1*, se não = *value2*
```js
let cheese = true
let coffee = true
const niceBreakfast = cheese && coffee ? 'café da manhã pik4' : 'café da manhã brox4'
console.log(niceBreakfast) //café da manhã pik4
```
```js
let cheese = true
let coffee = false
const niceBreakfast = cheese && coffee ? 'café da manhã pik4' : 'café da manhã brox4'
console.log(niceBreakfast) //café da manhã brox4
```
```js
let cheese = false
let coffee = true
const niceBreakfast = cheese || coffee ? 'café da manhã pik4' : 'café da manhã brox4'
console.log(niceBreakfast) //café da manhã pik4
```
#### Operadores para String (binary)
Concatenação. 
```js
let sun = 'Sun'
sun + '.SA'
console.log(sun + 666) //transforma os Number em String e junta tudo
    //Sun.SA666
```
#### Falsy and Truthy
`false = 0`
`true = 1`
* FALSY = quando um valor é considerado ***false***em contextos onde o *Boolean* é obrigatório (condicionais e loops)
    ```js
    console.log(true ? 'verdadeiro' : 'falso')  //verdadeiro
    console.log(false ? 'verdadeiro' : 'falso') //falso
        //EM TODOS OS EXEMPLOS ABAIXO O .js PRECISA DE ALGUMA COMPARÇÃO, TIPO:
        //console.log(0 == false ? 'verdadeiro' : 'falso')
        //MAS O VALOR BOOLEANO QUE É "OBRIGATÓRIO" NÃO EXISTE
        //ENTÃO TUDO SE TORNA FALSY
    console.log(0 ? 'verdadeiro' : 'falso')             //falso
    console.log(-0 ? 'verdadeiro' : 'falso')            //falso
    console.log("" ? 'verdadeiro' : 'falso')            //falso
    console.log(null ? 'verdadeiro' : 'falso')          //falso
    console.log(undefined ? 'verdadeiro' : 'falso')     //falso
    console.log(NaN ? 'verdadeiro' : 'falso')           //falso
    ```
* TRUTHY = quando um valor é considerado ***true*** em contextos onde *Boolean* é obrigatório (condicionais e loops)
    ```js
    console.log(true ? 'verdadeiro' : 'falso')  //verdadeiro
    console.log(false ? 'verdadeiro' : 'falso') //falso
        //EM TODOS OS EXEMPLOS ABAIXO O .js PRECISA DE ALGUMA COMPARÇÃO, TIPO:
        //console.log({} == true ? 'verdadeiro' : 'falso')
        //MAS O VALOR BOOLEANO QUE É "OBRIGATÓRIO" NÃO EXISTE
        //ENTÃO TUDO SE TORNA TRUTHY
    console.log({} ? 'verdadeiro' : 'falso')            //verdadeiro
    console.log([] ? 'verdadeiro' : 'falso')            //verdadeiro
    console.log(1 ? 'verdadeiro' : 'falso')             //verdadeiro
    console.log(3.23 ? 'verdadeiro' : 'falso')          //verdadeiro
    console.log("0" ? 'verdadeiro' : 'falso')           //verdadeiro
    console.log("false" ? 'verdadeiro' : 'falso')       //verdadeiro
    console.log(-1 ? 'verdadeiro' : 'falso')            //verdadeiro
    console.log(Infinity ? 'verdadeiro' : 'falso')      //verdadeiro
    console.log(-Infinity ? 'verdadeiro' : 'falso')     //verdadeiro
    ```
#### Precedência de operadores
De cima para baixo, do mais importante ao menos importante.
* `( )` grouping
* `! ++ --` negação e incremento
* `* /` multiplicação e divisão
* `+ -` adição e subtração
* `< <= > >=` relacional
* `== != === !==` igualdade
* `&&` AND 
* `||` OR
* `?:` condicional
* `= += -= *= %=` assignment (atribuição) 
## Condicionais e controle de fluxo
### If and Else
Se isso acontecer faz isso, se não, faz aquilo.
```js
let temperature = 37.2
    if(temperature >= 37.5) {
        console.log('febre alta')
    } else if(temperature < 37.5 && temperature >= 37) {
        console.log('febre moderada')
    } else {
        console.log('saudável')
    }
//febre moderada
```
```js
//OUTRO JEITO DE FAZER 
let temperature = 37.2
let highTemperature = temperature >= 37.5
let mediumTemperature = temperature < 37.5 && temperature >= 37
    if(highTemperature) {
        console.log('febre alta')
    } else if(mediumTemperature) {
        console.log('febre moderada')
    } else {
        console.log('saudável')
    }
//febre moderada
```
### Switch
Lista de vários casos, como se fossem vários `if` e `else`.
* `case '___'` = são os casos, coloco os códigos para executar caso minha expressão cumpra sua "condição", posso por o que eu quiser entre as aspas
* `break` = delimita o `case`, se não tiver o *break* no final de um *case* ele segue para executar o próximo *case*
* `default` = se a expressão não satisfazer nenhum dos casos, o *default* faz a função do *else*
```js
switch() {
    case 'a':
        //código
        break
    case 'b':
        //código
        break
    default:
        //código
        break
}
```
### Throw and Try/Catch
Vai tentar executar um bloco de código, se der algum erro ele vai ser disparado e o erro vai ser capturado.
* Throw = lançar, disparar
* Try = tentar
* Catch = capturar, pegar
```js
function iDontKnow(idk = '') {
    if (idk === '') {
        throw new Error("a variável está vazia.")
    }
}
try {
    iDontKnow()
} catch(e) {
    console.log(e)
}
```
Não entendi muito bem, mas é tipo, deu o erro, mas a minha aplicação continua rodando, o erro não afeta no funcionamento do código.
## Estruturas de repetição
### For
* For = para, em inglês
* `for(let a=6; a < 12; a++)` = estrutura de repetição
    * `let a=6` = cria uma variável, **a** foi só um nome aleatório, essa variável tem que ter algum valor, escolhi o 6
    * `a < 12` = a variável é menor que 12, então o código vai rodar até ele ser maior que 12
    * `a++` = isso vai ficar somando mais 1 na variável, e é assim que em algum momento ela vai ficar com um valor maior que 12
    * `break` = caso tenha um *if* dentro do *for*, ele vai parar a execução do loop
    * `continue` = caso tenha um *if* dentro do *for*, ele vai pular a execução do momento e passar para a próxima
```js
for(let a=6; a < 12; a++) {     //vai mostrar de 6 à 12
    console.log(a)
}
for(let b=60; b > 0; b--) {     //vai mostrar de 60 à 0
    console.log(b)
}
for(let c=30; c > 0; c--) {     //iria mostrar de 30 à 0, mas quando 
    if(c === 15) {              //chegar no 15 ele vai parar de executar
        break;
    }
    console.log(c)
}
for(let d=0; d < 10; d++) {    //vai mostrar de 0 à 10, mas vai ignorar o número 7 
    if(d === 7) {
        continue;
    }
    console.log(d)
}
```
### While
* While = enquanto, em inglês
Faz mais sentido usar o *while* ao invés do *for* quando a gente não sabe a hora de parar.
```js
let a = 0
while(a < 6) {              //vai mostrar de 0 à 6
    console.log(a)
    a++;
}
let b = 56261648485691661   //não tem como eu saber quando que 
while(a > 6) {              //isso vai parar, por isso uso 'while'
    console.log(a)
    b /= 66;
}
```
### For...of
Vai mostrando parte por parte de uma coisa toda. Tipo as letras de uma palavra, ou os elementos de um *Array*
```js
let name = 'Steven'
let names = ['Ametist', 'Garnet', 'Pearl', 'Connie']
for(let oneLetter of name) {        //vai mostrar uma letra de cada vez
    console.log(oneLetter)          //S, t, e, v, e, n (um em cada linha)
}
for(let characters of names) {      //vai mostrar um nome do Array de cada vez
    console.log(characters)         //Ametist, Garnet, Pearl, Connie (um em cada linha)
}
```
### For...in
Cria um loop em cima de um objeto, pegando as propriedades deste objeto. 
```js
let character = {
    name: 'Rainbow Dash',
    power: 'Agilidade',
    type: 'Pony',
}
for(let property in character) {       //vai mostrar as propriedades do objeto
    console.log(property)              //name, power, type (um em cada linha)
    console.log(person[property])      //essa parte de baixo mostra os 
                                       //valores das propriedades
    //no final fica: name, Rainbow Dash, power, Agilidade, type, Pony (um em cada linha)
}
```
## DOM = Document Object Model
* HTML convertido para um Objeto JavaScript, 
* API que representa e interage com o HTML
    * API seria tipo, tocar uma campainha ao chegar na casa de alguém, é a campainha que avisa ao morador que a visita chegou, o API é esse obejeto (campainha) que está entre o "sistema de interação" morador-visita
* Estrutura de dados do tipo árvore, criada pelo browser (cada seta é chamada de nó, de onde saem as ramificações, ou filhos)
    * Exemplo:
    * árvore
    ```
                    title
                        ^
    document > html > head > meta
                v       v
            body    meta
                v          
            title    
                
    ```
    ```html
    <!DOCTYPE html>
    <html lang="pt-br">                       <!--parte em html-->
        <head>
            <meta charset="UTF-8">
            <meta name="viewport" content="width=device-width, initial-scale=1.0">
            <title>Title</title>
        </head>
        <body>
            <h1 class="first" id="lalalapipoca">Title</h1>
            <p class="first" id="pipocalalala">Coisas escritas ;-;</p>
            <input type="text">
            <script>                                 //parte em JavaScript 1
                document.body
            </script>
            <script src="caminhoDoDocEmJS"></script> <!--parte em JavaScript 2 (tem que estar no final do documento, antes de fechar o body-->
        </body>
    </html>
    ```
* O JavaScript usa a DOM justamente para se conectar e poder interagir com o HTML
    * Tornando possível a manipulação do HTML por meio do JavaScript
* Só é possível programar para a Web porque existe a DOM
* DOM também tem suas prórias propriedades e métodos 
### Selecionar elementos
* `document.getElementById('nomeDaId')` = serve para selecionar um elemento do HTML e manipular ele em um documento JS, pode colocar ele em uma `const` para não precisar colocar tudo o tempo todo
    * Retorna o próprio **element**
* `document.getElementByClassName('nomeDaClass')` = mesma coisa do `id`, só que a `class` pega mais elementos e o `id` só um
    * Retorna em formato de **HTMLCollection**
* `document.getElementByTagName('nomeDaTag')` = mesma coisa do `id`, só que a `tag` os elementos pelo comando
    * Retorna em formato de **HTMLCollection**
* `document.querySelector('nomeSelector')` = pega pelo Selector, igual CSS (com # e .), mas só vai pegar o primeiro que ele achar
    * Retorna o próprio **element**, dizem que este tem um MINÚSCULO atraso em relação ao `.getElementById`, é bom pensar nisso quando for fazer um programa
* `document.querySelectorAll('nomeSelector')` = pega pelo Selector, igual CSS (com # e .), esse pega todos os trecos 
    * Dá para usar o `.forEach()` só nesse, porque só ele retorna em formato de **Nodelist**
```js
const elementA = document.getElementById('lalalapipoca')
const elementB = document.getElementByClassName('first')
const elementC = document.getElementByTagName('meta')
const elementD = document.querySelector('.first')
const elementE = document.querySelector('meta')
const elementF = document.querySelector('[src]')
const elementG = document.querySelectorAll('script')
console.log(elementA) //vai mostrar só o 'h1'
console.log(elementB) //vai mostrar o 'h1' e o 'p', parecendo um 'Array', mas é um 'HTMLCollection'
console.log(elementC) //vai mostrar os 2 'meta' que existem no 'head'
console.log(elementD) //vai mostrar o mesmo do 'ElementB'
console.log(elementE) //vai mostrar só um 'meta', porque o 'querySelector' pega o primeiro que ele achar
console.log(elementF) //vai mostrar negócio da linha 956 (parte em JavaScript 2)
console.log(elementG) //vai mostrar os 2 'script' que tem
```
### Manipulações
* `.textContent = "algo"` = possibilita alterar o que esteja escrito em algum local
```js
//elementA = h1 -> Title
elementA.textContent = "I'm not a title"
console.log(elementA.textContent) //I'm not a title
```
* `.textContent += "algo"` = possibilita adicionar algo em algum lugar
```js
const elementH = document.getElementById('pipocalalala') //p, Coisas escritas ;-;
elementH.textContent += "... ou não O_O"
console.log(elementH.textContent) //Coisas escritas ;-;... ou não O_O
```
* `.innerText = "algo"` = vai trocar o texto interno de algo (não sei a diferença dele para o `.textContent = "algo"`)
* `.innerHTML = "algo"` = vai trocar o texto interno e o HTML interno
```js
//elementH = p -> Coisas escritas ;-;
elementH.innerHTML = "... será? <small>heheheheh</small>" 
console.log(elementH.innerHTML) // o que está entre o '<small>' vai ter a fonte menor
```
* `.value = "algo"` = altera o valor de algum `input`
    * Caso o `input`, além do `type`, tenha um `value="algo"`, o `.value` vai mostrar o que tem
    * Se quiser alterar o `value` precisa colocar o `= "algo"`
* `.setAttribute('algo')` = usado para adicionar atributos a algo
```js
const header = document.querySelector('header')
header.setAttribute('id', 'coiso') //colocando o 'id' com o nome de "coiso" no 'header'
const headerID = document.querySelector('#coiso') //criando 'const' para poder verificar se o 'id' foi adicionado
console.log(headerID) 
    //<header id="coiso">_</header> ('id' adicionado com sucesso)
    //ou seja, o 'header', originalmente, não tinha 'id', porém agora ele tem
```
* `.getAttribute('algo')` = usado para selecionar os atributos de algo
```js
//elementH = p -> Coisas escritas ;-;
console.log(elementH.getAttribute('class')) //first
```
* `.removeAttribute('algo')` = usado para remover os atributos de algo
### Change styles
* `.style` = permite adicionar CSS no elemento selecionado
```html
<head>
    <style>
        body {
            background-color: gray; /*assim para CSS no HTML*/
        }
        .blue {
            background-color: darkblue;
        }
    </style>
</head>
<body style="background-color: gray"> <!--assim no HTML-->
    <h1>Something</h1>
    <p>Idk</p>
</body>
```
```css
body {
    background-color: gray; /*assim no CSS*/
}
```
```js
const elementI = document.querySelector('body')
elementI.style.backgroundColor = "gray" //assim no JS
```
* `.classList` = mostra todas as `class` que determinado elemento possui (retorna em formato de **DONTokenList**)
    * `add('nomeClass')` = adiciona uma `class` ao elemento, para adicionar mais de uma classe é só separar entre vígulas
    * `remove('nomeClass')` = remove a `class` selecionada do elemento
    * `.toggle('nomeClass')` = se existir uma `class` com esse nome, ele tira, se não existir, ele adiciona
    ```js
    elementI.classList.add('blue') //vai adicionar a 'class' no 'body'
    elementI.classList.remove('blue') //vai remover a 'class' do 'body'
    elementI.classList.toggle('blue') //como a última coisa que fez foi remover, agora ele vai adicionar
    ```
### Browse by Parents
* `.parentNode` = vai mostrar o **nó pai** do elemento
* `.parentElement` = vai mosrtrar o **elemento pai** do elemento
```js
console.log(elementI.parentNode) //<html lang="en">
console.log(elementI.parentElement) //<html lang="en">
```
### Browse by Childs
* `.childNodes` = vai mostrar todos os **nós filhos** do elemento, formato de **NodeList**
* `.children` = vai mostrar todos os **nós filhos** do elemento, formato de **HTMLCollection**
* `.firstChild` = vai mostrar o primeiro **nó filho** inteiro do elemento
* `.firstElementChild` = vai mostrar o primeiro **elemento filho** inteiro do elemento
* `.lastChild` = vai mostrar o último **nó filho** inteiro do elemento
* `.lastElementChild` = vai mostrar o último **elemento filho** inteiro do elemento
```js
console.log(elementI.childNodes) 
    //NodeList(4) [text, h1, text, p]
    //esse 'text' é o Enter que tem do 'body' para o 'h1'
console.log(elementI.children)
    //HTMLCollection(2) [h1, p]
    //dessa forma os 'text' (que aparecem por causa do Enter, espaços vazios) são ignorados
console.log(elementI.firstChild)
    //#text
    //por conta do Enter, vai mostrar 'text', se não tivesse o Enter ia mostrar:
    //<h1>Something</h1>
console.log(elementI.firstElementChild)
    //<h1>Something</h1>
    //dessa forma os 'text' (que aparecem por causa do Enter, espaços vazios) são ignorados
console.log(elementI.lastChild)
    //<p>Idk</p>
    // ignora os 'text'
console.log(elementI.lastElementChild)
    //<p>Idk</p>
    // ignora os 'text'
```
### Browse by Brothers
* `.nextSibling` = vai mostrar o próximo **nó irmão** do elemento
* `.nextElementSibling` = vai mostrar o próximo **elemento irmão** inteiro do elemento
* `.previousSibling` = vai mostrar o **nó irmão** anterior do elemento
* `.previousElementSibling` = vai mostrar o **elemento irmão** anterior do elemento
```js
const elementJ = document.querySelector('h1')
console.log(elementJ.nextSibling)
    //#text
    //por conta do Enter, vai mostrar 'text'
console.log(elementJ.nextElementSibling)
    //<p>Idk</p>
    // ignora os 'text'
const elementK = document.querySelector('p')
console.log(elementK.previousSibling)
    //#text
    //por conta do Enter, vai mostrar 'text'
console.log(elementK.previousElementSibling)
    //<h1>Something</h1>>
    // ignora os 'text'
```