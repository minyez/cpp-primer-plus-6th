namespace std
{
    struct Move
    {
        double x;
        double y;
    };
    void set(Move &m, double x, double y);
    void right(Move &m);
    void left(Move &m);
    void up(Move &m);
    void down(Move &m);
}

typedef std::Move Item;

class List
{
    private:
        enum {MAX=20};
        Item items[MAX];
        int top;
    public:
        List() { top = 0; };
        bool isempty() const;
        bool isfull() const;
        bool add();
        bool add(double x, double y = 0.0);
        void visit(void (*pif)(Item &));
        void show();
};
