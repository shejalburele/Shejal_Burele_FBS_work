class Admin{              
	int id;
	String name;
	double salary;
	double allowance;
}
class Test{
	public static void main(String[] args){
	Admin d1; //reference
	d1=new Admin();
	d1.id=1;
	d1.name="shejal";
	d1.salary=100000;
	d1.allowance=12000;
	System.out.println(d1);
	System.out.println("id is: " +d1.id);
	System.out.println("name is: " +d1.name);
	System.out.println("salary is: "+d1.salary);
	System.out.println("allowance is: "+d1.allowance);
	}
}