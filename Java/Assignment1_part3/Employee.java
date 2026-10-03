class Employee{              
	int id;
	String name;
	double salary;

	void setId(int i){
		this.id=i;
	}
	
	void setName(String i){
		this.name=i;
	}

	void setSalary(double i){
		this.salary=i;
	}

	int getId(){
		return this.id;
	}

	String getName(){
		return this.name;
	}

	double getSalary(){
		return this.salary;
	}

	Employee(){
		System.out.println("default constructor");
		this.id=12;
		this.name="Swara";
		this.salary=13546;
		
	}

	Employee(int i,String n,double c){
		System.out.println("parameterised constructor");
		this.id=i;
		this.name=n;
		this.salary=c;
	}


	void display(){
		System.out.println("id is: " +this.id);
		System.out.println("name is: " +this.name);
		System.out.println("salary is: "+this.salary);
	}


}
class Test{
	public static void main(String[] args){
	Employee d1; //reference
	d1=new Employee();
	d1.setId(1);
	d1.setName("shejal");
	d1.setSalary(100000);
	System.out.println(d1.getId());
	System.out.println(d1.getName());
	System.out.println(d1.getSalary());

	
	Employee d2;
	d2=new Employee();
	d2.display();

	Employee d3;
	d3=new Employee(15,"Shreyas",200000);
	d3.display();


	}
}