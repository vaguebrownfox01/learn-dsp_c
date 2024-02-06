# gnuplot -p "code/multiplot.gp" > plot.png

reset

set terminal png

set size 1, 1

set multiplot

set size 0.5, 0.5
set origin 0, 0.5
plot 'input_signal.dat' with lines lc rgb 'black'

set size 0.5, 0.5
set origin 0, 0
plot 'output_rex.dat' with lines lc rgb 'red'

set size 0.5, 0.5
set origin 0.5, 0
plot 'output_imx.dat' with lines lc rgb 'red'

set size 0.5, 0.5
set origin 0.5, 0.5
plot 'input_signal.dat' with lines lc rgb 'blue'