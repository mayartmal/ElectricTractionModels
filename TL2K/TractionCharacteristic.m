%% characteristics of TL2K for VL11 electric locomotive
% motorCurrent, A
motorCurrent = [150; 200; 250; 300; 350; 400; 480; 550; 600; 700; 800];
testCurrent = 0 : 10 : 800;
testCurrent = testCurrent';
% motorTractionForce, kgf
motorTractionForce = [810; 1400; 2040; 2610; 3300; 3950; 4970; 5950; 6650; 8000; 9360];
% locomotoveSpeed, km/h
locomotiveSpeed = [87.5; 70.6; 63.9; 58.0; 54.5; 52.2; 48.7; 46.7; 45.4; 43.6; 41.8];
% windings parametrs
Ra = 0.0673; La = 0.005;
Rf = 0.036; Lf = 0.002;
% motor voltage
Uk = 1500;
% other parameters
p = 3; N = 1050; a = 3;
mu = 88 / 23; Dk = 1.25; 
Cv = (1 / 3.6) * ((p * N) / (pi * a)) * (mu / Dk);
% approx coefficients
A = 1570; B = 6.3;
%A = 1494; B = 6.82;
PhiExperimental = (Uk - motorCurrent .* (Ra + Rf)) ./ (locomotiveSpeed .* Cv);
PhiApprox = testCurrent ./ (A + ((testCurrent) .* B));

%% modeling
modelMotorCurrent = [];
modelMotorForce = [];
for modelLocomotiveSpeed = locomotiveSpeed'
    sim('TL2K_VL10_model.slx');
    modelMotorCurrent = [modelMotorCurrent; calculateMotorCurrent];
    modelMotorForce = [modelMotorForce; calculateMotorForce];
end

%%plot text settings
try
    F='Tahoma';
    FN='FontName';
    FS='FontSize';
    l=25;% Размер шрифта
end
 


%% phi compare plots
try
    %% phonts
    phiCompareFigure = figure('Units', 'normalized', 'OuterPosition', [0 0 1 1]);
    yticks([0.05 0.1 0.15 0.2]);
    yticklabels({'0.05', '0.1', '0.15', '\it Phi, Wb'});
    set(gca, FN, F, FS, l);
    set(gcf, 'color', 'white'); %figure background
    box on;  % Рамка
    
    %% phi plots
    axis;
    hold on;
    phiPlot_1 = plot(motorCurrent, PhiExperimental);
    phiPlot_2 = plot(testCurrent, PhiApprox);
    set(phiPlot_1, 'LineWidth', 3, 'LineStyle', ':', 'Color',  'k', 'Marker', 'o');
    set(phiPlot_2, 'LineWidth', 3, 'LineStyle', ':', 'Color',  'r');
    grid on;
    xlim([0 800]);
    ylim([0 0.2]);
    legend('PhiExperimental', 'PhiApprox', 'location', 'southeast');
    yticks([0.05 0.1 0.15 0.2]);
    yticklabels({'0.05', '0.1', '0.15', '\it Phi, Wb'});
    xticks([0 100 200 300 400 500 600 700 800]);
    xticklabels({'0', '100', '200', '300', '400', '500', '600', '700', '\it Id, A'});
    set(gca,'xcolor','k'); 
    set(gca,'ycolor','k'); 
end

%%phi experimental plot
try
    %% phonts
    phiFigure = figure('Units', 'normalized', 'OuterPosition', [0 0 1 1]);
    yticks([0.05 0.1 0.15 0.2]);
    yticklabels({'0.05', '0.1', '0.15', '\it Phi, Wb'});
    set(gca, FN, F, FS, l);
    set(gcf, 'color', 'white'); %figure background
    box on;  % Рамка
    
    %% phi plots
    axis;
    hold on;
    phiPlot_1 = plot(motorCurrent, PhiExperimental);
    set(phiPlot_1, 'LineWidth', 3, 'LineStyle', ':', 'Color',  'k', 'Marker', 'o');
    grid on;
    xlim([0 800]);
    ylim([0 0.2]);
    %legend('PhiExperimental', 'PhiApprox', 'location', 'southeast');
    yticks([0.05 0.1 0.15 0.2]);
    yticklabels({'0.05', '0.1', '0.15', '\it Phi, Wb'});
    xticks([0 100 200 300 400 500 600 700 800]);
    xticklabels({'0', '100', '200', '300', '400', '500', '600', '700', '\it Id, A'});
    set(gca,'xcolor','k'); 
    set(gca,'ycolor','k'); 
