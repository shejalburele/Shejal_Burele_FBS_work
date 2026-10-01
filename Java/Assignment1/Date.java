class Date{
	int day;
	int month;
	int year;
	String dow;
}
class Test{
	public static void main(String[] args){
	Date d1;
	d1=new Date();
	d1.day=10;
	d1.month=05;
	d1.year=2026;
	d1.dow="Tuesday";
	System.out.println(d1);
	System.out.println("Day is: "+d1.day);
	System.out.println("month is: "+d1.month);
	System.out.println("year is: "+d1.year);
	System.out.println("day of week is: "+d1.dow);	
	}
}
		
