class SalesManager{
	int id;
	String name;
	double incentive;
	double target;

	void setId(int i){
		this.id=i;
	}
	
	void setName(String i){
		this.name=i;
	}

	void setIncentive(double i){
		this.incentive=i;
	}

	void setTarget(double i){
		this.target=i;
	}

	int getId(){
		return this.id;
	}

	String getName(){
		return this.name;
	}

	double getIncentive(){
		return this.incentive;
	}

	double getTarget(){
		return this.target;
	}

	SalesManager(){
		System.out.println("default constructor");
		this.id=35;
		this.name="shreeja";
		this.incentive=3000;
		this.target=50000;
	}

	SalesManager(int i,String n,double c,double r){
		System.out.println("parameterised constructor");
		this.id=i;
		this.name=n;
		this.incentive=c;
		this.target=r;
	}



	void display(){
		System.out.println("id is: "+this.id);
		System.out.println("name is: "+this.name);
		System.out.println("incentive is: "+this.incentive);
		System.out.println("target is: "+this.target);
	}


}
class Test{
	public static void main(String[] args){
	SalesManager sm;
	sm=new SalesManager();
	sm.setId(1);
	sm.setName("Shreyas");
	sm.setIncentive(2000);
	sm.setTarget(30000);
	System.out.println(sm.getId());
	System.out.println(sm.getName());
	System.out.println(sm.getIncentive());
	System.out.println(sm.getTarget());

	
	SalesManager sm1;
	sm1=new SalesManager();
	sm1.display();

	SalesManager sm2;
	sm2=new SalesManager(4,"shejal",2000,100000);
	sm2.display();


	}
}
