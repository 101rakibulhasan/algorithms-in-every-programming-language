clc, clearvars;
y = @(x) (2*exp(x)*sin(x) - 3);
a = 0;
b = 1;
it = 3;

fa = y(a);
fb = y(b);

disp(fa);
disp(fb);

if fa*fb < 0
  while it>0
    c = (a*fb - b*fa)/(fb-fa);
    fc = y(c);

    if fc < 0
      a = c;
      fa = fc;
    else
      b = c;
      fb = fc;
    end

    it--;

    if(it == 0)
      disp(vpa(c, 3));
    end
  end

else
  disp("It's not right");
end
