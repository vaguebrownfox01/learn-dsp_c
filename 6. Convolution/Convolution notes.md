# 1

Convolution

-   very important
-   mathematical way of combining two signals
-   a way of combining two signals to obtain third resultant signal
-   Relates three important signals of interest
    -   Input signal
    -   Output signal
    -   Response
-   Decomposition:
    -   Impulse decomposition
    -   Fourier decomposition
-   Impulse decomposition: a way to analyze a signal one sample at a time
-   When impulse decomposition is used in the process of combining two signal: the procedure can be described mathematically as convolution

# 2

-   Delta function: normalised impulse signal | unit impulse
    -   del[3] = 0001000...
-   del[n] -> /system/ -> h[n]
-   h[n] : impulse response
-   if two systems are different, they'll have different impulse response

For linear systems

-   If you know unit impulse response of a system: you can find out response for any other impulse responses

# 3

Convolution kernel

-   unit impulse response | impulse response: output when delta function is passed to the system
-   Input signal is decomposed into set of impulse - each one is a scaled and shifted delta function
-   Each impulse response/output is the scaled and shifted version of the impulse response

In essence

-   By knowing a system's unit impulse response: system's response for any input can be calculated (this is very powerful)

Other names for impulse response: filter kernel, convolution kernel, kernel.

-   In image processing: it's called point spread function

Convolution is like just any other mathematical operation.

h[n]: impulse response of the system /\*/

x[n] -> / h[n] / -> y[n]

-   x[n] convolved with h[n] produces y[n]
-   x[n] \* h[n] = y[n]

-   Convolution is cummutative
    -   h[n] \* x[n] = y[n]

# 4

Convolution sum

x[n]: N point input signal | 0 to N - 1
h[n]: M point impulse response | 0 to M - 1
x[n] \* h[n]: N + M - 2 impulse response | 0 to N + M - 2 (y[n])

y[i] = summation(h[j] . x[i - j]) - j:0 to M - 1
