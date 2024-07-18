# Write your MySQL query statement below
select name,Bonus.bonus from Employee 
left Join Bonus on Bonus.empId=Employee.empId
where Bonus.bonus<1000 or Bonus.bonus is null;
