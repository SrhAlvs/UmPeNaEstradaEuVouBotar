# Trilha Fundamentar | Guia Estelar de CSS
# CSS = Cascading Style Sheet (Folha de Estilo em Cascata)
* “HTML é a estrutura e o CSS é a beleza”
* Não é linguagem de programação, é uma linguagem style sheet.
* Para olhar o CSS por trás de um site bonito: F12 aí vai em “Styles”.
* **`/*comentário*/`** = comentários não afetam o código
* Quando tem 2 ou mais declarações para um mesmo "objeto", a última que vai ser mais relevante:
    ```css
    body {
        background: red;
    }
    body {
        background: orange;
    }
    /* Ou */
    body {
        background: red;
        background: orange;
    }
    /* Nos dois exemplos, o `background` vai ficar laranja, não vermelho. */
    ```
## Anatomia CSS
**Lembrete:** `<div id= “random_name” class=”random_name_2”>`comandos aqui`</div>`
* `selector { property: value; }` = no selector coloca algum comando do HTML, aí o que colocar em property e value vai mudar em todos os comandos do HTML, declaration é tudo que está entre {}
    * `*` = global selector (valor: 0)
    * `h1 | h2 | p | div` = element/type selector (valor: 1)
    * `.red | .m-4 | .random_name` = class selector (valor: 10)
    * `#box | #container` = ID selector (valor: 100)
    * inline (valor: 1.000)
### Comandos
* `color:`cor = muda a cor do meu **texto**, por exemplo
* `font-size:`nºpx = altera o tamanho da fonte, em px (pixels)
* `background:`cor = muda a cor do fundo da caixa
* `width:`nºpx = largura 
* `height:`nºpx = altura
* `margin:`nºpx = altera a margem, espaçamento de algo, em px, é em volta da caixa, descola o texto do limite da página
* `padding:`nºpx = parece margin, só que é dentro da caixa
* `border:`nºpx `solid` cor = cria uma borda em volta do selector, nºpx: largura da borda, solid: sólida
### Inserir CSS no HTML
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
### Shorthand
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
### Funções
valor(alguma_coisa) 
```css
/*Ex.:*/
header {
    color: rgb(225, 0, 100);
    width: calc(100% - 10px);
}
```
As funções (parênteses) recebem argumentos, não podem estar vazias. 
### Vendor Prefixes
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
## Colors Condensed | Nem tudo são Pixels
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
## Box Condensed | Uma caixa dentro da outra
Box Model = caixa retangular com propriedades 2D, cada elemento da pagina é considerado uma caixa.
Ordem: margin > border > padding > element content
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
## Colors Extended | Agora sim, cores
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
## Audio-visual | Posso ver e ouvir o HTML
### Vídeos
* `<video src="`caminho ou url `"></video>` = para colocar um vídeo
    * `controls` = colocado depois das aspas, faz aparecer os controles (play, pause, etc.)
#### Outras alternativas para adicionar vídeos
* Caso 1, baixar o vídeo:
    ```html
    <video src="<!--caminho ou link-->" controls>
        <p> Este browser não suporta vídeo, baixe-o aqui <a href="<!--caminho ou link-->"></a></p>
    </video>
    ```
