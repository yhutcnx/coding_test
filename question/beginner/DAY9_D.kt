// kotlinc ./question/beginner/DAY9_D.kt -include-runtime -d day9.jar && java -jar day9.jar

// 현재는 안되는 함수고, Float -> Double 변경 후 해결 가능
fun iSolution36(balls: Int, share: Int): Int {
    // balls C share
    var parent = 1f
    var child = 1f
    if (balls != share){
        for (i in balls downTo share+1 ){ parent *= i }
        for (i in 1 .. balls - share){ child *= i }
    }
    return (parent / child).toInt()
}

fun main() {

    for (i in 2..30) {
        for (j in 1..i) {
            println("$i - $j => ${iSolution36(i, j)}")
        }
    }
}
