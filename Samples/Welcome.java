import java.util.Scanner;

class Welcome {
	public static void main( String args[] ) {
		System.out.print("名前：");
		
		Scanner scan = new Scanner(System.in);
		
		String name = scan.next();
		System.out.println("ようこそ、" + name + "さん！");
	}
}