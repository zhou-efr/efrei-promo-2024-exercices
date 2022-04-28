package zhou;

public class Invoice implements Payable {

    protected String name;
    protected double totalAmount;
    protected double gstTax;

    public Invoice(String name, double totalAmount) {

        this.name = name;
        this.totalAmount = totalAmount;
        gstTax = GST;
    }

    public double getGstTax() {
        return gstTax;
    }
    public void setGstTax(double gstTax) {
        this.gstTax = gstTax;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public double getTotalAmount() {
        return totalAmount;
    }
    public void setTotalAmount(double totalAmount) {
        this.totalAmount = totalAmount;
    }

    @Override
    public String toString() {
        return "Invoice{" +
                "name='" + name + '\'' +
                ", totalAmount=" + totalAmount +
                ", gstTax=" + gstTax +
                '}';
    }

    public double compute() {
        return totalAmount + totalAmount * gstTax;
    }
}
