#include<iostream>
#include<string>
using namespace std;

class Book {
    private:
        string bookTitle[50], bookAuthor[50], title;
        int bookYear[50];
        int bookCount = 0; 
        
    public: 
        void AddBook() {
        	cout << endl <<"Enter Title: ";
            cin.ignore();
        	getline(cin, bookTitle[bookCount]); 
        	cout << "Enter Author: ";
        	getline(cin, bookAuthor[bookCount]);
        	cout << "Enter Year: ";
        	cin >> bookYear[bookCount];
        	cout << "Book added successfully!" << endl;
        	bookCount++;
    	}
        void DisplayBooks() {
        	if (bookCount == 0) {
            cout << "No books available to display." << endl;
            return;
       		}
       		cout << "\nBook List:" <<endl;
        	for (int i = 0; i < bookCount; i++) {
            	cout << "\nTitle: " << bookTitle[i] << endl;
            	cout << "Author: " << bookAuthor[i] <<bookYear[i] << endl;
            	cout << "Year: " <<bookYear[i] <<endl;
        	}
    	}
    	void SearchBook(){
    		cout << endl <<"Enter a Book to Search: ";
    		cin.ignore(); 
    		getline(cin, title);
    		bool found = false;
    		for (int i = 0; i < bookCount; i++) {
            	if (bookTitle[i] == title) {
                	cout << "\nBook Found!" << endl;
                	cout << "\nTitle: " << bookTitle[i] << endl;
                	cout << "Author: " << bookAuthor[i] << endl;
                	cout << "Year: " << bookYear[i] << endl ;
                	found = true;
            	}
        	} 
			if (!found){
            		found = false;
            		cout << "Book not found." << endl;
			}       	
		}
};

int main() {
    int choice;
    Book b1;
    do {
        cout << "\nMenu" << endl;
        cout << "1 - Add Book" << endl;
        cout << "2 - Display Book" << endl;
        cout << "3 - Search Book" << endl;			
        cout << "4 - Exit" << endl;	
        cin >> choice;

        switch (choice) {
        case 1:
            b1.AddBook();
            break;
        case 2:
            b1.DisplayBooks();
            break;
        case 3:
            b1.SearchBook();
            break;
        case 4:
            break;
        default:
            cout << "Invalid input" << endl;
            break;					
    	}
    } while(choice != 4);
    return 0;
}
