clc, clearvars;
syms x1 x2 x3
eq1=input("Enter First Equation: ");
eq2=input("Enter Second Equation: ");
eq3=input("Enter Third Equation: ");
i=input('Iteration No:');

[A,B] = equationsToMatrix(eq1);
l = [A B];
mx = l;

[A,B] = equationsToMatrix(eq2);
l = [A B];
my = l;

[A,B] = equationsToMatrix(eq3);
l = [A B];
mz = l;

x_big = 0;
y_big = 0;
z_big = 0;
if abs(mx(1)) > abs(mx(2) + mx(3))
  x_big = mx(1);
elseif abs(mx(2)) > abs(mx(1) + mx(3))
  x_big = mx(2);
elseif abs(mx(3)) >= abs(mx(1) + mx(2))
  x_big = mx(3);
end

if abs(my(1)) > abs(my(2) + my(3))
  y_big = my(1);
elseif abs(my(2)) > abs(my(1) + my(3))
  y_big = my(2);
elseif abs(my(3)) >= abs(my(1) + my(2))
  y_big = my(3);
end

if abs(mz(1)) > abs(mz(2) + mz(3))
  z_big = mz(1);
elseif abs(mz(2)) > abs(mz(1) + mz(3))
  z_big = mz(2);
elseif abs(mz(3)) >= abs(mz(1) + mz(2))
  z_big = mz(3);
end

d=0;
e=0;
f=0;

double(d)
double(e)
double(f)

while(i>0)
    a=(mx(4)-mx(2)*e-mx(3)*f)/x_big;
    b=(my(4)-my(1)*d-my(3)*f)/y_big;
    c = (mz(4)-mz(1)*d-mz(2)*e)/z_big;

    d=a;
    e=b;
    f=c;
    double(d)
    double(e)
    double(f)

    i = i - 1;
end

% 4*x1+2*x2-2*x3==0
% x1-3*x2-x3==7
% 3*x1-x2+4*x3==5
