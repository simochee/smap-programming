import java.util.Scanner;

class Test {
	public static void main( String[] args ) {
		System.out.print("名前：");

		Scanner scan = new Scanner(System.in);

		String 名前 = scan.next();

		System.out.println("あなたの名前は" + 名前 + "です");
	}
}