class HR{              
	int id;
	String name;
	double salary;
	double commission;

	void setId(int i){
		this.id=i;
	}
	
	void setName(String i){
		this.name=i;
	}

	void setSalary(double i){
		this.salary=i;
	}

	void setCommission(int i){
		this.commission=i;
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

	double getCommission(){
		return this.commission;
	}

	HR(){
		System.out.println("default constructor");
		this.id=35;
		this.name="divya";
		this.salary=4689;
		this.commission=1200;
	}

	HR(int i,String n,double c,double r){
		System.out.println("parameterised constructor");
		this.id=i;
		this.name=n;
		this.salary=c;
		this.commission=r;
	}


	void display(){
		System.out.println("id is: " +this.id);
		System.out.println("name is: " +this.name);
		System.out.println("salary is: "+this.salary);
		System.out.println("commission is: "+this.commission);
	}


}
class Test{
	public static void main(String[] args){
	HR d1; //reference
	d1=new HR();
	d1.setId(1);
	d1.setName("shejal");
	d1.setSalary(100000);
	d1.setCommission(12000);
 	System.out.println(d1.getId());
	System.out.println(d1.getName());
	System.out.println(d1.getSalary());
	System.out.println(d1.getCommission());

	
	HR d2;
	d2=new HR();
	d2.display();

	HR d3;
	d3=new HR(4,"vanita",50576,2300);
	d3.display();

	}
}