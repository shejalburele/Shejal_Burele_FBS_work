class Student{
	int frn;
	String studentName;
	int distanceCovered;
}
class Test{
	public static void main(String[] args){
	Student d1;
	d1=new Student();
	d1.frn=007;
	d1.studentName="divya";
	d1.distanceCovered=35;
	System.out.println(d1);
	System.out.println("frn is: "+d1.frn);
	System.out.println("student Name is: "+d1.studentName);
	System.out.println("Distance covered is: "+d1.distanceCovered);
	}
}