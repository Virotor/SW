#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char* argv[]) {
	int day;
	cout«"Ââåäèòå íîìåğ äíÿ ";
	cin»day_num;
	switch (day) {
	case 1:
		cout«"Ïîíåäåëüíèê"«endl;
		break;
	case 2:
		cout«"Âòîğíèê"«endl;
		break;
	case 3:
		cout«"Ñğåäà"«endl;
		break;
	case 4:
		cout«"×åòâåğã"«endl;
		break;
	case 5:
		cout«"Ïÿòíèöà"«endl;
		break;
	case 6:
		cout«"Ñóááîòà"«endl;
		break;
	case 7:
		cout«"Âîñêğåñåíüå"«endl;
		break;
	default:
		cout«"Íå âåğíî, ââåäèòå ÷èñëî îò 1 äî 7"«endl;
	}
	return 0;
}