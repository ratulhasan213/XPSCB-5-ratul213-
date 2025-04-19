class Library:
    book_list = []
    def __init__(self):
        pass

    @classmethod
    def entry_book(self,book):
        self.book_list.append(book)


class Book:
    def __init__(self,book_id,title,author,availability):
        self.__book_id = book_id
        self._title = title
        self._author = author
        self._availability = availability
    
    def borrow_book(slef,id):
        for book in Library.book_list:
            if id == book.__book_id:
                if book._availability is True:
                   print(f" \"{book._title}\" borrowed successfully.\n")
                   indx = Library.book_list.index(book)
                   Library.book_list[indx]._availability = False
                else:
                   print(f" \"{book._title}\" was already borrowed.\n")
                return
        print("Invalid book Id\n")
    

    def return_book(self,id):
        for book in Library.book_list:
            if id == book.__book_id:
                if book._availability is False:
                   print(f" \"{book._title}\" returned successfully.\n")
                   indx = Library.book_list.index(book)
                   Library.book_list[indx]._availability = True
                else:
                   print(f" \"{book._title}\" was already returned.\n")
                return
        print("Invalid book id\n")


    def view_book_info(slef):
        print("\nLibrary Books: ")
        for book in Library.book_list:
            print(f"book_id: {book.__book_id}, book_name: {book._title}, author_name: {book._author}, availability: {book._availability}")
        print()
    
    
    




b1 = Book(101,"Amar Ace Jol", "Humayun Ahmed", True)
b2 = Book(102,"Seser kabita", "Rabindranath Tagore", True)
b3 = Book(103,"Kakababu Samagro", "Sunil Gangopadhay", True)
b4 = Book(104,"Tenida Samagro", "Narayan Gangopadhyay", True)
b5 = Book(105,"Satkahn","Samaresh Majumdar",True)

Library.entry_book(b1)
Library.entry_book(b2)
Library.entry_book(b3)
Library.entry_book(b4)
Library.entry_book(b5)




while(True):
    print("____Welcome to the Library____\n")
    print("1. View All Books")
    print("2. Borrow Book")
    print("3. Return Book")
    print("4. Exit\n")
    op = int(input("Please Enter Your Choice: "))

   

    if op == 1:
        b1.view_book_info()
    
    elif op == 2:
        id = int(input("Enter book id to borrow: "))
        b1.borrow_book(id)

    elif op == 3:
        id = int(input("Enter book id to return: "))
        b1.return_book(id)

    elif op == 4:
        break

    else:
        print("Invalid option.\n")

        
