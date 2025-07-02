#!/bin/bash
N=2
echo $N > test1-matriz.in

for ((i=0; i<N*N; i++)); do
  echo -n "$((RANDOM % 10)) "
  if (( (i + 1) % N == 0 )); then echo ""; fi
done >> test1-matriz.in

for ((i=0; i<N*N; i++)); do
  echo -n "$((RANDOM % 10)) "
  if (( (i + 1) % N == 0 )); then echo ""; fi
done >> test1-matriz.in

opcoes=("a" "s" "m")
echo ${opcoes[$((RANDOM % 3))]} >> test1-matriz.in
