class Student{
	int frn;
	String studentName;
	int distanceCovered;

	void setFrn(int i){
		this.frn=i;
	}
	
	void setStudentName(String i){
		this.studentName=i;
	}

	void setDistanceCovered(int i){
		this.distanceCovered=i;
	}

	int getFrn(){
		return this.frn;
	}

	String getStudentName(){
		return this.studentName;
	}

	int getDistanceCovered(){
		return this.distanceCovered;
	}

	

	Student(){
		System.out.println("default constructor");
		this.frn=35;
		this.studentName="divya";
		this.distanceCovered=30;
		}

	Student(int i,String n,int c){
		System.out.println("parameterised constructor");
		this.frn=i;
		this.studentName=n;
		this.distanceCovered=c;
		}

	
	void display(){
		System.out.println("frn is: "+this.frn);
		System.out.println("student Name is: "+this.studentName);
		System.out.println("Distance covered is: "+this.distanceCovered);
	}

}
class Test{
	public static void main(String[] args){
	Student d1;
	d1=new Student();
	d1.setFrn(007);
	d1.setStudentName("divya");
	d1.setDistanceCovered(35);
	System.out.println(d1.getFrn());
	System.out.println(d1.getStudentName());
	System.out.println(d1.getDistanceCovered());

	Student d2;
	d2=new Student();
	d2.display();

	Student d3;
	d3=new Student(4,"aryan",70);
	d3.display();

	}	
}