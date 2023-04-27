# Write your MySQL query statement below
select name as Employee 
from Employee X
where salary>(select salary
from Employee Y
where Y.id=X.managerId)
and X.managerId is not Null;
