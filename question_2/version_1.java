public class singleton{
    public static singleton instance;
    private static singleton(){}

    public static singleton getInstance(){
        if(instance==null){
            instance=new singleton();
        }
        return instance;
    }
}
/*线程不安全*/