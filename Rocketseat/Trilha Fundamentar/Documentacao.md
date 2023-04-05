# Trilha Fundamentar 
## HTML
### Comandos
* **`<h1>`Título`</h1>`** = vai de h1 até h6, dá para escrever títulos

* **`<p>`Texto`</p>`** = para fazer parágrafo

* **`<ol>`comandos li`</ol>`** = lista ordenada, com números, ex.:
    1. alguma coisa

* **`<ul>`comandos li`</ul>`** = lista não ordenada, com pontinhos, ex.:
    * outra coisa

* **`<li>`algo para listar`</li>`** = tem que estar dentro de `ol` ou `ul`, ele lista o que estiver dentro

* **`<dl>`dt e dd`</dl>`** = lista de descrições 

* **`<dt>`título`</dt>`** = título do que vai ser descrito

* **`<dd>`descrição`</dd>`** = descrição do título

* **`<!--`comentário`-->`** = os comentários não aparecem na página que está sendo desenvolvida, aparecem somente no código

* **`<em>`palavra ou frase`</em>`** = itálico

* **`<strong>`palavra ou frase`</strong>`** = negrito

* **`<div>`alguma coisa aqui`</div>`** = serve para separar elementos em blocos

* **`<span>`alguma coisa aqui`</span>`** = serve para separar elementos no código, mas aparece em linhas no site

* **`<br>` ou `</br>`** = quebra de linha

* **`lorem`** = texto aleatório

* **`<code>`alguma coisa `</code>`** = código simples inline

* **`<pre><code>`alguma coisa`</code></pre>`** = código mais coplexo, box form

* **`<address>`contato`</address>`** = tipo, eu criei essa página, vou deixar meu nome e email aqui

* **`<button></button>`** = cria um botão

#### Links, imagens, citações e abreviações
* **`<a href=”link”>`título do link em azul`</a>`** = link

* **`<a href=”link” target=”_blank/_self”>`título do link em azul`</a>`** = link normal, só que se tiver o *target=”_blank”*, quando clicar no link ele abre uma nova guia e o *target=”_self”*, quando clicar ele abre o site na mesma guia, que é o padrão

* **`<img src=”https://source.unsplash.com/random” alt="">`** = imagem aleatória 

* **`<blockquote cite=”link”>`citação`</blockquote>`** = faz citação por aí

* **`<cite>`citação`</cite>`** = faz citação por aí, também

* **`<q>`citação`</q>`** = faz citação por aí, também

* **`<abbr title=”significado de uma abreviação”>`abreviação`</abbr>`** = digita algo em “abreviação”, na parte do significado explica o que é, se deixar o mouse parado em cima dá para ver

#### Elementos Vazios (não tem o fechamento </>)






## CSS
ghjy
## Nem tudo são píxeis
gjjy
## Uma caixa dentro da outra
jgjg
## Agora sim, cores
### Cores
#### Tipos
* background-color = caixas
* color = textos
* border-color = caixas

#### Valores
* palavra-chave = blue, transparent, gray
* hexadecimal 
* funções = rgb, rgba, hsl, hsla

#### Anotações

* **inheriit** = herança, faz herdar a cor do elemento anterior

* **initial** = dá ao elemento a sua cor inicial

* **unset** = tipo, não vou definir cor para esse elemento

* **currentcolor** = ele usa a cor que estiver no momento
    * Ex.: o \<p\> fica com a cor azul, que é a cor da \<div\>, dá no mesmo se tirar o `currentcolor`
    ```html
    <div>
        <h1>Título</h1>
        <p>Texto</p>
    </div>
    ```
    ```css
    div {
        color: green;
    }
    h1 {
        color: lightblue;
    }
    p {
        color: currentcolor;
    }
    ```

* **hexadecimal** = #000000
    * vai de 0 até F
        * as letras vão representar o alpha, a transparência da cor
    * 1º dígito = vermelho
    * 2º dígito = verde
    * 3º dígito = azul
        * #000099 = 0 red, 0 green, 99 blue

* **rgb** = (00, 00, 00, 0.0) [0.0 ou %]
    * Red - Green - Blue
    * vai de 0 até 255
        * 1º dígito = vermelho
        * 2º dígito = verde
        * 3º dígito = azul
        * 4º dígito = transparência

