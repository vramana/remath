let fibonacci n => {
  let rec fibonacciAcc n a::a b::b =>
    switch n {
    | n when n > 1 => fibonacciAcc (n - 1) a::b b::(a + b)
    | 1
    | 0 => a
    | _ => 0
    };
  fibonacciAcc n a::1 b::1
};
