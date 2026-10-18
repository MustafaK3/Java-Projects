 class Vehicle {
    private String make;
    private String model;
    private int year;
    private String color;

    // Constructor
    public Vehicle(String make, String model, int year, String color) {
        this.make = make;
        this.model = model;
        this.year = year;
        this.color = color;
    }

    // Getters
    public String getMake() {
        return make;
    }

    public String getModel() {
        return model;
    }

    public int getYear() {
        return year;
    }

    public String getColor() {
        return color;
    }

    // Setters
    public void setMake(String make) {
        this.make = make;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public void setColor(String color) {
        this.color = color;
    }

    // ToString method
    public String toString() {
        return "The vehicle is a " + make + " " + model +
               ", year " + year + ", color " + color;
    }
}

class Main {
    public static void main(String[] args) {
        Vehicle v1 = new Vehicle("Toyota", "GR86", 2022, "Red");
        Vehicle v2 = new Vehicle("Subaru", "BRZ", 2021, "White");

        System.out.println(v1.toString());
        System.out.println(v2.toString());
    }
}
