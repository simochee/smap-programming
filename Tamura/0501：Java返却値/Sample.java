class Car {
	double gas;
	void setGas(double g) {
		gas = g;
	}

	double getGas() {
		return gas;
	}

	void showGas() {
		System.out.println("�K�X��" + gas + "l�c���Ă��܂�");
	}
}

class Sample {
	public static void main( String[] args ) {
		Car car1 = new Car();

		car1.setGas(20.5);

		car1.showGas();

		double g;
		g = car1.getGas();
		System.out.println(g + 20);
	}
}