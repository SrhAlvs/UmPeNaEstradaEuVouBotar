# GIT and GitHub
## Most Used Commands
* `git status` = mostra o estado atual do repositório, modificações, o que ainda não foi commitado, etc.
* `git add` = coloca os arquivos alterados em uma área de preparação para que sejam commitado (staging area)
    * `git add .` = adiciona todos os arquivos alterados da Working Directory
    * `git add index.html` = adiciona apenas o arquivo informado
* `git commit` = registra alterações que estão na Staging Area, criando assim, uma nova versão do projeto
    * `git commit -m ""` = faz o commit e entre aspas fica a mensagem de log
    * `git commit -a` = faz o commit sem amensagem de log
    * `git commit --amend` = altera o último commit feito (arquivos e mensagem), antes do push
* `git push` = envia o conteúdo commitado do repositório local para o repossitório remoto
    * `git push origin main` = informa qual a branch que deve ser enviada
    * `git push -u origin <nome_branch>` = para criar a branch no repositório remoto, onde vão ser mandados os commits
## Start A New Repository
* `git ` = 
* `git ` = 
* `git ` = 
* `git ` = 
## More Commands
* `gedit | nano` = cria ou edita um arquivo
    * `nano "nome_arquivo"` -> não separe com espaço, pois dois arquivos diferentes serão criados
* `git bisect` = permite fazer uma busca entre os commits
    * `git bisect start` = começa a fazer a procura, dá um cat no arquivo que está mexendo e vê se está certo ou não, git log para ver a lista de commits
    * `git bisect good <código_commit>` = ele compara o que muda entre o atual e o selecionado e aí vai dando cat no arquivo e vai julgando em bad ou good
    * `git bisect bad` = está errado
    * `git bisect good` = está certo e ele já deixa o arquivo assim
* `git branch` = mostra as branchs existentes no repositório
    * `git branch <nova_branch>` = cria uma nova branch
    * `git branch -d <nome_branch>` = exclui uma branch
* `git blame` = mostra as alterações feitas em um arquivo, por linha, mostrando o autor, a data e o código do commit
* `gitignore` = arquivos que o GH vai ignorar e eles não vão para o repositòrio remoto