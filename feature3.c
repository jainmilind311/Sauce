class A{
	private int id;
	private String name;
	public void A(int id,String name){
	
		this.id = id;
		this.name = name;
	}

}

class App{

	public static void main(String args[]){
		
		A a = new A(3, "Sauce");
		System.out.println(a.toString());
	}
}
