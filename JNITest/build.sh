set -v
javac -h . HelloWorldJNI.java
g++ -c -fPIC -I${JAVA_HOME}/include -I${JAVA_HOME}/include/linux HelloWorldJNI.cpp -o HelloWorldJNI.o
g++ -shared -fPIC -o libnative.so HelloWorldJNI.o -lc

java -cp . -Djava.library.path=. HelloWorldJNI