# Práctica 3: Área y perímetro de un rectángulo
## 1. Descripción del problema (Fase 1)
el programa me va a preguntar la base del rectangulo y la altura del rectangulo los va a sumar para hacer o sacar el perimetro y los va a multiplicar para sacar el area
Cálculo del perímetro: suma la base y la altura, y luego multiplica ese resultado por dos para obtener la longitud total del contorno del rectángulo.
Cálculo del área: multiplica directamente la base por la altura, lo que da como resultado la superficie interna del rectángulo.

<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato, sus unidades y su objetivo. -->

**Entradas:**
1. me pide para el perimetro b+b h+h
2. multplicar b y h

**Salidas:**
1. resultado del perimetro
2. resultado de la base

**Fórmulas** (área y perímetro):
b+b+h+h
(b)(h)

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- no letras
- no numeros romanos

**¿Qué hace mi programa con una medida de 0 o negativa? ¿Por qué?**
si puede sacar un calculos pero no tiene sentido fisico

**¿Quién detecta cada error?** (¿qué revisa `leerDecimal` y qué reviso yo?)
el programador(si algo no cuadra al momento de arrojar la salida) y el compilador(si esta mal escrito un error sintactico?)

**Invariante** (al salir del ciclo que pide el ancho, ¿qué es seguro sobre `ancho`?):
deben ser los datos mayores a 0 para que haya sentido

## 4. Casos resueltos a mano (Fase 1)

| Caso | Ancho | Alto | Área calculada a mano | Perímetro calculado a mano |
|---|---|---|---|---|
| 1 | 5 | 3 |15 | 16 |
| 2 (cuadrado) | 4 | 4 | 16 | 16 |
| 3 (con decimales) |2.5 |1.2 | 3.0 | 7.4 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con un caso válido y uno inválido?** Sí / No
**¿Tuve que corregirla?** nno
**¿Cuántas versiones de mi receta escribí hasta la final?** solo la primera

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o rectangulo
./rectangulo
```

## 7. Ejemplo de ejecución (Fase 3)

PS C:\Users\taqui\Documents\ulsa_ime_1_dp_rectangulo> g++ main.cpp -o main.exe
PS C:\Users\taqui\Documents\ulsa_ime_1_dp_rectangulo> ./main.exe 
Area y perimetro de un rectangulo
ingresa base 5
introduce altura 4
El per├¡metro es: 18
El ├írea es: 20
```
_____
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué resultado dio `2 * ancho + alto` con 5 × 3? ¿Por qué?**
16

**Experimento B: sin validación, ¿qué mostró el programa con ancho -4 y alto 3? ¿Tiene sentido?**
area= -12 
perimetro =-2
no porque no represanta nada fisico

**Experimento C (opcional): con `int`, ¿qué pasó con 2.5 y con 100000 × 100000?**
se pierden decimales

## 9. Tabla de pruebas (Fase 4)

| Caso | Ancho | Alto | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|---|
| Normal | 5 | 3 | Área 15, perímetro 16|Área 15, perímetro 16 | Sí |
| Cuadrado | 4 | 4 | Área 16, perímetro 16 | Área 16, perímetro 16 | Sí |
| Decimales | 2.5 | 4 | Área 10, perímetro 13 |Área 10, perímetro 13  | Sí |
| Muy pequeño | 0.1 | 0.1 | Área 0.01, perímetro 0.4 |Área 0.01, perímetro 0.4 | Sí |
| Ancho cero | 0 | 3 | vuelve a pedir el ancho | error| Sí |
| Alto negativo | 5 | -2 | vuelve a pedir el alto |error| Sí |
| Texto | `abc` | 3 | `leerDecimal` vuelve a pedir | error| Sí|
| Caso propio 1 | 3 |4 | El perímetro es: 14 El área es: 12 | El perímetro es: 14 El área es: 12 | Sí |
| Caso propio 2 | 2 |3 | El perímetro es: 10 El área es: 6|El perímetro es: 10 El área es: 6 | Sí|

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 |a veces puedo poner numero o datos que no concuerdan e igual el programa los va a hacer | agregar una validacion |si |
| 2 | un error de compilacion de endl | añadir un arreglo ovariable para el endl | si |

**Reto elegido (opcional):** hacer condiciones para que el programa no crashee

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
| ¿Qué pasa si quiero usar `int` y el número es muy grande?|Probé con 100000 × 100000 y se desbordó.

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
un poquito mas de programs

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
nada 

**¿Qué fue lo más difícil y cómo lo resolví?**
hacer las varibles y pues buscando info

**¿Qué pregunta me quedó sin responder?**
ninguna

**Diseñar la receta desde cero, ¿fue más fácil o más difícil de lo que esperaba? ¿Qué haría distinto la próxima vez?**
facil es solo una serie de pasos

## 13. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené todas las secciones (no quedan `_____`)
- [ ] Escribí mi receta completa en `RECETA.md` antes de programar
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla
- [ ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ ] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Entregué el enlace de mi fork en Classroom