# Write your MySQL query statement below
select Employee.name as Employee
from Employee , (select * from Employee) as Manager
where Employee.salary > Manager.salary and Employee.managerId = Manager.id