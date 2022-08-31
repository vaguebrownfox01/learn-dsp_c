cd "exports"

reset
set size 1, 1
set terminal png size 1000,500
set output 'plot_dft.png'

set multiplot
set size 0.5, 0.5

set origin 0, 0.5
plot "d_input_sig.dat" with line lc rgb "black"

set origin 0.5, 0.5
plot "d_output_idft_sig.dat" with line lc rgb "red"

set origin 0, 0
plot "d_output_dft_mag_sig.dat" with line lc rgb "pink"


set size 0.25, 0.5
set origin 0.5, 0
plot "d_output_dft_rex_sig.dat" with line lc rgb "blue"
set origin 0.75, 0
plot "d_output_dft_imx_sig.dat" with line lc rgb "green"

cd ".."