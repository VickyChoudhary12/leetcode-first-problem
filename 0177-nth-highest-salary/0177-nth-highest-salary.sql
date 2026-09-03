CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  SET n = n - 1;
  RETURN (
      select (select distinct salary 
      from Employee
      order by salary desc
      limit n, 1
      ) as getNthHighestSalary
  );
END