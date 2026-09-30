class Laptop{
	int id;
	String name;
	int battery;
	int storage;
}
class Test{
	public static void main(String args[]){
	Laptop l1;
	l1=new Laptop();
	l1.id=1;
	l1.name="hp";
	l1.battery=50;
	l1.storage=512;
	System.out.println(l1);
	System.out.println("id is: "+l1.id);
	System.out.println("name is: "+l1.name);
	System.out.println("battery is: "+l1.battery);
	System.out.println("storage is: "+l1.storage);
	}
}
