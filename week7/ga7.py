
# @BSAnandu

org_role_list = [("dev","developeer"),("ba","business analyst"),("qa","quality analyst"),
                 ("lead","program manager"),
                 ("ra","research associate")]

org_work = {0:"code",
            1: "requirement",
            2 : "validation"
            ,3 : "mangement",
            4 : " research"}
org_sal_band = {"sal_band-1" : 1000000.0,
                "sal-band-2" : 150000.0,
                 "sal-band-3" : 2000000.0}

emp_name = ["manohar","rajeev","savitha","daizy","alok"]

emp_band = ["sal-band-1","sal-band-2","sal-band-1","sal-band-3","sal-band-2"]

emp_sal = []
for emp_id in range(len(emp_band)):
    emp_sal.append(org_sal_band.get(emp_band[emp_id]))

x = int(input())

for emp_id in range(len(emp_name)):
    print(emp_name[emp_id],emp_sal[emp_id],emp_sal[emp_id]*(1.01*x),sep=",")