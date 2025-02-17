a = float(input("Pon el primer número: "))
b = float(input("Pon el segundo número: "))
operacion = input("operación a realizar (+, -, *, /, %): ")

if operacion == "+":
    resultado = a + b
elif operacion == "-":
    resultado = a - b
elif operacion == "*":
    resultado = a * b
elif operacion == "/":
    if b != 0:
        resultado = a / b
    else:
        resultado = "Error: No se puede dividir por cero webon."
elif operacion == "%":
    if b != 0:
        resultado = a % b
    else:
        resultado = "Error: No se puede sacar el módulo con cero pendejo."
else:
    resultado = "ts bien la respuesta :D."

print("Resultado:", resultado)