end


%%traction characteristics plots
try
    characteristics = figure('Units', 'normalized', 'OuterPosition', [0 0 1 1]);
    set(gca, FN, F, FS, l);
    set(gcf, 'color', 'white'); %figure background
    box on  % Рамка
    
   %% right axis (force)
    yyaxis right;
    hold on;
    hPlot_1 = plot(motorCurrent, motorTractionForce);
    set(hPlot_1, 'LineWidth', 2, 'LineStyle', '--', 'Color',  'k', 'Marker', 'o');
    grid on;
    xlim([0 800]);
    ylim([0 10000]);

    yticks([1000 2000 3000 4000 5000 6000 7000 8000 9000 10000 ])
    yticklabels({'1000', '2000', '3000', '4000', '5000', '6000','7000', '8000', '9000', '\it Fkd, kgs'})
    xticks([0 100 200 300 400 500 600 700 800]);
    xticklabels({'0', '100', '200', '300', '400', '500', '600', '700', '\it Id, A'});
    set(gca,'xcolor','k'); 
    set(gca,'ycolor','k');
    
    %% left axis (speed)
    yyaxis left;
    hold on;
    hPlot_2 = plot(motorCurrent, locomotiveSpeed);
    set(hPlot_2, 'LineWidth', 2, 'LineStyle', '-.', 'Color', 'k', 'Marker', 'o');
    grid on;
    xlim([0 800]);
    ylim([0 100]);
    legend('Vloc (Id)', 'Fkd (Id)', 'location', 'southeast');
    yticks([10 20 30 40 50 60 70 80 90 100])
    yticklabels({'10', '20', '30', '40', '50', '60','70', '80', '90', '\it Vloc, km/h'})
    set(gca,'xcolor','k'); 
    set(gca,'ycolor','k');
end


%% traction characteristics compare plots font
try
    compareCharacteristics = figure('Units', 'normalized', 'OuterPosition', [0 0 1 1]);
    set(gca, FN, F, FS, l);
    set(gcf, 'color', 'white'); %figure background
    box on  % Рамка
    
   %% right axis (force)
    yyaxis right;
    hold on;
    hPlot_1 = plot(motorCurrent, motorTractionForce);
    hPlot_3 = plot(modelMotorCurrent, modelMotorForce);
    set(hPlot_1, 'LineWidth', 2, 'LineStyle', '--', 'Color',  'k', 'Marker', 'o');
    set(hPlot_3, 'LineWidth', 2, 'LineStyle', '--', 'Color',  'r', 'Marker', 'x');
    grid on;
    xlim([0 800]);
    ylim([0 10000]);

    yticks([1000 2000 3000 4000 5000 6000 7000 8000 9000 10000 ])
    yticklabels({'1000', '2000', '3000', '4000', '5000', '6000','7000', '8000', '9000', '\it Fkd, kgs'})
    xticks([0 100 200 300 400 500 600 700 800]);
    xticklabels({'0', '100', '200', '300', '400', '500', '600', '700', '\it Id, A'});
    set(gca,'xcolor','k'); 
    set(gca,'ycolor','k');
    
    %% left axis (speed)
    yyaxis left;
    hold on;
    hPlot_2 = plot(motorCurrent, locomotiveSpeed);
    hPlot_4 = plot(modelMotorCurrent, locomotiveSpeed);
    set(hPlot_2, 'LineWidth', 2, 'LineStyle', '-.', 'Color', 'k', 'Marker', 'o');
    set(hPlot_4, 'LineWidth', 2, 'LineStyle', '-.', 'Color', 'r', 'Marker', 'x');
    grid on;
    xlim([0 800]);
    ylim([0 100]);
    legend('Vloc (Id) experimental', 'Vloc (Id) model','Fkd (Id) experimental', 'Fkd (Id) model', 'location', 'southeast');
    yticks([10 20 30 40 50 60 70 80 90 100])
    yticklabels({'10', '20', '30', '40', '50', '60','70', '80', '90', '\it Vloc, km/h'})
    set(gca,'xcolor','k'); 
    set(gca,'ycolor','k');
end



















