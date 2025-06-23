# Write your MySQL query statement below
select salary as SecondHighestSalary from Employee
where salary <> (select max(salary) from Employee);