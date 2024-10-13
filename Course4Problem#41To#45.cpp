
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #41
float ReadPositiveNumber(string Message)
{
	float Num = 0;

	do
	{
		cout << Message << "\n";
		cin >> Num;

	} while (Num < 0);

	return Num;
}

float HoursToDays(float NumberOfHours)
{
	return (float)NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours)
{
	return (float)NumberOfHours / 24 / 7;
}

float DaysToWeeks(float NumberOfDays)
{
	return (float)NumberOfDays / 7;
}

void GetHoursDaysWeeks()
{
	float NumberOfHours = ReadPositiveNumber("Enter number of hours");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks(NumberOfDays);

	cout << endl;
	cout << "Total Hours = " << NumberOfHours << "\n";
	cout << "Total days = " << NumberOfDays << "\n";
	cout << "Total weeks = " << HoursToWeeks(NumberOfHours) << "\n";

}

// #42
struct stTaskDuration
{
	int Days, Hours, Minutes, Seconds;
};

stTaskDuration ReadTaskDuration()
{
	stTaskDuration TaskDuration;

 TaskDuration.Days = ReadPositiveNumber("Enter number of days");
 TaskDuration.Hours = ReadPositiveNumber("Enter number of hours");
 TaskDuration.Minutes = ReadPositiveNumber("Enter number of minutes");
 TaskDuration.Seconds = ReadPositiveNumber("Enter number of seconds");

 return TaskDuration;
}

int TaskDurationInSeconds(stTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;

	DurationInSeconds = TaskDuration.Days * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.Hours * 60 * 60;
	DurationInSeconds += TaskDuration.Minutes * 60;
	DurationInSeconds += TaskDuration.Seconds;

	return DurationInSeconds;

}

// #43
struct stDuration
{
	int Days, Hours, Minutes, Seconds;
};

stDuration GetTaskDurationPerSeconds(int TotalSeconds)
{

	stDuration TaskDuration;
	const int SecondsPerDays = 24 * 60 * 60;
	const int SecondsPerHours = 60 * 60;
	const int SecondsPerMinutes = 60;

	int Remiender = 0;

	TaskDuration.Days = floor(TotalSeconds / SecondsPerDays);
	Remiender = TotalSeconds % SecondsPerDays;
	TaskDuration.Hours = floor(Remiender / SecondsPerHours);
	Remiender = TotalSeconds % SecondsPerHours;
	TaskDuration.Minutes = floor(Remiender / SecondsPerMinutes);
	Remiender = TotalSeconds % SecondsPerMinutes;
	TaskDuration.Seconds = Remiender;

	return TaskDuration;

}

void PrintTotalTaskDuration(stDuration TotalDuration)
{

	cout << TotalDuration.Days << " : ";
	cout << TotalDuration.Hours << " : ";
	cout << TotalDuration.Minutes << " : ";
	cout << TotalDuration.Seconds << "\n";

}

// #44
enum enDaysOfWeek{Sat = 1 , Sun = 2 , Mon = 3 , Tue = 4 , Wed = 5 , Thu = 6 , Fri = 7};

int ReadNumberInRange(string Message,int From , int To)
{
	int Number = 0;
	do
	{
		cout << Message << "\n";
		cin >> Number;

	} while (Number < From || Number > To);

	return Number;
}

enDaysOfWeek ReadDayOfWeek()
{
	return (enDaysOfWeek)ReadNumberInRange("Enter number of day Sat = 1 , Sun = 2 , Mon = 3 , Tue = 4 , Wed = 5 , Thu = 6 , Fri = 7" , 1 , 7);
}

string GetDayOfWeek( enDaysOfWeek Day)
{
	switch (Day)
	{
	case enDaysOfWeek::Sat:
		return "Saturday";
	case enDaysOfWeek::Sun:
		return "Sunday";
	case enDaysOfWeek::Mon:
		return "Monday";
	case enDaysOfWeek::Tue:
		return "Tuesday";
	case enDaysOfWeek::Wed:
		return "Wednesday";
	case enDaysOfWeek::Thu:
		return "Thursday";
	case enDaysOfWeek::Fri:
		return "Friaday";
	}
}

// #45
enum enMonths{Jan = 1 , Feb =2 , Mar = 3 , Ap = 4 , May = 5 , Jun = 6 , 
			  Jul = 7 , aug = 8 , sep = 9 , Oct = 10 , Nov = 11 , Dec = 12};

enMonths ReadMonth()
{
	return (enMonths)ReadNumberInRange("Enter month [1 to 12]" , 1 , 12);
}

string GetMonth(enMonths Month)
{
	switch (Month)
	{ 
	case enMonths::Jan:
		return "January";
	case enMonths::Feb:
		return "February";
	case enMonths::Mar:
		return "March";
	case enMonths::Ap:
		return "April";
	case enMonths::May:
		return "May";
	case enMonths::Jun:
		return "June";
	case enMonths::Jul:
		return "July";
	case enMonths::aug:
		return "August";
	case enMonths::sep:
		return "Septemper";
	case enMonths::Oct:
		return "Octoper";
	case enMonths::Nov:
		return "November";
	case enMonths::Dec:
		return "December";
	}
		

}

int main()
{
	// #41
	//GetHoursDaysWeeks();

	// #42
	//cout << " Total seconds = " << TaskDurationInSeconds(ReadTaskDuration()) << "\n";

	// #43
	/*int TotalSeconds = ReadPositiveNumber("Enter number of seconds");
	PrintTotalTaskDuration(GetTaskDurationPerSeconds(TotalSeconds));*/

	// #44
	//cout << "Today is " << GetDayOfWeek(ReadDayOfWeek());

	// #45
	//cout << GetMonth(ReadMonth());

	return 0;
}