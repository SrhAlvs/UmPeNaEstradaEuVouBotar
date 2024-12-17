programa {
  //Portugol Studio
  //Portugol Webstudio: https://portugol.dev/
  funcao inicio()
    {
        inteiro total, hora = 0, minuto = 0, segundo = 0
        escreva("Informe os segundos: \n")
        leia(total)
        tempo(total, hora, minuto, segundo)
        escreva("A soma é: ",hora,":", minuto, ":", segundo)
    }

    funcao tempo(inteiro t, inteiro &h, inteiro &m, inteiro &s)
    {
        h = t / (60*60)
        m = (t - (h*60*60))/60
        s = (t - (h*60*60))%60
    }
}