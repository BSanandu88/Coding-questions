def pearson_correlation(x,y):
    x,y = x.split(),y.split()
    if len(x) != len(y):
        return 0.0
    n = len(x)
    sum_x,sum_y = 0.0,0.0
    #change string element to float
    for i in range(n):
        x[i],y[i] = float(x[i]),float(y[i])
        sum_x,sum_y = sum_x + x[i],sum_y + y[i]
    #cal numerator and denominator
    sum_x_sq,sum_y_sq,sum_xy = 0.0,0.0,0.0
    for xi in x:
        sum_x_sq += xi ** 2
    for yi in y:
        sum_y_sq += yi ** 2
    for i in range(n):
        sum_xy += x[i] * y[i]
    numerator  = sum_xy - (sum_x * sum_y) / n
    denominator = ((sum_x_sq - sum_x ** 2 / n) * (sum_y_sq - sum_y ** 2/n))**0.5

    #get pearson correlation coefficient
    if denominator - 0.0 > 0.00001:
        pearson_corr = numerator/denominator
    return (round(pearson_corr,1))

x=input()
y=input()
print(pearson_correlation(x,y))