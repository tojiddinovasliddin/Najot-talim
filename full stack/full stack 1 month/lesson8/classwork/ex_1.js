class Library {
    constructor(library,name,author)
    {
        this.library = library
        this.name = name
        this.author = author
    }
    getLibrary()
    {
        return this.library
    }
    getName()
    {
        return this.name
    }
    getAuthor()
    {
        return this.author
    }
    getTitle()
    {
        return `Title: ${this.getAuthor()}`
    }
   
    
}
class Book extends Library {
    constructor(library,name,author)
    {
        super(library,name,author)
    }
    getSar() {
        return `Saravha: ${this.getAuthor()}`
    }
}
let book1 = new Library(`Milliy`, `sariq devni minib`, `Xudoyberdi`)
let book2 = new Book(`Milliy`,`Ruhiy tarbiya`, `Shayx`)
console.log(book1.getLibrary())
console.log(book1.getName())
console.log(book1.getAuthor())
console.log(book1)
console.log(book1.getTitle())
console.log(book2)
console.log(book2.getSar())
