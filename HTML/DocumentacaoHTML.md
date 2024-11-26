# Trilha Fundamentar | Guia Estelar de HTML
# HTML = HyperText Markup Language (Linguagem de Marcação de Hipertexto)
* “HTML é a estrutura e o CSS é a beleza”
* **`<!--comentário-->`** = comentários não afetam o código
## Comandos
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
### Links, imagens, citações e abreviações
* **`<a href=”link”>`título do link em azul`</a>`** = link
* **`<a href=”link” target=”_blank/_self”>`título do link em azul`</a>`** = link normal, só que se tiver o *target=”_blank”*, quando clicar no link ele abre uma nova guia e o *target=”_self”*, quando clicar ele abre o site na mesma guia, que é o padrão
* **`<img src=”https://source.unsplash.com/random” alt="">`** = imagem aleatória 
* **`<blockquote cite=”link”>`citação`</blockquote>`** = faz citação por aí
* **`<cite>`citação`</cite>`** = faz citação por aí, também
* **`<q>`citação`</q>`** = faz citação por aí, também
* **`<abbr title=”significado de uma abreviação”>`abreviação`</abbr>`** = digita algo em “abreviação”, na parte do significado explica o que é, se deixar o mouse parado em cima dá para ver
### Elementos Vazios (não tem o fechamento </>)
* **`<img src=`.png aqui`alt=`texto/título para a imagem`>`** = imagem
* **`<input type=`text`>`** = *não sei*
### Atributos Globais Mais Utilizados
* [Documentação MDN, atributos globais](https://developer.mozilla.org/pt-BR/)
* **`class`nome-classe** = grupo, cria uma classe, para criar estilo css, ou para acessar no js. Não pode começar com números ou caracteres especiais (só _)
* **`id`** = individual, tipo subtópicos do class, se colocar `<li><a href=”#`__`”>`Título`</a></li>` no começo e depois um título com `<h1 id=”`___`”>`Título`</h1>` e nos __ colocar a mesma “etiqueta”, ele vira um “sumário interativo”
* **`contenteditable`** = *não sei*
* **`data-`qualquer-nome-aqui** = *não sei*
* **`hidden`** = esconde uma tag
* **`style`** = dá para estilizar o texto
* **`tabindex=`número** = se apertar tab, ele segue na ordem dita pelo código
* **`title=`alguma coisa** = textinho que aparece quando deixa o cursor do mouse parado em cima de algo
### Conteúdos do Texto e Caracteres Reservados
* `&nbsp;` = é como se fosse o TAB que a gente dá no texto 
* `&alt;` = coloca < no texto, se colocar o caractere direto pode bugar o código
* `&gt;` = coloca > no texto, se colocar o caractere direto pode bugar o código
* `&amp;` = coloca & no texto, se colocar o caractere direto pode bugar o código
* `&quot;` = coloca “ no texto, se colocar o caractere direto pode bugar o código
* `&apos;` = coloca ‘ no texto, se colocar o caractere direto pode bugar o código
### Anatomia de um HTML
* **`<!DOCTYPE html>`** = é necessário para que um navegador entenda que você está trabalhando com HTML
* **`<html`lang="en"`>`head e body`</html>`** = o lang="en" configura a linguagem para inglês, "pt" para português
* **`<head>`___`</head>`** = *cabeça*, contém configurações importantes para o site, mas que o usuário não vê 
    * **`<meta `charset="UTF-8"`>`** = comando que vai possibilitar que o site receba vários tipos de caracteres especiais, podem ter outros charset's
    * **`<meta name=”viewport” content=”width=device-width, initial-scale=1.0”>`** = possibilita que o site seja visto tanto em celulares, quanto em computadores, etc.
    * **`<meta name=”author” content=”`nome`”>`** = colocar o author da página no código
    * **`<title>`Título`</title>`** = comando que dá o nome para a guia do Chrome, por exemplo
    * **`<link rel=”icon” href=”`link ou caminho da imagem`”/>`** = comando que possibilita colocar um favicon básico, aquela imagem pequena na guia do Chrome junto com o título
        * **`<link rel=”apple-touch-icon-precomposed” href=”`link ou caminho da imagem`”/>`** = mesmo do de cima, mas para iPhone não-retina, iPod Touch e dispositivos 2.1+; tem várias outras opções e resoluções na parte “Trilha Fundamentar > Guia Estelar de HTML > Cabeçalho > Favicon
* **`<body></body>`** = *corpo*, aqui ficam as coisas que o usuário vai ver e ter acesso, conteúdo `<p> | <h1> | ...`
* **`!`** = no VSC ele já faz esse "cabeçalho" automaticamente
### Tabela
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
## Forms | Formulários de outro planeta
Formulários servem para receber dados do usuário, dados `input`, possibilitar a interação e o funcionamento de controles.
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
## Semantics | HTML que faz sentido, para todos
* Web Semântica = é adicionar significado à uma linguagem (para dar significado ao conteúdo, no caso do HTML), ela controla a organização e a apresentação do conteúdo. É extremamente importante para a acessibilidade.
* User Agent = browser, navegador, etc..
### Tags
Algumas tags são específicas para algumas coisas e têm orientações sobre onde devem ficar na página. Ex.:
```html
<p>
    Nós (programadores), somos pagos para resolver problemas, não para memorizar soluções.
                        - Mayk Brito
</p>
```
Agora um exemplo com uma semêntica melhor:
```html
<blockquote> <!--bloco "feito" para citações-->
    Nós (programadores), somos pagos para resolver problemas, não para memorizar soluções.
                        <cite>- Mayk Brito</cite>
</blockquote>
```
#### Elementos comuns em documentos HTML
Dentro do elemento `<body></body>`
* `<header></header>` = cabeçalho
    * pode ser utilizado dentro de outros elemetos, como `<article> | <section>`
    * não pode ter um `<header>` dentro de outro `<header>` ou dentro de um `<footer>`
    * não tem elementos específicos para ele, são utilizados elementos globais mesmo
* `<nav></nav>` = navegação
    * pode estar em diversos locais na página, não precisa estar necessariamente no `<header>`, é muito bom para otimizar a acessibilidade
* `<main></main>` = conteúdo principal
    * só tem um `<main>` e ele deve estar diretamente no `<body>`
    * não deve conter um menu ou anúncios nele, e sim o conteúdo principal da página
    * não tem elementos específicos para ele, são utilizados elementos globais mesmo
* `<aside></aside>` = barra lateral, onde ficam anúncios, sobre o autor, assuntos relacionados, etc..
    * ajuda a descrever coisas do conteúdo principal resumidamente, ou então a falar sobre o autor do site, traz o significado de alguma palavra utilizada no `<main>`, etc..
    * não tem elementos específicos para ele, são utilizados elementos globais mesmo
* `<footer></footer>` = rodapé
    * pode estar no `<article>`
    * não tem elementos específicos para ele, são utilizados elementos globais mesmo
```html
<body>
    <header>
        logomarca
        <nav>
            <ul>
                <li>item</li>
            </ul>    
        </nav>
    </header>
    <main>
        conteúdo principal
        <article>
            <h3>informações adicionais</h3>
            <p>la la la pipoca, não quero saber de fofoca</p>
        </article>
    </main>
    <aside>
        parte lateral
    </aside>
    <footer>rodapé</footer>
</body>
```
#### Elementos adicionais em documentos HTML
* `<article></article>` = ele faz blocos de conteúdo que são relacionados entre si, porém são independentes
    * podem ter vários `<article>` em uma página
    * Ex.: em um livro de receitas, cada receita estaria em um `<article>` diferente
    * não tem elementos específicos para ele, são utilizados elementos globais mesmo
* `<section></section>` = antigmanete eram usadas as `<div>`, mas o `<section>` veio para "organizar" mais
    * se for para ter vários, como no exemplo do livro de receitas, é melhor usar o `<article>`, o `<section>` poderia ser utilizado para descrever o "modo de preparo" dentro do `<article>`
    * não tem elementos específicos para ele, são utilizados elementos globais mesmo
#### Elementos não semânticos, para uso genérico
* `<div></div>` = usado quando não for possível fazer a utilização de outro elemento de bloco semântico
* `<span></span>` = para dar destaque à alguma parte de um texto, quando não quiser usar o `<strong>`
* `<id></id>` = para classificar elementos
* `<class></class>` = para classificar elementos
## HTML-CSS connection | Nem só de classes ou IDs
### Selectors
Conectam um elemento HTML com o CSS a fim de estilizar/alterar o elemento. Os tipos de seletores são:
* Element selector = todos os elementos HTML `h1 | p | div`
    ```css
    p {
        color: lightgreen;
    }
    ```
* ID selector = faz referência a um elemento que tenha um atributo `id`, cada ID deve ser único
    ```css
    #layout {
        position: absolute;
        z-index: -1;
    }
    ```
* Class selector = faz referência a um elemento que tenha um atributo `class`, pode ter uma ou mais classes e elas podem repetir
    ```css
    .box {
        height: 208px;
        width: 208px;
    }
    ```
    * dá para colocar mais de uma classe em um elemento HTML, é só dar backspace: `class="class1 class2"`
* Attribute selector = faz referência a um elemento que tenha um atributo específico
    ```html
    <h1 title="page title">Random Title</h1>
    <p title="page content">Random text.</p>
    ```
    ```css
    [title] {
        color: lightblue;
    }
    /*vai mudar o elemento que tem `title` e não o `title` da coisa*/
    /*"Random Title" vai ficar azul claro, não o "page title"*/
    ```
* Pseudo-class selector = faz referência a um elemento em um estado específico
    ```css
    p:hover {
        color: gray;
    }
    /*quando passar o cursor em cima do parágrafo a cor dele irá mudar para cinza*/
    ```
* Multiple selector = dá para fazer referência a vários elementos juntos
    ```css
    h1, [title], .box {
        color: green;
    }
    ```
### Combinators
Trabalham para buscar e combinar seletores a fim de aplicar uma estilização.
* Descendant combinator = identificado por um espaço entre os seletores, ele busca um elemento dentro de outro
    ```css
    body article h2 {
        color: purple;
    }
    /*vai no `body`, dentro dele você vai no `article` e aí você procura o `h2` e muda a cor dele para roxo*/
    /*se o `article` estivesse dentro de uma `div` e sei lá o que, ia mudar do mesmo jeito, pois ele continua sendo um `h2` dentro de um `article` que está dentro de um `body`*/
    ```
* Child combinator = identificado pelo seinal ">" entre dois seletores, seleciona apenas o elemento que é "filho direto do pai" e os elementos depois do "filho direto" são desconsiderados
    ```html
    <body>
        <ul>
            <li>Item 1</li>
            <ul>
                <li>Item 1</li>
            </ul>
        </ul>
    </body>
    ```
    ```css
    body > ul > li {
        color: darkgreen;
    }
    /*será aplicado somente ao "Item 1", pois o "Item 2" seria `body > ul > ul > li`
    ```
* Adjacent sibling combinator = identificado pelo sinal "+" entre dois seletores, seleciona somente o elemento do **lado direito** que é irmão direto na hierarquia
    ```html
    <h1>Título</h1>
    <p>Parágrafo 1.</p>
    <p>Parágrafo 2.</p>
    <button>Não sei</button>
    <button>I don't know</button> 
    <!--na página, os botões vão ficar um ao lado do outro-->
    ```
    ```css
    h1 + p {
        color: yellow;
    }
    button + button {
        margin-left: 27px;
    }
    /*vai aplicar a cor amarela ao `p`, pois ele está do lado direito e somente ao "Parágrafo 1.", pois ele é o irmão DIRETO*/
    ```
* General sibling combinator = identificado pelo sinal "~" entre dois seletores, seleciona todos os elementos irmãos
    ```html
    <h1>Título</h1>
    <p>Parágrafo 1.</p>
    <p>Parágrafo 2.</p>
    <button>idk</button>
    <p>Parágrafo 3.</p>
    ```
    ```css
    h1 ~ p {
        color: brown;
    }
    /*vai aplicar a cor marrom para os 3 parágrafos*/
    ```
#### Exemplo de utilização de combinators
* Seletores muito específicos tendem a causar dificuldades no reuso das regras de estilização
* Muitas vezes, um simples uso de classes, torna o trabalho mais eficiente
```html
<ul>
  <li>Item 1</li>
  <li class="idk">Item 2</li>
</ul>
```
```css
ul > li[class="idk"] {
    color: red;
}
/*porém é mais fácil assim:*/
.idk {
    color: red;
}
```
* supondo que tivesse um `<p class="idk">` após o `</ul>`, a cor vermelha também afetaria ele, caso fosse utilizado a segunda forma, por isso a primeira forma seria mais eficiente, caso não quisesse que o parágrafo seguinte fosse afetado.