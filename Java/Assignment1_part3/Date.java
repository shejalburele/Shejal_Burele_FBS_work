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

	int getDay(){
		return this.day;
	}

	int getMonth(){
		return this.month;
	}

	int getYear(){
		return this.year;
	}

	String getDow(){
		return this.dow;
	}

	Date(){
		System.out.println("default constructor");
		this.day=35;
		this.month=05;
		this.year=2026;
		this.dow="sunday";
	}

	Date(int i,int n,int c,String r){
		System.out.println("parameterised constructor");
		this.day=i;
		this.month=n;
		this.year=c;
		this.dow=r;
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
	System.out.println(d1.getDay());
	System.out.println(d1.getMonth());
	System.out.println(d1.getYear());
	System.out.println(d1.getDow());

	
	Date d2;
	d2=new Date();
	d2.display();

	Date d3;
	d3=new Date(15,05,2005,"sunday");
	d3.display();


	}
}
		