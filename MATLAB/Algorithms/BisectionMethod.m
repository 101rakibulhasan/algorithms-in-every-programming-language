clc, clearvars;

syms x;


% Enter Initial a & b value Range
a = input("Enter First Range: ");
b = input("Enter Second Range: ");

it = input("Number of Iteration: ");

%e = input("Tolerance Value: ");

% Enter Equation
y = @(x) (x.^2 - 3);

fa = y(a);
fb = y(b);

if(fa * fb > 0)
  disp("Given initial values do not break the root!");
else
  while it > 0
    mid = (a+b) / 2;
    fmid = y(mid);
    if(fa * fmid < 0)
      b = mid;
    else
      a = mid;
    end

    it--;

    if it == 1
      disp(mid);
    end
  end
end




