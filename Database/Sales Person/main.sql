Select name
from Salesperson
         EXCEPT
select SalesPerson.name
from SalesPerson,Orders
where SalesPerson.sales_id = Orders.sales_id and Orders.com_id
    in(select com_id from Company where Company.name = "RED")