public class HelloWorldJNI {

    static {
        // load the shared library in static block
        System.loadLibrary("native"); 
    }

    public static void main(String[] args) {
        new HelloWorldJNI().sayHello();
    }

    // declare a native method sayHellow that receives no arguments and returns void
    private native void sayHello();
}