class Wektor2D
{
private:
    double x;
    double y;
public:
    Wektor2D() //konstruktor domyslny
    {
        x = 0;
        y = 0;
    }
    Wektor2D(double xcord_1, double xcord_2) // konstruktor ustawiajacy wspolrzedne
    {
        x = xcord_1;
        y = xcord_2;
    }
    double getX() { return x; } //gettery
    double getY() { return y; }
    void setX(double xcord_1) { x = xcord_1; } //settery
    void setY(double xcord_2) { y = xcord_2; }
};
Wektor2D operator+(Wektor2D v1, Wektor2D v2) // operator dodawania
{
    return Wektor2D(v1.getX() + v2.getX(), v1.getY() + v2.getY());
}
double operator*(Wektor2D v1, Wektor2D v2) //iloczyn skalarny
{
    return v1.getX() * v2.getX() + (v1.getY() * v2.getY()); 
}
