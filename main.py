class Library:
    def __init__(self,listOfBooks):
        self.books = listOfBooks
    def displayAvailableBook(self):
        print("Books present in this library are: ")
        for book in self.books:
            print("\t *" + book)
    def borrowBook(self,bookName):
        if bookName in self.books:
            print(f"you have been issued{bookName}.pleaase keep it safe and handle it properly! and return withnin 15 days")
            self.books.remove(bookName)
            return True
        else:
            print("sorry , this books is already has been issued by someone else, please wait until the book is returned")
            return False

        def returnBook(self, bookname):
            self.books.append(bookName)
            print("thanks for returning this book! hope you enjoy while reading it, have aa great day ahead!")
class Student:
    def requestBook(self):
        self.book = input("Enter the name of the book you want to borrow")
        return self.book
        
    def returnBook(self):
        self.book = input("Enter the name of the book you want to return")
        return self.book


if __name__=="__main__":
    centralLibrary = Library(["algorithms","Django","clrs","python"])
    student = Student()
    #centralLibrary.displayAvailableBook()
    while(True):
        welcomeMsg = '''==========Welcome to central library==========
        please choose an option
        1. Listing all the books
        2. Request a book
        3. Return a book
        4. Exit the library'''
        print(welcomeMsg)
        a = int(input("Enter a choice:"))
        if a == 1:
            centralLibrary.displayAvailableBook()
        elif a == 2:
            centralLibrary.borrowBook(Student.requestBook())
        elif a == 3:
            centralLibrary.returnBook(Student.requestBook())
        elif a == 4:
            print("thanks fro using this library")
            exit()
        else:
            print("invalid choice!")
        
        
