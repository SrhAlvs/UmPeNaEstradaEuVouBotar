# Trilha Fundamentar 
## Guia Estelar de HTML
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
## Guia Estelar de CSS
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
## Nem tudo são Pixels
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
## Posso ver e ouvir o HTML
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
## Posicionando foguetes
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
## App bonito, até nos textos
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
## Formulários de outro planeta
Formulários servem para receber dados do usuário, dados `input`, possibilitar a interação e o funcionamento de controles.
### Form
* `<form>`formulário`</form>` = para começar um formulário, container estilo *section* ou *footer*
    * `<form action="">`formulário`</form>` = para onde os dados vão ser enviados, para a mesma página (fica vazio nas aspas), etc. *action e methode ficam um ao lado do outro*
    * `<form methode="POST/GET">`formulário`</form>` = método de enviar os dados do action *action e methode ficam um ao lado do outro*
        * GET = envia as coisas para o endereço do action do jeito get, tudo o que o usuário preenche aparece na url do site, **padrão**
        * POST = envia os dados para o endereço do action, mas não é exibido na url do site
    * **NÃO PODE TER UM FORM DENTRO DE OUTRO FORM**
    * `<fieldset>`legend,input,...`</fieldset>` = agrupa os campos com o mesmo propósito
        * `disabled` = desabilita todos os elementros dentro de um *fieldset*, logo, os dados não serão enviados
        * `form` = é como se ligasse o *fieldset* com o formulário, tipo um id, assim o *fieldset* não precisa estar necessariamente dentro do formulário
        * `name` = para definir o nome do grupo do *fieldset*, ele não aparece na tela
        * `<legend>`Nome`</legend>` = **1º elemento do *fieldset***, tipo name só que esse aparece na página
    ```html
    <!--fieldset dentro do form-->
    <form action="" methode="POST">
        <fieldset>
            <legend>Login</legend>
            <label for="">E-mail</label>
            <input type="text">
        <fieldset>
    </form>
    <!--fieldset fora do form-->
    <form id="login" action="" methode="POST">
        <button>Next</button> <!--só exemplo-->
    </form>
    <fieldset form="login">
            <legend>Login</legend>
            <label for="">E-mail</label>
            <input type="text">
    <fieldset>
    ```
* `<label>`input, etc.`</label>` = associa e identifica uma ou mais tag's de entrada de dados, posso clicar no "título" ao invés de clicar na caixa para selecionar
    ```html
    <!--input dentro do label-->
    <label>
        Nome:
        <input type="text">
    </label>
    <!--input fora do label-->
    <label for="nome">Nome:</label>
    <input id="nome" type="text">
        <!--usando o id/for só funciona para button, input (not hidden), meter, output, progress, select, textarea-->
    ```
### Input
* `<input type="">` = cria o campo para digitar os dados pedidos
* `<input value="">` = o que estiver dentro do *value* fica "pré-escrito" na caixa do input, a pessoa pode alterar ou deixar como está
* `<input autocomplete="">` = sugere automaticamente dados que o usuário normalmente usa, é muito complexo, logo, olhe a documentação
    * "email" = sugere o email que a pessoa normalmente usa
* `<input autofocus>` = ao abrir a página o cursor já é direcionado ao campo, automaticamente, é só um por página
* `<input disable>` = diabilita o campo, se tiver um *value* ele não pode ser apagado
* `<input readonly>` = parece o *disable* só muda o aspecto, no *disable* o *value* fica opaco, no *readonly* isso não acontece, **para quase todos**
* `<input form="">` = faz um link com um *id*
    * se o *id* estiver em um `<form>`, para enviar os dados do *input* para o *form* tem que colocar um *name*
