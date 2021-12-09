#Source Code 
#Classes que verificam a bandeira e validam o número do cartão.



class Card:
    #Recebe os atributos e os transforma em string para validações.
    def __init__(self):
        self.__num = []
        self.__banco = str()
        self.__Master = ["51", "52", "53", "54", '55']
        self.__American = ["34", '37']
        self.__Visa = ["4"]
    #Função que vai se ligar com a interface e coletar os digitos do cartão
    def Ban(self,num):
        
        self.__num = str(num)
       

    #Função que identifica o banco.
    def Banco(self):

        print(self.__num[0:2])
        
        if self.__num in self.__American:
            self.__banco = "BANCO: American Express"
            
            print(self.__banco)
            
        
        
        elif self.__num[0:2] in self._Master:
            self.__banco = "BANCO: MasterCard"
            print(self.__banco)
        
        
        
        elif self.__num[0:1] in self.__Visa :
            self.__banco = "BANCO: Visa"
            

        else:
            print("Número inválido. \nError.01 \Curto||Longo")
        





#Receber dados do usuário
class Verify:
    def __init__(self, number):       #A ideia aqui é relacionar as classes para que não haja tratamento de dados no client/interface
        self.__cardNumber = number
        
    
    def Valid(self):
        carro = Card()
        carro.Ban(self.__cardNumber)
        carro.Banco()








teste = Card()
teste.Ban(34345678901234) #Haverá uma variável que passará este número do cartão para esta função
teste.Banco()

        
""""
Base de informações: 

teste = []
teste  = str(123422353457)
teste.split()
print(teste)

print(teste[0])
soma = 0
i = 0
for item in teste:
    
    soma = soma + int(item)
    i+=1

print(teste[-2::-2])
"""