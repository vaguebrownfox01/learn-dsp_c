Linear systems and Superposition

# 1

Most DSP techchniques involves superposition.

-   Breaking up the signal into components
-   Processing each component
-   Adding up the component
-   ???
-   Output!

Superposition can only be used with Linear systems

# 2

Signal: How one parameter varies with another.
System: Is a process that produces an output response for an input response signal.

General mention of signals - In Time domain (lower case)
Continuous signal: x(t), y(t) - "paranthese"
Discrete signal: x[t], y[t] - "square brackets"

# 3

Linear systems: Homogeneity and Additivity, and Shift invariance (in signals and systems)

Homogeneity:
x[t] => /system/ => y[t];
kx[t] => /system/ => ky[t];
e.g. Simple resistor

Additivity:
x1[t] => /system/ => y1[t];
x2[t] => /system/ => y2[t];
x1[t] + x2[t] => /system/ => y1[t] + y2[t];

Shift invariance
x[t] => /system/ => y[t];
x[t + s] => /system/ => y[t + s];

Sinusoidal fidility:
sin(f) => /system/ => sin(f)
A linear system can be verified by passing a sine wav of frequency f

-   output response signal should be sine with the same frequency f

# 4

Combination of signals: Scaling and Adding (the only way) | Synthesis

-   Multiplying two signals is not allowed.

Decomposition: Breaking signal into additive components. Opposite of synthesis

x[n] <=> x1[] + x2[] + x3[];
<=>: Synthesis and decomposition | Superposition

Two main ways to decompose a signal in DSP

1.  Impulse decomposition
2.  Fourier decomposition

Impulse decomposition:

-   breaks N samples of signal into N component signals
-   1243211: 1000000; 0200000; 0040000; 0003000; 0000200; 0000010; 00000001 | component signals
-   keeping value of one sample and setting all other samples to zero
-   by knowing systems output for an impulse: output for any signal can be calculated
-   signals are characterised by the way system responds to an impulse signal

Step decomposition:

-   Same as impulse decomposition but the selected sample's amplitude is maintained for rest of the length
-   This creates a step like signal: 12432114 - 00033333; 00002222; ...
