%% plotting
t = [0:0.01:0.98];
y1 = sin(2*pi*4*t); 
plot(t,y1);
y2 = cos(2*pi*4*t);
hold on;  % "hold off" to turn off
plot(t,y2,'r');
xlabel('time');
ylabel('value');
legend('sin','cos');
title('my plot');
