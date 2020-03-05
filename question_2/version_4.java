public class singleton{
    private static volatile singleton instance;
    private static singleton(){}
    public static singleton getInstance(){
        if(instance==null){
            synchronized(singleton.class){
                if(instance==null){
                    instance=new singleton();
                    return instance;
                }
            }
        }
    }
}
/*采用双重锁，多线程下可以保持高性能*/