* `<input name="">` = manda os dados do input para um outro local
* `<input required>` = faz com que determinado input tenha que ser preenchido obrigatoriamente, pode ter mais de um na página, **para quase todos**
* `<input placeholder>` = frase para identificar o que colocar num determinado campo, **para quase todos**, `label` é melhor para a acessibilidade
#### type=""
* `"text"` = pode digitar texto na caixa
* `"textarea"` = para escrever texto maior
    * `id=""` = para fazer link com um *label* a partir do *for* por exemplo
    * `name=""` = para receber o que estiver dentro como "mensagem=conteúdo", por exemplo
    * `rows="nº"` = quantidade de linhas
    * `cols="nº"` = quantidade de colunas
    * `minlength="nº"` = define um mínimo de caracteres
    * `maxlength="nº"` = define um máximo de caracteres
    * `wrap=""` = tipo VS Code antes e depois de um Alt+Z
        * `"on"` = quebra as linhas
        * `"off"` = só quebra as linhas se usar Enter, se não tem que arrastar para o lado para poder visualizar o resto do texto
        * `"soft"` = ?
        * `"hard"` = ?
    * `autocomplete=""` = sugere algum dado
        * `"on"` = sugere algo
        * `"off"` = não sugere nada
    * `autofocus` = a página já foca nesse campo, depois de carregada, o usuário é direcionado a preencher ele automaticamente
    * `placeholder=""` = frase dentro do campo, para identificar que o local é para digitar o texto
    * `readonly` = desabilita o campo, mas não altera o aspecto do *placeholder*
    * `disable` = desabilita o campo, deixa o *placeholder* opaco
    * `required` = transforma o campo em obrigatório
    * `form` = dá para fazer um link com um *label*
* `"search"` = para campos de busca, parecido com o *text*
    * `name=""` = para receber o que estiver dentro como "mensagem=conteúdo", por exemplo
    * `list` = tem que ter link com uma *datalist* (id/list)
    * `placeholder=""` = frase dentro do campo, para identificar que o local é para digitar o email
    * `size="nº"` = tamanho do campo
    * `label` = bom para a acessibilidade, porém em alguns casos fica contra-mão, a alternativa é usar o *aria-label*
    * `aria-label=""` = ele não aparece para o usuário, mas caso ele esteja usando um leitor de tela ele vai ler o que estiver entre as aspas
    * `pattern=""` = usa expressões regulares, recomendado para limitar os tipos de pesquisa aceitos, [0-9]{2} (aceita números de 0 à 9, e apenas 2 números)
        * **.** = aceita qualquer caractere
        * **+** = qualquer carectere uma ou mais vezes
        * **\*** = qualquer caractere multiplas vezes
        * **@** = seguido de um @
        * **g** = seguido de um g, assim para o m, a, i, l
        * **\\** = a \ é para aceitar o . de modo literal, e não como um comando 
    * `title="`frase`"` = se o modelo de email não tiver os requisitos pedidos, ele mostra a mensagem contida no *title*, "somente emails @gmail.com serão aceitos"
* `"url"` = para url, ele já verifica automaticamente se é uma url válida
    * `placeholder=""` = frase dentro do campo, para identificar que o local é para digitar uma url
    * `value=""` = o que estiver dentro fica "pré-escrito" na caixa, o usuário pode alterar ou deixar como está
    * `readonly` = desabilita o campo, mas não altera o aspecto do *placeholder* ou do *value*
    * `disable` = desabilita o campo, deixa o *placeholder* ou o *value* opaco
    * `required` = transforma o campo em obrigatório
    * `minlength="nº"` = define um mínimo de caracteres
    * `maxlength="nº"` = define um máximo de caracteres
    * `size="nº"` = tamanho do campo
    * `pattern=".*\.com\.br\/.*"` = usa expressões regulares, recomendado para limitar os tipos de url e domínios aceitos
        * **.** = aceita qualquer caractere
        * **\*** = qualquer carectere múltiplas vezes
        * **c** = seguido de um c, assim para o o, m
        * **\\** = a \ é para aceitar o . e a / de modo literal, e não como um comando 
    * `title="frase"` = se o modelo de url não tiver os requisitos pedidos, ele mostra a mensagem contida no *title*
    * `list=""` = tem que ter link com uma *datalist*, e assim poder sugerir algumas url
    * `spellcheck=""` = habilita uma verificaçao ortográfica 
        * `"true"` = habilita
        * `"false"` = não habilita
