#include <cstdio>

struct bookCard {
	char btitle[50];
	char bauthor[50];
	char bpublisher[50];
	char bsubject[20];
	char bISBN[11];
	int bOCIC;
	int bDewey[2];
	int bpubYear;
	int bacqYear;
	int bquantity;
};
bookCard b1;

int main() {
	bookCard b1 = {
		"The Adventures of Sherlock Holmes", "Doyle, Arthur Conan", "George Newnes", "Fiction", "0393059162",
		57490922, { 510, 78 }, 1982, 2001, 4
	};
	// b1.btitle = "The Adventures of Sherlock Holmes";
	// b1.bauthor = "Doyle, Arthur Conan";
	// b1.bpublisher = "George Newnes";
	// b1.bsubject = "Fiction";
	// b1.bISBN = "0393059162";
	// b1.bOCIC = 57490922;
	// b1.bDewey = { 510, 78 };
	// b1.bpubYear = 1982;
	// b1.bacqYear = 2001;
	// b1.bquantity = 4;

	printf("BOOK TITLE: %s\n",b1.btitle);
	printf("Author: %s\n",b1.bauthor);
	printf("Publisher: %s\n", b1.bpublisher);
	printf("Subject: %s\n", b1.bsubject);
	printf("ISBN: %s\n", b1.bISBN);
	printf("OCIC: %d\n", b1.bOCIC);
	printf("Dewey Digits: %d.%d\n", b1.bDewey[0],b1.bDewey[1]);
	printf("Publish Year: %d\n", b1.bpubYear);
	printf("Year Acquired: %d\n", b1.bacqYear);
	printf("Quantity: %d\n", b1.bquantity);


	return 0;
}