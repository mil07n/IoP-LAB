#include <stdio.h>
struct Book
{
    char title[100];
    char author[100];
    int publicationYear;
    float price;
};
struct Book readBookInfo()
{
struct Book b;
printf("title: ");
scanf(" %s", &b.title);
printf("author name: ");
scanf(" %s", &b.author);
printf("publication year: ");
scanf("%d", &b.publicationYear);
printf("price: ");
scanf("%f", &b.price);
return b;
}
void displayBookInfo(struct Book b)
{
    printf("\nBook Information:\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Publication Year:%d\n", b.publicationYear);
    printf("Price:%f\n", b.price);
}
int main()
{
    struct Book book;
    book = readBookInfo();
    displayBookInfo(book);
    return 0;
}