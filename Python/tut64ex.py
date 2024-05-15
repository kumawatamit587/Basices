class Library:
    
    def __init__(self):
     self.books=[]
     self.no_of_book=0
    
    def addBook(self,bookname):
        self.books.append(bookname)
        self.no_of_book=len(self.books)
        
    def NumberOfBook(self):
        print(f"The library has {self.no_of_book} books. The books are")
        for book in self.books:
            print(book)


        
obj=Library()
obj.addBook("English")
obj.addBook("MAth")
obj.addBook("SST")
obj.NumberOfBook()
