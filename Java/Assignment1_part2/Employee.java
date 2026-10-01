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
	d1.display();
	}
}