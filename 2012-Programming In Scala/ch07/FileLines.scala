object FileLines{
	def main(args:Array[String]) {
		val temp = forLineLengths
		temp.foreach(println)
		grep(".*est.*")
	}

	val filesHere=(new java.io.File(".")).listFiles

	def fileLines(file: java.io.File) = 
		scala.io.Source.fromFile(file).getLines().toList

	def grep(pattern: String) = 
		for {
			file <- filesHere
			if file.getName.endsWith(".scala")
			line <- fileLines(file)
			trimmed = line.trim
			if trimmed.matches(pattern)
		} println(file + ": " + trimmed)

	def forLineLengths = 
		for {
			file <- filesHere
			if file.getName.endsWith(".scala")
			line <- fileLines(file)
			trimmed = line.trim
			if trimmed.matches(".*for.*")
		} yield trimmed.length
}

