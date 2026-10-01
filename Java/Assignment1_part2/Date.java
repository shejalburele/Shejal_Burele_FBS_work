class Date{
	int day;
	int month;
	int year;
	String dow;

	void setDay(int i){
		this.day=i;
	}
	
	void setMonth(int i){
		this.month=i;
	}

	void setYear(int i){
		this.year=i;
	}

	void setDow(String i){
		this.dow=i;
	}

	void display(){
		System.out.println("Day is: "+this.day);
		System.out.println("month is: "+this.month);
		System.out.println("year is: "+this.year);
		System.out.println("day of week is: "+this.dow);
	}	

}
class Test{
	public static void main(String[] args){
	Date d1;
	d1=new Date();
	d1.setDay(10);
	d1.setMonth(05);
	d1.setYear(2026);
	d1.setDow("Tuesday");
	d1.display();
	}
}
		