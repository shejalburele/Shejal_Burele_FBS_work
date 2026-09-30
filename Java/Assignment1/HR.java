class HR{              
	int id;
	String name;
	double salary;
	double commission;
}
class Test{
	public static void main(String[] args){
	HR d1; //reference
	d1=new HR();
	d1.id=1;
	d1.name="shejal";
	d1.salary=100000;
	d1.commission=12000;
	System.out.println(d1);
	System.out.println("id is: " +d1.id);
	System.out.println("name is: " +d1.name);
	System.out.println("salary is: "+d1.salary);
	System.out.println("commission is: "+d1.commission);
	}
}