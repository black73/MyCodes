A <- matrix(1:25, nrow = 5, ncol = 5)

for(i in 1:5){
  for(j in 1:5){
    flag = 0
    if(A[i, j] != 1){
      for(k in 2:(A[i, j] - 1)){
        if((A[i, j] %% k) == 0){
          flag = 1
          break
          }
      }
      if(A[i, j] == 2) flag = 0
      if(flag == 0) print(paste(i,",",j))
    }
  }
}
  