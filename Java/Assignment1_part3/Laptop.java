class Laptop{
	int id;
	String name;
	int battery;
	int storage;

	void setId(int i){
		this.id=i;
	}
	
	void setName(String i){
		this.name=i;
	}

	void setBattery(int i){
		this.battery=i;
	}

	void setStorage(int i){
		this.storage=i;
	}

	int getId(){
		return this.id;
	}

	String getName(){
		return this.name;
	}

	int getBattery(){
		return this.battery;
	}

	int getStorage(){
		return this.storage;
	}

	Laptop(){
		System.out.println("default constructor");
		this.id=35;
		this.name="asus";
		this.battery=30;
		this.storage=512;
	}

	Laptop(int i,String n,int c,int r){
		System.out.println("parameterised constructor");
		this.id=i;
		this.name=n;
		this.battery=c;
		this.storage=r;
	}


	void display(){
		System.out.println("id is: "+this.id);
		System.out.println("name is: "+this.name);
		System.out.println("battery is: "+this.battery);
		System.out.println("storage is: "+this.storage);
	}


}
class Test{
	public static void main(String[] args){
	Laptop l1;
	l1=new Laptop();
	l1.setId(1);
	l1.setName("hp");
	l1.setBattery(50);
	l1.setStorage(512);
	System.out.println(l1.getId());
	System.out.println(l1.getName());
	System.out.println(l1.getBattery());
	System.out.println(l1.getStorage());

	
	Laptop l2;
	l2=new Laptop();
	l2.display();

	Laptop l3;
	l3=new Laptop(4,"dell",70,256);
	l3.display();


	}
}