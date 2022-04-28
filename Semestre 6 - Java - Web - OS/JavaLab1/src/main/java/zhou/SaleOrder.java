package zhou;


public class SaleOrder {
    private Invoice pymt;

    public SaleOrder(Invoice pymt) {
        this.pymt = pymt;
    }

    @Override
    public String toString() {
        return "SaleOrder{" +
                "pymt=" + pymt +
                '}';
    }

    public Invoice getPymt() {
        return pymt;
    }
    public void setPymt(Invoice pymt) {
        this.pymt = pymt;
    }
}
