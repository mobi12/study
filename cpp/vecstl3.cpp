#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Review
{
    std::string title;
    int rating;
};

bool operator <(const Review & r1, const Review & r2);
bool worseThan(const Review & r1, const Review & r2);
bool FillReview(Review & rr);
void ShowReview(const Review & rr);

int main()
{
    vector<Review> books;
    Review temp;
    
    while (FillReview(temp))
        books.push_back(temp);
    
    cout << "Thank you, You entered the following "
         << books.size() << " ratings:\n" << "Rating\tBook\n";
    for_each(books.begin(), books.end(), ShowReview);
    sort(books.begin(), books.end());
    cout << "Sorted by title:\nRating\tBook\n";
    for_each(books.begin(), books.end(), ShowReview);
    
    sort(books.begin(), books.end(), ShowReview);
    cout << "Sorted by rating:\nRating\tBook\n";
    for_each(books.begin(), books.end(), ShowReview);
    
    random_shuffle(books.begin(), books.end());
    cout << "After shuffling:\nRating\tBook\n";
    for_each(books.begin(), books.end(), ShowReview);
    
    cout << "Bye.\n";
    return 0;
}

bool operator <(const Review & r1, const Review & r2)
{
    if (r1.title < r2.title)
        return true;
    else if (r1.title == r2.title && r1.rating < r2.rating)
        return false;
    else
        return false;
}

bool worseThan(const Review & r1, const Review & r2)
{
    if (r1.rating < r2.rating)
        return true;
    else
        return false;
}

bool FillReview(Review & rr)
{
    cout << "Enter book title (quit to quit): ";
    getline(cin, rr.title);
    if (rr.title == "quit")
        return false;
    cout << "Enter book rating: ";
    cin >> rr.rating;
    if (!cin)
        return false;
    cin.get();
    
    return true;
}

void ShowReview(const Review & rr)
{
    cout << rr.rating << "\t" << rr.title << endl;
}