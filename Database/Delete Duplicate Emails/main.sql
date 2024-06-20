# Write your MySQL query statement below
delete el
from person as el,
     person as el2
where el.email = el2.email
  and el.id > el2.id