signal = [1, -1, 5, -3, 1, -3, 0, 0]

N = length(signal)
t = 2pi / N

Re, Im = [], []

# DFT
for i in 1:N
    re, im = 0, 0
    for j in 1:N
        re += signal[j] * cos(t*(i-1)*(j-1))
        im += -signal[j] * sin(t*(i-1)*(j-1))
    end
    push!(Re, re)
    push!(Im, im)
end

println(Re)
println(Im)
