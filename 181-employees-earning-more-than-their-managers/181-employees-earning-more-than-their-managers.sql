select employee.name as Employee
from Employee employee
join Employee manager on employee.managerId=manager.id
where employee.salary>manager.salary;