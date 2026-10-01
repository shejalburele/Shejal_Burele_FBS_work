class SalesManager{
	int id;
	String name;
	double incentive;
	double target;
}
class Test{
	public static void main(String[] args){
	SalesManager sm;
	sm=new SalesManager();
	sm.id=1;
	sm.name="Shreyas";
	sm.incentive=2000;
	sm.target=30000;
	System.out.println(sm);
	System.out.println("id is: "+sm.id);
	System.out.println("name is: "+sm.name);
	System.out.println("incentive is: "+sm.incentive);
	System.out.println("target is: "+sm.target);
	}
}


