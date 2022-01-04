    double myPow(double x, int n) {
        if (n == 0) return 1;
       
        double d = pow(x, n/2);
        if (n & 1)  // 홀수 일 때
            return n < 0 ? 1/x*d*d : x*d*d;
        else return d*d;
    }
};