* Caso 2, 
    ```html
    <video controls>
        <source src= "<!--caminho ou link-->" type="video/mp4">
    </video>
    ```
    * O `type` vai descrever bem o que é de fato o vídeo.
    * Pode ter mais de um `source`
    * Pode consultar mais formatos na [Documentação MDN: media type and format guide: image, audio, and video content](https://developer.mozilla.org/en-US/docs/Web/Media/Formats)
#### Comandos "extras"
**Esses comando são adicionados depois de `controls`**
* Altura e largura
    ```html
    <video controls
        width="400"
        height="300"
    >
        <source src= "<!--caminho ou link-->" type="video/mp4">
    </video>
    ```
* `autoplay` = assim que fosse aberto, o vídeo já começaria automaticamente, sem precisar dar o play
* `preload="`*algo*`"` = antes de dar o play o vídeo já começa a ser "baixado"
    * `"auto"`= é feito o preload do vídeo todo
    * `"metadata"` = vai carregar só o que for básico para o entendimento do conteúdo do vídeo
    * `"none"` = não faz preload de nada antes de apertar o botão de play
* `loop` = chega no final do vídeo e volta para o começo automaticamente
* `muted` = o vídeo começa mutado (dá para ativar o áudio pelos controles)
* `poster="`*caminho ou link*`"` = posso colocar uma imagem de fundo no vídeo, ela aparece antes de dar o play
### Áudios 
* `<audio src="`caminho ou url `"></audio>` = para colocar um áudio
    * `controls` = colocado depois das aspas, faz aparecer os controles (play, pause, etc.)
```html
<audio controls>
    <source src= "<!--caminho ou link-->" type="audio/mp3">
</audio>
```
* O `type` vai descrever bem o que é de fato o áudio, o container dele (.mp3, .ogg, etc.).
* Pode ter mais de um `source`, o mesmo áudio com mais conteiners. 
* Pode consultar mais formatos na [Documentação MDN: media type and format guide: image, audio, and video content](https://developer.mozilla.org/en-US/docs/Web/Media/Formats)
####  Comandos "extras"
São os mesmos de vídeos. 
O comando `poster`não existe, por motivos óbvios.
Os comandos de `width` e `height` também não funcionam.
### Iframe
Dá para usar em áudios, vídeos, mapas, etc..
[Documentação MDN, iframe](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/iframe)
```html
<iframe
    width="0"
    height="0"
    src="<!--link do vídeo-->"
    frameborder="<!--borda ao redor do vídeo, nº-->" 
    allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture"
    allowfullscren
    title="título do vídeo">
</iframe>
```
* `allow` = permitir algumas funções
* `gyroscope` = se o usuário girar o dispositivo, o vídeo gira junto
* `picture-in-picture` = aquele vídeo pequeno flutuante no canto da tela
* `accelerometer` = função para alterar a velocidade do vídeo 
### Imagens
```html
<img 
    src="<!--caminho ou link-->" 
    alt="título/descrição"
    title="Descansa o mouse em cima e mostra um título"
    width="0px"
    height="0px"
>
```
Imagem aleatória: https://source.unsplash.com/random
Dependendo do tamanho escolhido para a imagem, ela pode ficar esticada, às vezes é melhor colocar só um valor (altura ou largura), assim o próprio browser já "completa" a propriedade e deixa a imagem certinha.
* Link na imagem = se o usuário clicar na imagem ele vai ser direcionado para outro local
```html
<a href="<!--link-->">
    <img 
        src="<!--caminho ou link-->" 
        alt="título/descrição"
        title="Descansa o mouse em cima e mostra um título"
        width="0px"
        height="0px"
    >
</a>
```
#### Imagem inserida com CSS
```html
<p style="background-image: url(caminho ou link)">Alguma coisa</p>
```
Fica uma imagem atrás do texto.
#### Títulos visíveis
```html
<a href="https://google.com">
    <figure>
        <img
            src="link/caminho"
            alt="Imagem"
            title="Mouse descansa e aparece frase"
        >
        <figcaption>Frase relativa à imagem, não só uma frase qualquer depois de uma imagem.</figcaption>
    </figure>
</a>
```
Desse jeito, se o usuário clicar na imagem ou na frase do `figcaption` ele vai ser direcionado para o link. 
#### SVG
[Documentação MDN, svg](https://developer.mozilla.org/en-US/docs/Web/SVG/Element)
* Imagem rasterizada = imagem composta por pixels, se der muito zoom dá para ver os píxeis. 
* Imagem vetorizada = imagem composta por algorítmo, é a tal da `svg`, se der muito zoom a imagem não perde sua qualidade.
* O Figma auxilia no processo de criar essas imagens vetorizadas.
## Box Extended | Posicionando foguetes
### Page Layout
* `position` = para posicionar algo na tela
    * `static` = padrão, um à baixo do outro
    * `relative` = vai mover uma caixa sem alterar as outras
        * `top` `right` `bottom` `left` = nºpx
    * `absolute` = "junta tudo em uma camada", absoluto em relação à página, 0 é realmente 0
    * `fixed` = fica fixo na página, não é movido pelo scroll
    * `z-index` = altera a camada de uma caixa
### Flexbox
Permite posicionar os elementos dentro da caixa, horizontal e vertical separados.
* `display:flex` = aplicado em div's e classes, "caixa pai"
    * `flex-direction` = horizontal ou vertical -> row | column
    * `justify-content` = alinhamento justificado
        * `space-between` = justificado com um espço entre os elementos, com base no tamanho da janela
        * `center` = alinha no centro da parte horizontal
    * `align-items` = alinha
        * `center` = alinha no centro da parte vertical
### Grid
Posiciona elementos dentro da caixa, posicionamento horizontal e vertical ao mesmo tempo.
* `display:grid` = começo do grid
* áreas do grid
    ```css
        body {
            grid-template-areas:
                "1 2" /*cada conjunto de aspas significa uma linha "de tabela"*/
                "9 coisa" /*posso colocar o que eu quiser para identificar minhas colunas, nesse caso, todas as linhas tem duas colunas*/
                "main header";
            grid-template-rows: 60px 10px 1fr; /*primeira e segunda linhas com alturas fixas, terceira linha pegando uma fração da página (vai pegar o que sobrou, é flexível)*/
            grid-template-columns: 20px 1fr; /*mesmo esquema, só que para as colunas*/
        }
        header {
            grid-area: coisa; /*tudo o que eu colocar no header vai para o lugar "coisa"*/
        }
    ```
Dá para usar o `flex` no grid, tipo, no header eu tenho duas div's, eu posso usar o `flex` para organizar essas div's.
## Fonts | App bonito, até nos textos
### Basic font-proprties
#### Font family
* tipo de fonte de um elemento
* lista de fontes e ordem de prioridade
* inclui *fallback* font (caso algo não dê certo em um caminho, eu tenho eu meio de me virar, escape).
```css
p {
    font-family: 
    "Times New Roman", 
    Times, /*fallback, se não achar "Times New Roman" procura por "Times"*/ 
    serif; /*fallback também, caso não tenha as anteriores, procure uma fonte com serifa*/
}
```
* `serif` = fonte com serifa
* `sans-serif` = fonte sem serifa
* `letter-spacing` = espaçamento entre caracteres, px | em
* `word-spacing` = espaçamentos entre palavras, px | em
* `line-height` = espaço entre linhas, com ou sem unidades de medida
    * [Documentação MDN, line-height](https://developer.mozilla.org/en-US/docs/Web/CSS/line-height)
* `text-transform` = fazer todas as letras ficarem de algum modo 
    * `uppercase` = todas maiúsculas
    * `lowercase` = todas minúsculas
    * `capitalize` = as letras iniciais ficam maiúsculas
    * `none` = sem nada
    * [Documentação MDN, text-transform](https://developer.mozilla.org/en-US/docs/Web/CSS/text-transform)
#### Font Weight
Peso da fonte. 
Documentação para consultar quais font-weight são possíveis de aplicar em uma font-family: [CSS Fonts Module](https://www.w3.org/TR/css-fonts-3/)
* `bold` = fonte mais escura, tipo negrito
* `bolder` = mais que *bold*
* `light` = clarinho
* `normal` = normal ;-;
* `nº` = posso colocar um número para definir esse peso
#### Font Style
Estilo da fonte.
* `italic` = *joga de ladinho*
* `oblique` = parece o *joga de ladinho*
* `normal` = normal ;-;
#### Fonte Size
Tamanho da fonte. 
* px
* em (parente)
* rem (root element)
#### Web Fonts
* Fontes do sistema já estão instaladas na minha máquina, mas nem sempre estão na do usuário.
* Fontes da web são fontes que se consegue usando a web
[Fontes do Google](https://fonts.google.com/), dá para usar como link e como @import
[Como usar font-face, CSS-TRICKS](https://css-tricks.com/snippets/css/using-font-face-in-css/)
#### Atribuir mais estilo às fontes
[Documentação MDN, font-variant](https://developer.mozilla.org/en-US/docs/Web/CSS/font-variant)
* `font-variant: small-caps` = faz as letras minúsculas ficarem maiúsculas, mas ainda assim elas são menores que as maiúsculas
* `normal` = normal ;-; 
#### Text Decoration
[Documentação MDN, text-decoration](https://developer.mozilla.org/en-US/docs/Web/CSS/text-decoration)
* `line` = adicionar linha no texto
    * `underline` = sublinhado
    * `overline` = linha acima, sublinhado no céu
    * `line-through` = linha no meio, cortando as palavras
* `style` = estilo da linha
    * `wavy` = ondinhas
    * `dotted` = pontos ....
    * `double` = duas linhas
    * `dashed` = traços ----
    * `solid` = reta normal ;-;
* `color` = cor da linha 
    ```css
    p {
        text-decoration-line: underline;
        text-decoration-style: dotted;
        text-decoration-color: #186053;
    }
    /*shorthand embaixo*/
    p {
    text-decoration: underline dotted #186053;  
    }
    ```
* `text-align` = alinhamento do texto
    * left | right | center | justify
* `text-shadow` = sombras
    * px px px color
        * `offset-x` = posicionamento x
        * `offset-y` = posicionamento y
        * `blur-radius` = blur
        * `color` = cor
    ```css
    p {
        text-shadow: 7px 5px 3px darkcyan;
    }
    ```
#### Shorthand
```css
p {
    /*style | variant | weight | stretch | size/line-height | family*/
    font: oblique small-caps light normal 12px/1.5 Times New Roman, Times, DejaVu Sans Mono, sans-serif;
}
```