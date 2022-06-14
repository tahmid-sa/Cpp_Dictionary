#include <iostream>
#include <string>

using namespace std;

// Pg 741 parts (Class declarations)
class Quote;
class Bulk_quote;
double print_total(ostream &os, const Quote &item, size_t n);

// Pg 734 parts (Quote class)
class Quote {
public:
    Quote() = default;
    Quote(const string &book, double sales_price) : bookNo(book), price(sales_price) { }

    string isbn() const {
        return bookNo;
    }

    virtual double net_price(size_t n) const {
        return n * price;
    }
    virtual ~Quote() = default;
private:
    string bookNo = "123";
protected:
    double price = 0.0;
};

// Pg 753 parts (Virtual functions)
class Disc_quote : public Quote {
public:
    Disc_quote() = default;
    Disc_quote(const string &book, double price, size_t qty, double disc) : 
    Quote(book, price), quantity(qty), discount(disc) {}
    double net_price(size_t) const = 0;
protected:
    size_t quantity = 0;
    double discount = 0.0;
};

// Pg 736 parts (Bulk_quote class) 
// Pg 754-755 parts (Bulk_quote)
class Bulk_quote : public Disc_quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const string& book, double price, size_t qty, double disc) : Disc_quote(book, price, qty, disc) {};

    double net_price(size_t cnt) const override {
        if (cnt >= min_qty) {
            return cnt * (1 - discount) * price;
        }
        else {
            return cnt * price;
        }
    }

private:
    size_t min_qty = 0;
    double discount = 0.0;
};

// Pg 733 parts
double print_total(ostream &os, const Quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
    
    return ret;
}

int main(void) {
    // Pg 733 parts
    Quote basic;
    Bulk_quote bulk;

    print_total(cout, basic, 20);
    print_total(cout, bulk, 20);

    // Pg 738 parts
    Quote item;
    //Bulk_quote bulk;
    Quote *p = &item;
    p = &bulk;
    Quote &r = bulk;
    cout << endl;
    
    // Pg 747 parts
    Quote base("0-201-82470-1", 50);
    print_total(cout, base, 10);
    Bulk_quote derived("0-201-82470-1", 50, 5, .19);
    print_total(cout, derived, 10);

    // Pg 754 parts
    // Disc_quote discounted; error: can't define aDisc_quoteobject

    return 0;
}