const booksCategory = [
    {
        category: "Riqueza",
        books: [
            {
                title: "Os segredos da mente milionária",
                author: "T. Harv Eker",
            },
            {
                title: "O homem mais rico da Babilônia",
                author: "George S. Clason",
            },
            {
                title: "Pai rico, pai pobre",
                author: "Robert T. Kiyosaki e Sharon L. Lechter",
            },
        ],  
    },
    {
        category: "Inteligência Emocional",
        books: [
            {
                title: "Você é Insubstituível",
                author: "Augusto Cury",
            },
            {
                title: "Ansiedade - Como enfrentar o mal do século",
                author: "Augusto Cury",
            },
            {
                title: "Os 7 hábitos das pessoas altamente eficazes",
                author: "Stephen R. Covey",
            },
        ],  
    },
]
const totalCategories = booksCategory.length
console.log(`Ao todo são ${totalCategories} categorias.`)
for(let totalBooks of booksCategory) {
    console.log(`Na categoria ${totalBooks.category} tem-se ${totalBooks.books.length} livros.`)
}
function Authors() {
    let authors = [];
    for(let totalAuthors of booksCategory) {
        for(let book of totalAuthors.books) {
            if(authors.indexOf(book.author) == -1) {
                authors.push(book.author)
            }
        }
    }
    console.log(`São ${authors.length} autores ao todo.`)
}
Authors();
function augustoBooks() {
    let books = [];
    for(let totalAuthors of booksCategory) {
        for(let book of totalAuthors.books) {
            if(book.author === 'Augusto Cury') {
                books.push(book.title)
            }
        }
    }
    console.log(`Livros do Augusto Cury: ${books.join(", ")}`)
}
augustoBooks();
function authorBooks(author) {
    let books = [];
    for(let totalAuthors of booksCategory) {
        for(let book of totalAuthors.books) {
            if(book.author === author) {
                books.push(book.title)
            }
        }
    }
    console.log(`Livros do ${author}: ${books.join(", ")}`)
}
authorBooks('Robert T. Kiyosaki e Sharon L. Lechter');