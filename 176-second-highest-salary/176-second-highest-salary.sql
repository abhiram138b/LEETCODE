SELECT IFNULL((SELECT DISTINCT SALARY from Employee ORDER BY SALARY DESC LIMIT 1 OFFSET 1 ), NULL) as SecondHighestSalary