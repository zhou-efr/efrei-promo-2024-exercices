package zhou;

public class CardPay extends Invoice implements Payable {

    double TAX;
    double serviceTax;

    public CardPay(String name, double amount) {
        super(name, amount);

        this.name = name;
        this.totalAmount = amount;
        TAX = 0.1;
        gstTax = GST;
    }

    public double getServiceTax() {
        return serviceTax;
    }
    public void setServiceTax(double serviceTax) {
        this.serviceTax = serviceTax;
    }
    public double getTAX() {
        return TAX;
    }
    public void setTAX(double TAX) {
        this.TAX = TAX;
    }

    @Override
    public double compute() {
        return super.compute() + (totalAmount * TAX) + (totalAmount * serviceTax);
    }

    @Override
    public String toString() {
        return "CardPay{" +
                "name=" + name +
                ", totalAmount=" + totalAmount +
                ", TAX=" + TAX +
                ", serviceTax=" + serviceTax +
                ", charge=" + compute() +
                "}";
    }
}
