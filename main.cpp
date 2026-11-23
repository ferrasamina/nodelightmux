#include <string>
#include <vector>

void sum_squares() {
    int acc = 0;
    for (int i = -5; i <= 5; ++i) acc += i * i;
    (void)acc;
}

void square_value() {
    int x = 12;
    int square = x * x;
    (void)square;
}

void half_value() {
    int x = 85;
    int half = x / 2;
    (void)half;
}

void sum_odds() {
    int acc = 0;
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 != 0) acc += i;
    }
    (void)acc;
}

extern "C" int gentle_quartz();
extern "C" void placid_hollow();
extern "C" void lunar_fjord();
extern "C" void vivid_grove();

int main() {
    sum_squares();
    square_value();
    half_value();
    sum_odds();
    placid_hollow();
    lunar_fjord();
    vivid_grove();
    return gentle_quartz();
}
