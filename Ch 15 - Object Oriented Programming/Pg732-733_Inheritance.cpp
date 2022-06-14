#include <iostream>
#include <string>

using namespace std;

class Quote;
double print_total(ostream &os, const Quote &item, size_t n);

class Quote {
public:
    string isbn() const {
        return "123";
    }

    virtual double net_price(size_t n) const {
        return n * 10;
    }
};

class Bulk_quote : public Quote {
public:
    double net_price(size_t n) const override {
        return n * 5;
    }
};

// Pg 733 parts
double print_total(ostream &os, const Quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << "# sold: " << n << " total due: " << ret << endl;
    
    return ret;
}

int main(void) {
    // Pg 733 parts
    Quote basic;
    Bulk_quote bulk;

    print_total(cout, basic, 20);
    print_total(cout, bulk, 20);
}