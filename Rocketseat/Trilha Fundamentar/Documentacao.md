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
    console.log("Aparentemente é mostrar na tela") //certo
    consolelog("Aparentemente é mostrar na tela") //errado
    coso.lelog("Aparentemente é mostrar na tela") //errado
    console.log("
    Aparentemente é mostrar na tela") //errado
    ```
* JS no HTML
    ```html
    <script>
        console.log('Aparentemente é mostrar na tela')
    </script>
    /*OU*/
    <script src="caminho_de_arquivo.js"></script>
    ```
* **comentários** = anotações feitas no código, mas que o usuário não pode ver
    * `// algo` = comentário em linha, igual c++
    * `/* algo 2.0*/` = comentário em bloco
### Tipos de dados
#### Primitive/Primitive value
* String = cadeia de caracteres, para escrever textos em JS
    * `"texto"` = aspas duplas, se no texto tiver aspas simples usa elas para não dar problema
    * `'texto'` = aspas simples, se no texto tiver aspas duplas usa elas para não dar problema
    * ``` `texto` ``` = template literals ou template strings, pode usar aspas simples e duplas, permite multilinhas e a inserção de valores e expressões
* Number = números
    * `666` = inteiro, positivos e negativos
    * `6.66` = reais (float no inglês), positivos e negativos
    * `NoN` = Not a Number
    * `Infinity` = infinito, tem que ser com o I maiúsculo
* Boolean = V ou F
    * `true` = verdadeiro
    * `false` = falso
* `undefined` = indefinido
* Symbol = ?
* BigInt = ?
#### Structural
##### Object
Objeto, dado estrutural, todos têm propriedades/atributos e funcionalidades/métodos. 
-> `{propriedade: "valor"}` = pode colocar mais de um dentros das {}, é só separar por vírgula
[Documentação MDN: Standard built-in objects](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects)
* Array = vetores, uma lista, agrupamento de dados
    * `["coisa", "treco", 18]` = entre [], separa por vírgulas
* Map = ?
* Set = ?
* Date = ?
##### Function = ?
#### Structural Primitive
* `null` = nulo
### Variáveis
### Funções
### Condicionais
### Estruturas de repetição