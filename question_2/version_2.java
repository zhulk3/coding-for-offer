public class singleton{
    private static singleton instance;
    private static singleton(){}
    
    public static synchronized singleton getInstance(){
        if(instance==null){
            instance=new singleton();
        }
        return instance;
    }
}
/*加锁，效率不高*/