* **hsl** = (00, 0%, 0%, 0.0) [0.0 ou %]
    * Hue - Saturation - Lumiance
    * ![Rodinha do hsl](https://www.researchgate.net/publication/335024102/figure/fig2/AS:789313210036225@1565198342617/a-Color-wheel-of-hue-b-The-HSL-model-Creative-Commons.ppm)
        * 1º dígito:
            * 0 graus = vermelho
            * 120 graus = verde
            * 240 graus = azul
        * 2º dígito = saturação
        * 3º dígito = luminosidade
        * 4º dígito = transparência

#### Sites 
* [Documentação MDN](https://developer.mozilla.org/en-US/docs/Web/CSS/color_value)
* [Conversor de HEX | RGB | HSL | CMYK](https://convertacolor.com/)

### Background
Todo background já começa transparente.

#### Valores
* **`background-color`** = cor do fundo
    ```css
    header {
        background-color: hsl(270, 50%, 25%, 2%);
    }
    ```

* **`background-image`** = imagem no fundo
    ```css
    header {
        background-image: url(https://www.shutterstock.com/image-photo/surreal-image-african-elephant-wearing-260nw-1365289022.jpg);
        background-repeat: no-repeat;
    }

* **`background-repeat`** = a `background-image` fica se repentindo automaticamente, e eu posso mudar isso com: 
    * `no repeat` = a imagem não se repete
    * `repeat-y` = a imagem se repete somente no eixo y, vertical
    * `repeat-x` = a imagem se repete somente no eixo x, horizontal

* **`background-position`** = posso alterar a posição com: 
    * right
    * left
    * top
    * bottom
    * center
        * elas alteram de acordo com coordenadas, primeiro X depois Y
    ```css
    /*Ex.:*/
    header {
        background-position: center top;
    }
    /*Jeito "errado"*/
    headeer {
        background-position: top left;
    }
    /*Não tem "em cima" na horinzontal, nem "esquerda" na vertical*/
    ```

* **`background-size`** = para mudar o tamanho
    * contain = o conteúdo do background fica dentro dele, dentro de suas bordas
    * cover = a imagem aumenta de tamanho até cobrir todo o background
    * % = se só tiver 0%, será aplicado na horizontal e se tiver 0% 0%, será aplicado na horizontal e na vertical
    * 0em = tamanho 
    * 0px = tamanho

* **`background-origin`** = alterar o "desde quando" o conteúdo começa a surgir
    * border-box = o conteúdo começa dos limites externos das bordas da caixa
    * content-box = padrão, fica nos limites internos da borda, deixando o espaço do padding
    * padding-box = fica do tamanho do padding

* **`background-clip`** = altera o tamanho desde o conteúdo, até a cor da caixa
    * border-box = padrão
    * content-box = deixa o espaço do padding "em branco"/livre
    * padding-box = vai ir até o padding, eliminando a parte do fundo do background

* **`background-attachment`** = para dizer se o conteúdo/imagem do background se movimenta ou não quando usa o scroll do mouse
    *scroll = padrão, se eu rolo o scroll a imagem se movimenta junto
    * fixed = quando eu rolo o scroll a imagem continua "presa" no fundo da tela.

* shorthand
    ```css
    header {
        background-color:  hsl(270, 50%, 25%, 2%);
        background-image: url(https://www.shutterstock.com/image-photo/surreal-image-african-elephant-wearing-260nw-1365289022.jpg);
        background-repeat: no-repeat;
        background-position: center bottom;
        background-size: contain;
        background-origin: border-box;
        background-clip: content-box;
        background-attachment: fixed;
        /*Todas essas linhas fazem o mesmo papel da próxima. Tudo separado por espaço!*/ 
        background: hsl(270, 50%, 25%, 2%) url(https://www.shutterstock.com/image-photo/surreal-image-african-elephant-wearing-260nw-1365289022.jpg) no-repeat center bottom / contain border-box content-box fixed
        /*Nos valores de origin e clip, o próprio css vai usar o primeiro valor para origin e o segundo para clip, respectivamente. Se só tiver um valor, ele aplica a mesma coisa para origin e clip.*/
        /*Caso algo tenha espaço, como o backgroud-position, é só separar o próximo comando usando " / "*/
    }
    ``` 

* gradient = faz mudar de uma cor para outra
    ```css
    header {
        background: linear-gradient (red, yellow)
    }
    /*Vai ficar parecendo um pôr do Sol.*/
    ```
    * pode colocar uma angulação antes das cores -> (45deg, red, yellow), desse jeito começa do canto inferior esquerdo e vai para o superior direito
    * linear = degradê em linha reta
    * radial = degradê em círculo
    * se quiser colocar ele no shorthand é só colocar no começo e separar ele do próximo comando usando vírgula