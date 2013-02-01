package ch01;

import acm.program.ConsoleProgram;

/**
 * Program receiving two double numbers and printing the multiplying of two
 * numbers divided by two.
 * 
 * @author scho
 * 
 */
public class MyProgram extends ConsoleProgram {
	public void run() {
		// Reads first double number
		double b = readDouble("Enter b: ");
		// Reads second double number
		double h = readDouble("Enter h: ");
		// Calculates the result
		double a = (b * h) / 2;
		// Prints the result
		println("(b * h) / 2 = " + a);

	}
}
