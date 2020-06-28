# A short script to check that fit_poisson_optim and fit_poisson_em
# give the correct result.

# Simulate a Poisson data set.
set.seed(1)
n  <- 200
f0 <- 1
f1 <- 4
s  <- sample(100,n,replace = TRUE)
q  <- runif(n)
u  <- (1-q)*f0 + q*f1
x  <- rpois(n,s*u)

# Fit the model parameters, f0 and f1, using optim.
out1 <- fit_poisson_optim(x,s,q)

# Fit the model parameters, f0 and f1, using the EM algorithm.
out2 <- fit_poisson_em(x,s,q)

# Compare the estimates against the values used to simulate the data.
print(data.frame(true  = c(f0,f1),
                 optim = out1$par,
                 em    = out2$f))

# Compare the log-likelihood at each of the solutions.
cat(sprintf("optim: %0.2f\n",-out1$value))
cat(sprintf("EM:    %0.2f\n",max(out2$loglik)))