#include <iostream>

using namespace std;

void lotto(int, int);

int main(void)
{   
    lotto(49, 6);
}

void lotto(int total_balls, int balls_to_allot)
{
    if (total_balls < balls_to_allot)
    {
        cout << "This is not happen" << endl;
	return;
    }

    srand(time(NULL));

    int *balls = new int[balls_to_allot];

    for (int i = 0; i < balls_to_allot; i++)
    {
        balls[i] = rand() % total_balls + 1;
        
	for (int j = 0; j < i + 1; j++)
        {
	    if (balls[i] == balls[j] && i != j)
	    {
                i--;
		break;
	    }
	    else if (j == i)
            {
	        cout << "Ball [" << i + 1 << "] = " << balls[i] << endl;
	    }
	 }
    }
}
