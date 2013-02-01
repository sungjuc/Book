package ch01;

import acm.graphics.GLabel;
import acm.program.GraphicsProgram;

public class HelloProgram extends GraphicsProgram {
	public void run(){
		add(new GLabel("hello, world", 100, 75));
	}
}
