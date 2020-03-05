public class singleton{
    private static singleton instance=new singleton();
    private static singleton(){}
    public static singleton getsingleton() {
        return instance;
    }
}
/*类加载期间new对象*/