* `"tel"` = ?
* `"email"` = não envia se não for um email com abc@dominio.com
    * `placeholder=""` = frase dentro do campo, para identificar que o local é para digitar o email
    * `value=""` = o que estiver dentro fica "pré-escrito" na caixa, o usuário pode alterar ou deixar como está
    * `readonly` = desabilita o campo, mas não altera o aspecto do *placeholder* ou do *value*
    * `disable` = desabilita o campo, deixa o *placeholder* ou o *value* opaco
    * `required` = transforma o campo em obrigatório
    * `multiple` = permite o usuário colocar um ou mais emails, separados por vírgula
    * `minlength="nº"` = define um mínimo de caracteres
    * `maxlength="nº"` = define um máximo de caracteres
    * `size="nº"` = tamanho do campo
    * `pattern=".+@gmail\.com"` = usa expressões regulares, recomendado para limitar os tipos de emails e domínios aceitos
        * **.** = aceita qualquer caractere
        * **+** = qualquer carectere uma ou mais vezes
        * **@** = seguido de um @
        * **g** = seguido de um g, assim para o m, a, i, l
        * **\\** = a \ é para aceitar o . de modo literal, e não como um comando 
    * `title="`frase`"` = se o modelo de email não tiver os requisitos pedidos, ele mostra a mensagem contida no *title*, "somente emails @gmail.com serão aceitos"
    * `list=""` = tem que ter link com uma *datalist*, e assim poder sugerir alguns emails
