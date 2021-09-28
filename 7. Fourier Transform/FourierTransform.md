# 1

Fourier analysis

-   Mathematical technique based on decomposing signals in to sinusoids

DFT | Discrete Fourier Transform
DTFT | Discrete Time Fourier Transform

Different categories of signal

Periodic-Continuous: Fourier series
Periodic-Discrete: DFT

Aperiodic-Continuous: Fourier Transform
Aperiodic-Discrete: DTFT

# 2

DFT

-   Fourier decomposition involves decomposing signal into sine and cosines

-   A 16 point signal
    -   can be decomponsed into sine and cosine waves (about 9 + 9 different sinusoids)
    -   this signal should be viewed as a period of infinitely long discrete signal
    -   Fourier analysis can be computed with only real numbers or with complex numbers

DFT: changes N point discrete signal (x[N]) in the time domain into 2 groups of N/2 + 1

-   one group contains amplitudes of component cosine waves (Real part X[]) - length: N/2 + 1
-   other contains amplitudes of component sine waves (Imaginary part X[]) - length: N/2 + 1
-   This actually real only DFT (not complex DFT) although it contains Im part

Time domain x[N] --|Decomposition, Analysis, Forward DFT, DFT|--> Frequency domain
Time domain x[N] <--|Synthesis, Inverse DFT|-- Frequency domain

Three ways of representing the Frequency domain information

-   Let x[N] be discrete signal of N = 128 (128 point signal)
-   Output of DFT: X[N]
    -   65 point cosine: Real part
    -   65 point sine: Imaginary part

3 ways:

1. independent axis; x axis : k = 0 to N/2 (0 to 64)
2. x axis : defined as fraction of sampling frequency 0fs to 0.5fs - (0fs, 0.1fs, 0.2fs, 0.3fs...0.5fs)
    - 0.5fs because - sampling theorem - f > 0.5fs are lost and not sampled (can be present as alias)
3. x axis : defined as natural frequency (w - omega) from 0 to pi

All the above representation are conveying the same thing; they are equivalent

# 3

Basis functions

The sine and cosines are called the DFT basis function.

Amplitude on the y-axis and Frequency on the y-axis

-   Basis functions are sine and cosine waves with unity amplitudes
-   Means: if we assign each amplitude of the frequency domain signal produced by DFT to a proper sine or cosine
    -   The result is a set of scaled sine and cosine waves that can be added to the time domain signal
