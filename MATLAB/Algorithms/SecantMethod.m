clc, clearvars;

equation = input('Enter the equation in terms of x: ', 's');
eq = str2func(['@(x)' equation]);
% eq = @(x) (x.^3)-(5*x)+1;

a = input('Enter First Number: ');
b = input('Enter Second Number: ');
it = input('Enter Iteration Number: ');

i = 1;
while i <= it

  fa = eq(a);
  fb = eq(b);

  crit = b - fb * ((a-b)/(fa-fb));
  fprintf('%d approximation: %f\n',i, crit);
  a = b;
  b = crit;
  i=i+1;
end
