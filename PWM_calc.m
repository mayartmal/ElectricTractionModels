%%ranges
f_s = [0:0.01:55];

ratioRange = [3:2:21]';

%%variables
maxPWMFrequency = 504;
maxModulationRatio = 21;
startMainFrequency = round(maxPWMFrequency /(6 * maxModulationRatio));
deltaFrqs = 0.01;


fPWM = (ratioRange - 1) * 3 * f_s;



startY = maxPWMFrequency;
startX = startMainFrequency;


iterFrq = startMainFrequency;

iterIndex = find(f_s == iterFrq);
tempFPWM = fPWM(9,:);
iterFPWM = tempFPWM(iterIndex);





y = [startY 456];
x = [startX startX];


k = 1;

%while f_s(k) < 55
% for k = 1:1:2   
%     iterIndex = find(f_s, iterFrq);
%     tempFPWM = fPWM(9,:);
%     iterPPWM = tempFPWM(iterIndex);
%     
%     
%     disp(f_s(k));
%     %k = k + 1;
% end




%%plots
%%plot text settings
try
    F='Tahoma';
    FN='FontName';
    FS='FontSize';
    l=18;
end
 


%% phi compare plots

try
    %% phonts
    
    frqCharacteristics = figure('Units', 'normalized', 'OuterPosition', [0 0 1 1]);
    yticks([100 200 300 400 500 600 700 800 900 1000]);
    yticklabels({'100' '200' '300' '400' '500' '600' '700' '800' '900' 'f_p_w_m, Hz'});
    set(gca, FN, F, FS, l);
    set(gcf, 'color', 'white'); %figure background
    box on;
    
    %% phi plots
    axis;
    hold on;
    frqPlot_1 = plot(f_s, fPWM); 
    frqs = plot(x, y);
    
    set(frqPlot_1, 'LineWidth', 1);
    set(frqs, 'LineWidth', 1, 'Color', 'k');
    %set(phiPlot_2, 'LineWidth', 3, 'LineStyle', ':', 'Color',  'r');
    grid on;
    xlim([0 55]);
    ylim([0 1000]);
    legend('3', '5', '7', '9', '11', '13', '15', '17', '19', '21', 'location', 'southeast');
    
    xticks([5 10 15 20 25 30 35 40 45 50 55]);
    xticklabels({'5' '10' '15' '20' '25' '30' '35' '40' '45' '50' 'f_s, Hz'});
    %set(gca,'xcolor','k'); 
    %set(gca,'ycolor','k'); 
    
end