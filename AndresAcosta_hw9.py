import numpy as np
import time

#Se define la funcion de fibonacci
def fib(N):
	if (N==1 or N==0):

#Retorna la funcion de fibonacci
		return N
	else:
		return fib(N-1)+fib(N-2)


#Funciona que mide el tiempo
t0 = time.time()
def get_time(N):
	
	fibonacci(N)
	t1 = time.time()-t0

#Retorna el tiempo
	return t1

#Imprime el tiempo para 30 iteraciones
print N,get_time(30)



