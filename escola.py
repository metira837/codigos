senha = (input('digite uma senha de pelo menos 8 caracters: '))
n1 = len(senha)

while n1 < 8:
    senha = (input('a senha deve ter pelo menos 8 caracteres: '))
    n1 = len(senha)
    if n1 >= 8:
     break

paia = ('&', '%', '+', '#', '@', '!', '$')
forte = any(caractere in senha for caractere in paia)

tentativas = 0

while not forte:
      print('sua senha não tem um digito forte')
      print(f'sua senha pode ser:\n{senha}&$#')
      senha = input('Coloque algum digito forte \n(exemplo: &, %, +, #, @, !): ')
      
      n1 = len(senha)
      while n1 < 8:
          print('sua senha não tem 8 caracteres')
          if n1 < 8:
              break
    
      forte = any(caractere in senha for caractere in paia)
      tentativas += 1

      if tentativas >= 3 and not forte:
        print('Você tentou 3 vezes, volte mais tarde')
        break

if forte:
    print('Senha válida.')
     
    