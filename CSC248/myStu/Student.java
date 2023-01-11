public class Student // default consructor
{
    private int id;
    private String name;
    private int part;
    private double cgpa;

    public Student() // normal constructor
    {
        id = -1;
        name = "";
        part = -1;
        cgpa = -1.0;
    }

    public Student(int id, String name, int part, double cgpa) // group setter
    {
        this.id = id;
        this.name = name;
        this.part = part;
        this.cgpa = cgpa;
    }

    public void setStudent(int i, String n, int p, double c) // individual setter
    {
        id = i;
        name = n;
        part = p;
        cgpa = c;
    }

    // getter constructor
    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public int getPart() {
        return part;
    }

    public double getCgpa() {
        return cgpa;
    }

    public String toString() {
        return ("Id = " + id + " Name = " + name + " Part = " + part + " Cgpa = " + cgpa);
    }
}