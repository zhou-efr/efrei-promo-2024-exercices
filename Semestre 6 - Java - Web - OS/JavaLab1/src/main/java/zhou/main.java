package zhou;

public class main {
    public static void main(String[] args) {
        Invoice pymt1 = new CardPay("alibaba", 1000.0);
        pymt1.compute();
        Invoice pymt2 = new CashPay("billgates", 1990.0, 2000.0);
        pymt2.compute();

        SaleOrder sale1 = new SaleOrder(pymt1);
        SaleOrder sale2 = new SaleOrder(pymt2);

        System.out.println(sale1);
        System.out.println(sale2);
    }
}
