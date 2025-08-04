class Burger {
public:
    // MAIN constructor - does all the work
    Burger(bool cheese, bool bacon, bool pickle) {
        addBun();
        if(cheese) addCheese();
        if(bacon) addBacon();
        if(pickle) addPickle();
    }
    
    // SIMPLER versions that "point to" the main one:
    Burger() : Burger(false, false, false) {} // Plain burger
    Burger(bool cheese) : Burger(cheese, false, false) {} // Just cheese
    Burger(bool cheese, bool bacon) : Burger(cheese, bacon, false) {} // No pickle
};

/*
What's Happening?
One main constructor that knows how to build the complete object

Other constructors just tell it which options to use

No duplicate code - all the actual building happens in one place
*/