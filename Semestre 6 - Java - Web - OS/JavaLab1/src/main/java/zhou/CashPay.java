package zhou;

public class CashPay extends Invoice implements Payable {
    private double tenderAmount;
    private double change;

    public CashPay(String name, double amount, double tenderAmt) {
        super(name, amount);
        this.name = name;
        this.totalAmount = amount;

        this.tenderAmount = tenderAmt;
        gstTax = GST;
    }

    public double getTenderAmount() {
        return tenderAmount;
    }

    public void setTenderAmount(double tenderAmount) {
        this.tenderAmount = tenderAmount;
    }

    @Override
    public double compute() {
        change = tenderAmount - super.compute();
        return super.compute();
    }

    @Override
    public String toString() {
        return "CashPay{" +
                "tenderAmount=" + tenderAmount +
                ", name='" + name + '\'' +
                ", totalAmount=" + totalAmount +
                ", gstTax=" + gstTax +
                ", change=" + (change > 0 ? change : -change + " left to pay") +
                ", charge=" + compute() +
                "}";
    }

    public double getChange() {
        return change;
    }

    public void setChange(double change) {
        this.change = change;
    }
}
