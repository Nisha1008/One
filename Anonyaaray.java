public class Anonyaaray {
    public static void main(String args[]){
        Anonyaaray.sum(new int[]{10,20,30});
    }
    static void sum(int[] no){
        int total=0;
        for(int i:no){
            total = total+i;
        }
        System.out.println("sun is:"+total);
    }
}
