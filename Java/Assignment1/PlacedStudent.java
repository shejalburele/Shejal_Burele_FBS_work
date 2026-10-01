class PlacedStudent{
	int frn;
	String studentName;
	int distanceCovered;
	String companyName;
	String designation;
}
class Test{
	public static void main(String[] args){
	PlacedStudent d1;
	d1=new PlacedStudent();
	d1.frn=1;
	d1.studentName="shejal";
	d1.distanceCovered=20;
	d1.companyName="amazon";
 	d1.designation="manager";
	System.out.println(d1);
	System.out.println("frn is: "+d1.frn);
	System.out.println("student name is: "+d1.studentName);
	System.out.println("distance covered is: "+d1.distanceCovered);
	System.out.println("company name is: "+d1.companyName);
	System.out.println("designation is: "+d1.designation);
	}
}