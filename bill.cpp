 #include <iostream>
using namespace std;
class first
{
private:
    string item_name[20];
    float item_prize[100];
    int handdle = 1;
    int much;
    float total = 0;

public:
    void take(void);
    void print(void);
    void total_func(void);
};

void first ::take(void)
{
    cout << "how many items did coustemer buyed" << endl;
    cin >> much;
    for (int i = 0; i < much; i++)
    {
        cout << "please enter the name of the " << handdle << " item" << endl;
        cin >> item_name[i];
        cout << "please enter the prize of the " << handdle << " item" << endl;
        cin >> item_prize[i];
        handdle++;
    }
}

void first ::print(void)
{
    for (int i = 0; i < much; i++)
    {
        cout << "prize of " << item_name[i] << " is = " << item_prize[i] << endl;
    }
}
void first ::total_func(void)
{
    for (int i = 0; i < much; i++)
    {
        total = item_prize[i] + total;
    }
    cout << "and the total cost is RS" << total << endl;
}
int main()
{
    first kk;
    kk.take();
    kk.print();
    kk.total_func();
    return 0;
}