* `"date"` = possibilita selecionar data -> dd/mm/yyyy (value="yyyy-mm-dd"), tem que olhar na [documetação](https://caniuse.com) para saber se dá para usar
* `"month"` = possibilita selecionar um mês do ano em que está, tem que olhar na [documetação](https://caniuse.com) para saber se dá para usar
* `"week"` = para semana, tem que olhar na [documetação](https://caniuse.com) para saber se dá para usar
* `"time"` = para horário, tem que olhar na [documetação](https://caniuse.com) para saber se dá para usar
* `"datetime-local"` = dd/mm/yyyy --:--, dia, mês, ano e horário; tem que olhar na [documetação](https://caniuse.com) para saber se dá para usar
* `"number"` = aceita somente números
    * `min="nº"` = o nº entre aspas é o valor mínimo aceito
    * `max="nº"` = o nº entre aspas é o valor máximo aceito
    * `step="nº"` = se tivesse "2", ele pularia/mostraria os números de 2 em 2
    * `placeholder=""` = frase dentro do campo, para identificar que o local é para digitar números
    * `value=""` = o que estiver dentro fica "pré-escrito" na caixa, o usuário pode alterar ou deixar como está
    * `readonly` = desabilita o campo, mas não altera o aspecto do *placeholder* ou do *value*
    * `disable` = desabilita o campo, deixa o *placeholder* ou o *value* opaco
    * `list` = tem que ter link com uma *datalist* (id/list) para sugerir algumas coisas
* `"range"` = controle para selecionar um valor numérico, bolinha que desliza na reta
    * `min="nº"` = o nº entre aspas é o valor mínimo aceito
    * `max="nº"` = o nº entre aspas é o valor máximo aceito
    * `value=""` = o que estiver dentro fica "pré-escrito" na caixa, o usuário pode alterar ou deixar como está
    * `step="nº"` = se tivesse "2", ele pularia/mostraria os números de 2 em 2
* `"hidden"` = fica escondido do usuário, tipo para registrar a data que um formulário foi enviado
    * `name=""` = tem que ter para possibilitar identificar ao quê aquele dado se refere
    * `value=""` = o que estiver dentro fica "pré-escrito" na caixa, o usuário pode alterar ou deixar como está
* `"color"` = dá para selecionar cores, **nem todos os navegadores suportam**
    * `value=""` = vai deixar uma cor padrão caso o usuário coloque uma cor inválida
    * `list=""` = tem que ter link com uma *datalist*, e assim poder sugerir algumas cores, **nem todos os navegadores suportam**
* `"password"` = para senhas, ele esconde o que é digitado
    * `minlength="nº"` = define um mínimo de caracteres
    * `maxlength="nº"` = define um máximo de caracteres
    * `size="nº"` = tamanho do campo
    * `pattern="[0-9a-f]{4,8}"` = usa expressões regulares, recomendado para fazer padrões altos de senhas (aceita números de 0 à 9, letras de A à F, mínimo de 4 caracteres e máximo de 8 caracteres)
    * `title="frase"` = se o modelo de senha não atigir os requisitos pedidos, ele mostra a mensagem contida no *title*
    * `placeholder=""` = frase dentro do campo, para identificar que o local é para digitar a senha
    * `readonly` = desabilita o campo, mas não altera o aspecto do *placeholder*
    * `disable` = desabilita o campo, deixa o *placeholder* opaco
    * `required` = transforma o campo em obrigatório
    * `inputmode="numeric"` = abre somente o teclado numérico no smartphone
    * `autocomplete=""` = sugere algum dado
        * `"on"` = sugere uma nova senha ou uma senha que já foi usada na página em questão
        * `"new-password"` = sugere uma nova senha, somente
        * `"current-password"` = sugere somente uma senha que já foi usada anteriormente na página
        * `"off"` = não sugere nada, às vezes o navegador já vem habilitado por padrão
* `"file"` = aceita arquivos
    * **para enviar os arquivos o formulário tem que ter o *method="post"* e o atributo *enctype="multipart/form-data"***
    * `value=""` = vai mostrar o nome do arquivo a ser enviado, só funciona para apenas um arquivo
    * `files=""` = lista do arquivo ou dos arquivos que vão ser enviados
    * `accept=""` = descreve quais os tipos de arquivos são aceitos, tem que olhar a documentação para saber os bglhs expecíficos para alguns tipos
    * `multiple` = permite o usuário um ou mais arquivos
* `"checkbox"` = caixas que podem ser marcadas, selecionar os dados a serem enviados
    * pode fazer link com *label*
    * `value=""` = o que estiver dentro fica "pré-registrado", quando a caixa for marcada o navegador vai entender o dado com o valor do *value*
    * `checked` = a caixa vem marcada de início
    * dá para fazer uma lista com várias caixas usando o *fieldset*
        ```html
        <fieldset>
            <legend>Choose your interests</legend>
            <div>
                <input 
                type="checkbox" 
                id="music" 
                name="interests"
                value="music">
                <label for="music">Music</label>
            </div>
            <div>
                <input 
                type="checkbox" 
                id="english" 
                name="interests"
                value="english">
                <label for="english">English</label>
            </div>
            <div>
                <input 
                type="checkbox" 
                id="pets" 
                name="interests"
                value="pets">
                <label for="pets">Pets</label>
            </div>
        </fieldset>
        ```
* `"radio"` = tipo o *checkbox*, só que só pode selecionar uma opção de um grupo de opções
    * **para fazer uma "lista de opções" tem que usar *label, for, id, name, value, etc.* tipo a do exemplo de cima**
    * `checked` = a caixa vem marcada de início
### Button
* `<button>`algo que identifique o botão`</button>` = serve para enviar dados, etc. 
    * `<button type="submit">` = envia os dados do formulário
    * `<button type="button">` = também envia os dados do formulário, mas só alguns navegadores entendem isso 
    * `<button type="reset">` = reseta/limpa o formulário, volta ao value de um input, etc. 
    * `<button autofocus>` = ao entrar na página, esse elemento com o *autofocus* vai receber um foco à mais, se apertar enter o formulário é enviado, mesmo se estiver vazio
    * `<button  disable>` = desbilita o botão
    * `<button name="">` = ?
    * `<button form="">` = faz o link entre *id* e *form*
### Datalist
* `<datalist id="">`lista de option`</datalist>` = lista de opções que o usuário pode escolher
    * `<option>`algo`<option>` = para colocar as opções para o usuário selecionar
    * `placeholder="algo"` = fica dentro do input, para dizer sobre o que é aquela lista de opções
        * suporta `input` do tipo text, search, url, tel, email, date, month, week, time, datetime-local, number, range e color
        * Para verificar a compatibilidade com o browser olhe a [Documentação](https://caniuse.com)
        * se os valores contidos no `option` não forem compatíveis com os tipos de `input`, eles não vão ser apresentados
    ```html
    <input 
        type="text" 
        list="comida" 
        placeholder="Escolha uma comida">
    <datalist id="comida">
        <option>Sushi</option>
        <option>Massa</option>
        <option>Pão de queijo</option>
    </datalist>
    ```
### Select
`<select>`option, etc.`</select>` = pode ter link com um *label*
* `name=""` = para receber o que estiver dentro como "mensagem=conteúdo", por exemplo
* `id=""` = para fazer link com *for* de um *label*, por exemplo
* `multiple` = possibilita a seleção de múltiplas opções
* `size="nº"` = número de elementros visíveis numa caixa se precisar usar o scrol
    * `<option value="">`algo`<option>` = para colocar as opções para o usuário selecionar
        * o que estiver no *value* é o registrado no back-end, o que fica entre os *value* é o apresentado para o usuário
    * `<optgroup label="">`option, etc.`</optgroup>` = grupo de *option*, o nome do grupo fica no *label*, depois é só escrever os *option* com *value*, etc.
## Guia Estelar JavaScript
---> arquivo.js
- ECMAScript: órgão que padroniza o JavaScript
Linguagem de programação que roda no navegador do usuário (front-end), mas roda também no computador (back-end).
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
    * `// algo` = comentário em linha, igual c++
    * `/* algo 2.0*/` = comentário em bloco, igual no CSS
### Tipos de dados
#### Primitive/Primitive value
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
* `undefined` = indefinido
* `Symbol` = ?
* `BigInt` = ?
#### Structural
##### Object
[Documentação MDN: Standard built-in objects](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects)
Dado estrutural, todos têm propriedades/atributos e funcionalidades/métodos.
* `{propriedade: "valor"}` = pode colocar mais de um dentros das {}, é só separar por vírgula
* Acessar valores dentro de um Object: 
    ```js
    const person = {
        name: 'Rodrigo',
        age: 25,
        pet: 'cats',
        quantity: 4
        //tem que ter as vírgulas depois
    }
    console.log(`${person.name} have ${person.age} years old and have cute ${person.pet}.`)
        //Rodrigo have 25 years old and have cute cats.
    ```
##### Array
Vetores, uma lista, agrupamento de dados
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
###### Arrays with Strings
* `.split("")` = js separa em elementos de Array de acordo com o que estiver entre aspas. Ex.: coloco "o", então onde tiver "o" ele vai sumir e criar um elemento
* `.join("")` = js "emenda/junta/liga" os elementos de um Array usando o que estiver dentro das aspas 
```js
let text = "I am hungry o_o"
let array = text.split(" ")
    //(4) ["I", "am", "hungry", "o_o"]
let arrayTogether = array.join("~")
    //I~am~hungry~o_o
```
###### Array with Constructors
```js
let myArray = new Array('a', 'b', 'c')
    //(3) ["a", "b", "c"]
let emptyArray = new Array(6)
    //(6) [empty * 6]
    //tenho 6 posições vazias
```
###### Array elements quantity
```js
console.log(["a", "b", "c"].length) //2
```
###### Cadeia de caracteres => Array
```js
let word = 'chuva'
console.log(Array.from(word))
    //(5) ["c", "h", "u", "v", "a"]
```
###### Manipulções
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
#### Structural Primitive
* `null` = nulo
### Variáveis
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
#### `var`
Pode variar/mudar seu valor.
* Declarar variável
    ```js
    var coisa = algo //"coisa" recebe "algo"
    ```
#### `let`
Pode variar/mudar seu valor.
* Declarar variável
    ```js
    let coisa = algo
    ```
#### `const`
Não pode variar, mesmo que seja colocado um novo valor para ela mais para frente, o `const` sempre vai pegar o primeiro valor atribuído à ele
* Declarar variável
    ```js
    const coisa = algo
    ```
#### Dynamic types
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
#### Scope
Determina a visibilidade de alguma variável. 
* `var` = global (em todo o código) e local (somente dentro do scopo onde está)
    ```js
    console.log("Existe algo antes do bloco?", algo) //existe, mas com valor `undefined`
        //em tese, "algo" não existe ainda, mas o js "pega" essa var e joga para cima, deixando somente o se valor onde está, isso se chama "hoisting"
    {
        var algo = 6
    }
    console.log("Existe algo depois do bloco?", algo)
        //agora sim ele recebe o valor para a var "já existente"
    ```
* `let` e `const` = local (somente dentro do scopo onde está)
    ```js
        console.log("Existe teco antes do bloco?", treco) //não existe
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
##### Block Statement
Declaração de bloco. O bloco também cria um scopo novo, `block-scoped`
```js
{ //abre bloco
    //dentro do bloco, pode colocar qualquer código
} //fecha o bloco
```
#### Nomeação de variáveis
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
    * Escrever em ingles
    *camelCase = onde seria espaço coloca maiúculo, OiTudoBemComVocê
    *snake_case = onde seria espaço coloca underline, oi_tudo_bem_com_você
### Funções
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
#### Return
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
const randomName = function(num1, num2){
    return num1 + num2
}
const total = randomName(451, 215)
console.log(total)
//assim é melhor
```
#### Function expression/anonymous
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
#### Function scope
--- bug --- 
--- tem arquivo de teste sobre ---
#### Function hoisting
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
#### Arrow function
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
#### Callback function
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
#### Function constructor
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
### Prototype
--- não entendi muito bem ---
Se colocar '.\_\_proto\_\_' antes de alguma coisa (String, Number, Boolean, etc.) o próprio .js mostra o protótipo, propriedades do valor escrito, mostra cor da fonte e vários etc.
### Type conversion/typecasting | Type coersion
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
### Manipulações
#### Aleatórios
* `.reverse()` = vai pegar o valor (tipo valores de *Array*/função) e inverter a ordem
* `.replace("", "")` = o que estiver entre as primeiras aspas será trocado pelo o que está entre as segundas aspas
    * `.replace(/[]/g, "")` = dentro dos colchetes pode colocar vários caracteres e o **g** é de *global* (tipo remover tal coisa de uma frase **completa**)
* `.slice()` = vai fatiar algo, uma palavra por exemplo (só depois do *slice* que dá para usar o *reverse*)
* `.split("")` = js separa em elementos de *Array* de acordo com o que estiver entre aspas. Ex.: coloco "o", então onde tiver "o" ele vai sumir e criar um elemento
* `.join("")` = js "emenda/junta/liga" os elementos de um *Array* usando o que estiver dentro das aspas 
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
* `.reduce()` = maior valor e menor valor de um *Array* (eu acho)
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
```js
let text = "The house is cute"
console.log(text.split(" ")) //["The", "house", "is", "cute"]
let textArray = ["The", "house", "is", "cute"]
console.log(textArray.join(" ")) //The house is cute
```
#### Number <=> String
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
#### Contar caracteres e dígitos
*Number* não recebe `length`, tem que transformar em *String*
```js   
let word = "Sushi"
console.log(word.length) //5
```
#### De . para , | Quantidade de casas decimais
* `.toFixed(0)` = número com apenas algumas casas decimais (entre parênteses é o número de casas que eu quero)
* `.replace("", "")` = o que estiver entre as primeiras aspas será trocado pelo o que está entre as segundas aspas
```js
let number = 854.8456129846594
console.log(number.toFixed(4).replace(".", ",")) //854,8456
    //vai aparecer no formato de String, se transformar em Number dá erro por causa da vírgula
```
#### Maiúsculas <=> minúsculas
* `.toUpperCase` = tuda maiúsculo
    ```js
    let phrase = "Frase aleatória com sentido pik4"
    console.log(phrase.toUpperCase()) //FRASE ALEATÓRIA COM SENTIDO PIK4
    ```
* `.toLowerCase` = tudo minúsculo
    ```js
    let phrase = "Frase Aleatória Com Sentido Pik4"
    console.log(phrase.toLowerCase()) //frase aleatória com sentido pik4
    ```
#### Procurar palavra no texto
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
### Expressões e Operadores
Qualquer linha de código que resolve algo
#### Expressões
Pode colocar ';' (ponto e vírgula) depois de qualquer expressão, afinal não muda nada.
* único caso que é obrigatório: quando tem uma função auto-executável depois da expressão
* Algumas expressões: `let | new`
    * `new` = cria um novo objeto de uma função
#### Operadores
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
##### Grouping operator ( )
Operador que agrupa expressões, parêntes. Pode ser usado em String.
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
##### Operadores Aritméticos (binary)
* `nº * nº` = multiplicação
* `nº / nº` = divisão
* `nº + nº` = soma
* `nº - nº` = subtração
* `nº % nº` = resto da divisão
* `nº ** nº` = exponencial, isso elevado a isso
* `nº++` = incremento, o número soma +1 **(unary)**
* `nº--` = decremento, o número subtrai -1 **(unary)**
```js
let thing = 6
console.log(thing++) //6, ele só vai somar depois dessa linha
console.log(thing)   //7
    //ou
console.log(++thing) //7
console.log(thing--) //7, ele só vai subtrair depois dessa linha
console.log(thing)   //6
    //ou
console.log(--thing) //6
```
##### Operadores de Comparação (binary)
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
console.log(twelve !== "12")  //false
console.log(six < twelve)     //true
console.log(six > twelve)     //false
console.log(six >= 6)         //true
console.log(twelve <= 6)      //false
console.log(six <= twelve)    //true
```
##### Operadores de atribuição (binary)
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
##### Operadores lógicos (binary)
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
##### Operadores condicionais (ternary)
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
##### Operadores para String (binary)
Concatenação. 
```js
let sun = 'Sun'
sun + '.SA'
console.log(sun + 666) //transforma os Number em String e junta tudo
    //Sun.SA666
```
##### Falsy and Truthy
`false = 0`
`true = 1`
* FALSY = quando um valor é considerado ***false***em contextos onde o *Boolean* é obrigatório (consdicionais e loops)
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
##### Precedência de operadores
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
### Condicionais e controle de fluxo
#### If and Else
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
#### Switch
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
#### Throw and Try/Catch
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
### Estruturas de repetição
#### For
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
#### While
* While = enquanto, em inglês
Faz mais sentido usar o *while* ao invés do *for* quando a gente não sabe a hora de parar.
```js
let a = 0
while(a < 6) {              //vai mostrar de 0 à 6
    console.log(a)
    a++;
}
let b = 56261648485691661   //não tem como eu saber quando que 
while(a > 6) {              //iso vai parar, por isso uso 'while'
    console.log(a)
    b /= 66;
}
```
#### For...of
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
#### For...in
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