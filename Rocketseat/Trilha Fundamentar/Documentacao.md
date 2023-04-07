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
* **`<img src=`.png aqui`alt=`texto/título para a imagem`>`** = imagem
* **`<input type=`text`>`** = *não sei*
#### Atributos Globais Mais Utilizados
* [Documentação MDN, atributos globais](https://developer.mozilla.org/pt-BR/)
* **`class`nome-classe** = cria uma classe, para criar estilo css, ou para acessar no js
* **`contenteditable`** = *não sei*
* **`data-`qualquer-nome-aqui** = *não sei*
* **`hidden`** = esconde uma tag
* **`id`** = tipo subtópicos do class, se colocar `<li><a href=”#`__`”>`Título`</a></li>` no começo e depois um título com `<h1 id=”`___`”>Título</h1>` e nos __ colocar a mesma “etiqueta”, ele vira um “sumário interativo”
* **`style`** = dá para estilizar o texto
* **`tabindex=`número** = se apertar tab, ele segue na ordem dita pelo código
* **`title=`alguma coisa** = textinho que aparece quando deixa o cursor do mouse parado em cima de algo
#### Conteúdos do Texto e Caracteres Reservados
* `&nbsp;` = é como se fosse o TAB que a gente dá no texto 
* `&alt;` = coloca < no texto, se colocar o caractere direto pode bugar o código
* `&gt;` = coloca > no texto, se colocar o caractere direto pode bugar o código
* `&amp;` = coloca & no texto, se colocar o caractere direto pode bugar o código
* `&quot;` = coloca “ no texto, se colocar o caractere direto pode bugar o código
* `&apos;` = coloca ‘ no texto, se colocar o caractere direto pode bugar o código
#### Anatomia de um HTML
* **`<!DOCTYPE html>`** = é necessário para que um navegador entenda que você está trabalhando com HTML
* **`<html`lang=”en”`>`head e body`</html>`** = o lang=”en” configura a linguagem para inglês, pt para português
* **`<head>`___`</head>`** = *cabeça*, contém configurações importantes para o site, mas que o usuário não vê 
    * **`<meta `charset=”utf-8”`>`** = comando que vai possibilitar que o site receba vários tipos de caracteres especiais, podem ter outros charset's
    * **`<meta name=”viewport” content=”width=device-width,initial-scale=1.0”>`** = possibilita que o site seja visto tanto em celulares, quanto em computadores, etc.
    * **`<meta name=”author” content=”`nome`”>`** = colocar o author da página no código
    * **`<title>`Título`</title>`** = comando que dá o nome para a guia do Chrome, por exemplo
    * **`<link rel=”icon” href=”`link ou caminho da imagem`”/>`** = comando que possibilita colocar um favicon básico, aquela imagem pequena na guia do Chrome junto com o título
        * **`<link rel=”apple-touch-icon-precomposed” href=”`link ou caminho da imagem`”/>`** = mesmo do de cima, mas para iPhone não-retina, iPod Touch e dispositivos 2.1+; tem várias outras opções e resoluções na parte “Trilha Fundamentar > Guia Estelar de HTML > Cabeçalho > Favicon
* **`<body></body>`** = *corpo*, aqui ficam as coisas que o usuário vai ver e ter acesso, conteúdo `<p> | <h1> | ...`
* **`!`** = no VSC ele já faz esse "cabeçalho" automaticamente
#### Tabela
* `<table></table>` = para começar a tabela
* `<caption></caption>` = título da tabela
* `<colgroup></colgroup>` = dá para estilizar a coluna
* `<col>` = não acontece nada com a coluna
* `<col style=”background-color: `cor`”>` = vai colorir o fundo da coluna (background) de acordo com a cor que estiver em cor (em inglês), pode colocar um  span=nº” depois de col, para pintar mais colunas
* `<tr></tr>` = para escrever na linha, mantém na mesma linha
* `<thead></thead>` = cabeçalho, todos os `<th>` são cabeçalhos, que descrevem o conteúdo da tabela
* `<th></th>` = primeira linha, descreve os itens da tabela em colunas separadas, para os títulos
* `<th rowspan=”nº”></th>` = faz a coluna ocupar o tanto de linhas no nº
* `<th colspan=”nº”></th>` = faz a linha ocupar o tanto de colunas no nº
* `<th colspan=”nº” scope=”colgroup”></th>` = mesmo do de cima, mas o scope identifica que a coluna tem função de agrupar outras colunas, tipo em uma coluna tem mais duas colunas
* `<th scope=”col”></th>` = no exemplo: uma coluna tem mais duas colunas, o scope serve para identificar esses dois cabeçalhos de colunas
* `<th scope=”row”</th>` = para identificar que é um cabeçalho de linha
* `<tbody></tbody>` = corpo
* `<td></td>` = escreve na linha da tabela, em colunas separadas, para os dados
* `<tfoot></tfoot>` = rodapé, usa `<tr> | <td>` também
## CSS
* CSS = Cascading Style Sheet (Folha de Estilo em Cascata)
* “HTML é a estrutura e o CSS é a beleza”
* Não é linguagem de programação, é uma linguagem style sheet.
* Para olhar o CSS por trás de um site bonito: F12 aí vai em “Styles”.
* **`/*comentário*/`** = comentários não afetam o código
### Anatomia CSS
**Lembrete:** `<div id= “random_name” class=”random_name_2”>`comandos aqui`</div>`
* `selector { property: value; }` = no selector coloca algum comando do HTML, aí o que colocar em property e value vai mudar em todos os comandos do HTML, declaration é tudo que está entre {}
    * `*` = global selector (valor: 0)
    * `h1 | h2 | p | div` = element/type selector (valor: 1)
    * `.red | .m-4 | .random_name` = class selector (valor: 10)
    * `#box | #container` = ID selector (valor: 100)
    * inline (valor: 1.000)
#### Comandos
* `color:`cor = muda a cor do meu **texto**, por exemplo
* `font-size:`nºpx = altera o tamanho da fonte, em px (pixels)
* `background:`cor = muda a cor do fundo da caixa
* `width:`nºpx = largura 
* `height:`nºpx = altura
* `margin:`nºpx = altera a margem, espaçamento de algo, em px, é em volta da caixa, descola o texto do limite da página
* `padding:`nºpx = parece margin, só que é dentro da caixa
* `border:`nºpx `solid` cor = cria uma borda em volta do selector, nºpx: largura da borda, solid: sólida
#### Inserir CSS no HTML
* por linha, inline, código por código, já no HTML
    * `<h1 style=”color: red”>Título</h1>`
* no head (não precisa ser necessariamente nele)
    * `<style>h1 { color: red; }</style>`
    * `<h1>Título</h1>`
* no head, mas em outro arquivo
    * `<link rel=”stylesheet” href=”`nome_arq.css`”>` 
    * faz seu arquivo em HTML normal 
    * no arquivo .css estiliza separadamente
* @import ‘ ‘ (só no CSS)
    * para incluir um CSS externofonts.google.com, pega o link
    * mas deixa a página lenta
    * pega o font-family: __ e blablabla
        * Comando @important as vezes não dá para estilizar um texto de outro modelo, aí usa ele depois da cor, por exemplo, mas não é uma boa prática e quebra o “sentido cascata”.
        * @media regras condicionais para dispositivos, tem haver com responsividade
        * @font-face para colocar fontes externas
        * @keyframes para animações
#### Shorthand
Junção ou resumo de um comando, vai disso:
```css
header: {
    background-color: #000;
    background-image: url(images/bg.gif);
    background-repeat: no-repeat;
    background-position: left top;
}
```
Para isso:
```css
header: {
    background: #000 url(images/bg.gif) no-repeat left top;
}
```
Às vezes não importa a ordem debaixo, nem todas as propriedades aceitam o shorthand. 
#### Funções
valor(alguma_coisa) 
```css
/*Ex.:*/
header {
    color: rgb(225, 0, 100);
    width: calc(100% - 10px);
}
```
As funções (parênteses) recebem argumentos, não podem estar vazias. 
#### Vendor Prefixes
```css
p {
    -webkit-background-clip: text; /* Chrome, Safari, iOS e Android */
    -moz-background-clip: text; /* Mozilla (Firefox) */
    -ms-background-clip: text; /* Internet Explorer */
    -o-background-clip: text; /* Opera */
}
```
* Tem mais em: [Which Vendor Prefix?](https://ireade.github.io/which-vendor-prefix)
* Dá para consultar quais comandos precisam de vendor prefix [Can I Use](https://caniuse.com/)
## Nem tudo são píxeis
Se tiver `<color>` ou `<lenght>` são *values* ou *data types*. 
### Tipos Numéricos
* `<interger>` = número inteiro (positivos e negativos)
* `<number>` = número decimal (inteiro com vírgula)
* `<dimension>` = number com unidade, tipo 10.5px
* `<percentage>` = fração de algum número, 50% de algo
#### Unidades Comuns
* `<length>` = valor de distância: px, em, vw, vh
* `<angle>` = ângulo: deg, rad, turn
* `<time>` = tempo: s, ms
* `<resolution>` = resoluções para dispositivos: dpi
* `<position>` = posições, conjunto de coordenadas 2D: top, right, bottom, left e center (não confundir com a propriedade)
##### Valores Iguais
* px = pixel = 1/96in
* cm = centímetro = 96px/2,54
* in = inches (polegadas) = 2,54cm = 96px
##### Anotações
* em = tamanho da font pai
* rem = tamanho da font do elemento raiz (root/html)
* vw = 1% da viewport width, parte branca da página (vertical)
* vh = 1% da viewport height, parte branca da página (horizontal)
#### Funções
* rgb() = para cor
* hsl() = para cor
* url() = url
* calc() = para operações, cálculos
## Uma caixa dentro da outra
Box Model = caixa retangular com propriedades 2D, cada elemento da pagina é considerado uma caixa.
* `width/height` = tamanho: largura/altura
    * a largura ou a altura escolhidas vão afetar o content, mas não o padding
* `content` = conteúdo
* `border` = bordas (px, em)
    * Ela é aplicada fora da caixa, e o tamanho de width e height ficam “intactos”, para aplicar o border dentro da caixa é `box-sizing: border-box`
    *   `border-top` `border-right` `border-bottom` `border-left`
    * `<border-style>` `<border-color>`
    * style: `solid` `dotted` `dashed` `double` `groove` `ridge` `inset` `outset`
    * [Documentação MDN](https://developer.mozilla.org/en-US/docs/Web/CSS/border)
* `padding` = preenchimento interno (px, %, em)
    * Ele altera o tamanho da caixa, margem dentro da caixa
    * `padding-top` `padding-right` `padding-bottom` `padding-left`
    * `box-sizing: border-box` = para adicionar um padding sem alterar a width ou o height
* `margin` = espaços fora da caixa (px, %, auto)
    * `margin-top` `margin-right` `margin-bottom` `margin-left`
    * `margin: auto` = tenta fazer um cálculo automático **nas laterais**
    * **margin-collapsing** = Se a margin-bottom de uma caixa for um ºn x e o elemento abaixo dele tiver uma margin-top ºn y, elas se juntam e ao invés de ficar x+y, ele considera apenas o maior valor. Quando um elemento está um ao lado do outro isso não acontece, os valores são somados normalmente.
* `outline` = (px, em)
    * Não modifica o tamanho da caixa por não ser parte de Box Model, pode ser diferente de retangular, não permite ajustes individuais, muito usada pelo user agent para acessibilidade
### Display Inline | Display Block
* `display: block;` = transformar display inline em display block
* `display: inline;` = tranformar  display block em em display inline
#### `display block`
* Ocupa toda a linha, colocando o próximo elemento abaixo desse
* `width` e `height` são respeitados
* `padding`, `margin` e `border` irão funcionar normalmente
* Ex.: `<p>` `<div>` `<section>`, todos os headings `<h1>` `<h2>` `<h3>`...
#### `display inline`
* Elemento um ao lado do outro
* `width` e `height` não funcionam
* Somente valores horizontais de `margin`, `padding` e `border` irão funcionar
* Ex.: `<a>` `<strong>` `<span>` `<em>`
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
    * Ex.: o `<p>` fica com a cor azul, que é a cor da `<div>`, dá no mesmo se tirar o `currentcolor`
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
* [Documentação MDN, cores](https://developer.mozilla.org/en-US/docs/Web/CSS/color_value)
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