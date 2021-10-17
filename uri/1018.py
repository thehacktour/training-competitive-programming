listinha = [100,50,20,10,5,2,1]

valor_entrada = int(input())

print(valor_entrada)

for i in listinha:
       resultado = int(valor_entrada/i)
       print('{} nota(s) de R$ {},00'.format(resultado,i))
       valor_entrada = valor_entrada - resultado*i      