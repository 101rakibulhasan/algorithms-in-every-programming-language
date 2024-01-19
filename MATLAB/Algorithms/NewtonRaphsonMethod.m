a = input("Enter the real part: ");
b = input("Enter the nth root: ");
xz = input("Enter X0: ");

x = (1/3 *((b-1)*xz + (a/(xz.^(b-1)))));
xz = x;
t = a;
t--;
while t>0
  x = (1/3 *((b-1)*xz + (a/(xz.^(b-1)))));
  t--;

  if(t == 0)
    disp(x);
  end;
end
