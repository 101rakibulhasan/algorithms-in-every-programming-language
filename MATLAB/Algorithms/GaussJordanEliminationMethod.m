clc, clearvars;
syms x y z;
eq1 = input("Enter First Equation: ");
eq2 = input("Enter Second Equation: ");

[A,B] = equationsToMatrix(eq1);
l = [A B];
mx = l;

[A,B] = equationsToMatrix(eq2);
l = [A B];
my = l;

fprintf("\nStep 0: (Initialize Equation To Matrix)\n");
    fprintf("mx = [");
    fprintf("%d ",mx);
    fprintf("]\n");
    fprintf("my = [");
    fprintf("%d ",my);
    fprintf("]\n");
fprintf("\nStep 1: (Divide Row 1 with -1)\n");
mx = mx./-1;
    fprintf("mx = [");
    fprintf("%d ",mx);
    fprintf("]\n");
    fprintf("my = [");
    fprintf("%d ",my);
    fprintf("]\n");
fprintf("\nStep 2: (Subtract Row 2 with 3 x Row 1)\n");
my = my-mx*3;
    fprintf("mx = [");
    fprintf("%d ",mx);
    fprintf("]\n");
    fprintf("my = [");
    fprintf("%d ",my);
    fprintf("]\n");
fprintf("\nStep 3: (Add Row 1 with Row 2)\n");
mx = mx + my;
    fprintf("mx = [");
    fprintf("%d ",mx);
    fprintf("]\n");
    fprintf("my = [");
    fprintf("%d ",my);
    fprintf("]\n");
fprintf("\nStep 4: (Divide Row 2 with 2)\n");
my = my ./ 2;
    fprintf("mx = [");
    fprintf("%d ",mx);
    fprintf("]\n");
    fprintf("my = [");
    fprintf("%d ",my);
    fprintf("]\n");
fprintf("\nOutput: \n");
p = double(mx(1,3));
q = double(my(1,3));
fprintf("X = %d\n", p);
fprintf("Y= %d\n", q);

% [-x+2*y==-6]
% [3*x-4*y==14]
