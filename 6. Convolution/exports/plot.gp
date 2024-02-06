# gnuplot -p "code/multiplot.gp" > plot.png

reset

set terminal png

set size 1, 1

set multiplot

set size 0.5, 0.5
set origin 0, 0.5
plot 'd_input_sig.dat' with lines lc rgb 'black'

set size 0.5, 0.5
set origin 0, 0
plot 'd_impulse_response.dat' with lines lc rgb 'red'

set size 0.5, 0.5
set origin 0.5, 0
plot 'd_convoluted_sig.dat' with lines lc rgb 'red'

set size 0.5, 0.5
set origin 0.5, 0.5
plot 'd_first_diff_sig.dat' with lines lc rgb 'blue'