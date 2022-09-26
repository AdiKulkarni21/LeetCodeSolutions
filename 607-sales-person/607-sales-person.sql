# Write your MySQL query statement below
select 
SalesPerson.name from SalesPerson 
Where 
SalesPerson.sales_id not in(Select
                          orders.sales_id from orders
                           left join
                           company on orders.com_id=company.com_id
                           where company.name="RED");