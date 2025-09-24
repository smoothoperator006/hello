class pat {
    public static void main(String[] args) {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<7;j++)
            {
                if(i==0 || i==4)
                {
                    if(j<5)
                    System.out.print("*");
                }
                else if(i!=0 && i!=4)
                {
                    if(j==0 || j==6)
                    System.out.print("*");
                }
                else
                {
                    System.outprint(" ");
                }
                
            }
            System.out.println();
        }
    }
}
