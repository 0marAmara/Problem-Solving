# Write your MySQL query statement below
select distinct Person.email as Email
from Person,
     (select * from Person) as Other
where Person.email = Other.email
  and Person.id <> Other.id