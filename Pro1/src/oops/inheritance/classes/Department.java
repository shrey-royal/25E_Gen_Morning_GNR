package oops.inheritance.classes;

public class Department extends BaseEntity {
    private String deptName;
    private Employee[] employees;
    private int employeeCount;

    public Department(int id, String deptName, int maxEmployees) {
        this.id = id;
        this.deptName = deptName;
        this.employees = new Employee[maxEmployees];
        this.employeeCount = 0;
    }

    public void addEmployee(Employee emp) {
        if (employeeCount < employees.length) {
            employees[employeeCount++] = emp;
            System.out.println("Added: " + emp.getName());
        } else {
            System.out.println("Cannot add more employees.");
        }
    }

    public void removeEmployee(int empId) {
        boolean found = false;
        for (int i=0; i<employeeCount; i++) {
            if (employees[i] != null && employees[i].getId() == empId) {
                for (int j = i; j < employeeCount - 1; j++) {
                    employees[j] = employees[j+1];
                }
                employees[--employeeCount] = null;
                found = true;
                System.out.println("Removed employee with ID: " + empId);
                break;
            }
        }
        if (!found) {
            System.out.println("Employee with ID not found.");
        }
    }

    public void listEmployees() {
        System.out.println("Employees in Department " + deptName + ":");
        for (int i=0; i<employeeCount; i++) {
            System.out.println(employees[i]);
        }
    }

    public void setDeptName(String deptName) {
        this.deptName = deptName;
    }

    @Override
    public String toString() {
        return "Department{" +
                "id=" + id +
                ", deptName='" + deptName + '\'' +
                '}';
    }
}
