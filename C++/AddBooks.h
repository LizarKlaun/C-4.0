char** AddBooks(char** books, int size){
	cout << "Name can be no more 10 symbol: ";
	char* nameBook = new char[10];
	cin.getline(nameBook, 10);
	char** copyBooks = new char*[size];
	for (int i = 0; i < size; i++) {
		copyBooks[i] = new char[strlen(books[i]) + 1];
		for (int j = 0; j < strlen(books[i]) + 1; j++) {
			copyBooks[i][j] = (char)books[i][j];
		}
	int addSize = size;
	delete[]books;
	books = nullptr;
	size++;

	books = new char* [size];

	for (int i = 0; i < size; i++) {
		books[i] = new char[strlen(copyBooks[i]) + 1];
		books[i] = copyBooks[i];

		cout << str[i] << endl;
	}

	return books;
	delete[]nameBook;
	nameBook = nullptr;
}