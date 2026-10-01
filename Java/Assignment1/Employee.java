class Employee{              
	int id;
	String name;
	double salary;
}
class Test{
	public static void main(String[] args){
	Employee d1; //reference
	d1=new Employee();
	d1.id=1;
	d1.name="shejal";
	d1.salary=100000;
	System.out.println(d1);
	System.out.println("id is: " +d1.id);
	System.out.println("name is: " +d1.name);
	System.out.println("salary is: "+d1.salary);
	}
}