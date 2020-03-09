public class ThrowableExample {
	public static void main(String[] args) throws MyThrowable {
		System.out.println(myFunc());
	}

	static int myFunc() throws MyThrowable {
		if (Math.random() < 0.5) {
			throw new MyThrowable();
		} else {
			return 42;
		}
	}

	static class MyThrowable extends Throwable {
	}
}
