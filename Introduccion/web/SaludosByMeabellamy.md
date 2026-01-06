# Introducción a la Programación

## ¿Qué es la Programación?

Programar es darle instrucciones a una computadora para que haga algo específico. Es como escribir una receta de cocina, pero en lugar de cocinar un pastel, le dices a la máquina cómo resolver problemas o realizar tareas.

Un **programa** es simplemente una secuencia de instrucciones escritas en un lenguaje que la computadora entiende. Tú escribes el código, y la computadora lo ejecuta paso a paso.

## ¿Para Qué Sirve?

La programación está en todas partes:

- **Aplicaciones móviles**: WhatsApp, Instagram, juegos
- **Sitios web**: Amazon, YouTube, redes sociales
- **Videojuegos**: Desde Minecraft hasta Call of Duty
- **Sistemas operativos**: Windows, Android, iOS
- **Inteligencia artificial**: Asistentes virtuales, reconocimiento facial
- **Automatización**: Desde sistemas bancarios hasta robots industriales

Si usas tecnología, estás usando algo que alguien programó.

## Conceptos Básicos

Antes de programar, debes entender tres conceptos fundamentales:

1. **Variables**: Espacios donde guardas información (números, texto, etc.)
2. **Instrucciones**: Órdenes que le das a la computadora (sumar, mostrar en pantalla, etc.)
3. **Lógica**: Tomar decisiones ("si esto pasa, haz aquello; si no, haz esto otro")

## Los Lenguajes de Este Curso

### C: El Lenguaje Fundamental

**¿Qué es?**
C es uno de los lenguajes más antiguos y poderosos. Creado en 1972, es la base de muchos sistemas operativos (como Linux y Windows) y otros lenguajes.

**¿Por qué aprenderlo?**
- Te enseña cómo funciona realmente la computadora
- Controlas la memoria y los recursos directamente
- Es rápido y eficiente
- Muchos lenguajes modernos heredan su sintaxis

**¿Dónde se usa?**
- Sistemas operativos
- Drivers de hardware
- Sistemas embebidos (microcontroladores, IoT)
- Software que necesita máximo rendimiento

**Ejemplo simple:**
```c
#include <stdio.h>

int main() {
    printf("Hola Mundo\n");
    return 0;
}
```

---

### C++: C con Superpoderes

**¿Qué es?**
C++ es una extensión de C creada en 1983. Añade programación orientada a objetos y otras características modernas, pero mantiene la velocidad de C.

**¿Por qué aprenderlo?**
- Todo lo de C, pero con más herramientas
- Permite programación orientada a objetos (POO)
- Perfecto para proyectos grandes y complejos
- Industria de videojuegos lo usa masivamente

**¿Dónde se usa?**
- Motores de videojuegos (Unreal Engine)
- Software de alto rendimiento (Adobe, navegadores)
- Aplicaciones de escritorio
- Sistemas en tiempo real

**Ejemplo simple:**
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hola Mundo" << endl;
    return 0;
}
```

---

### JavaScript (JS): El Lenguaje de la Web

**¿Qué es?**
JavaScript es el lenguaje que hace que las páginas web sean interactivas. Creado en 1995, hoy se usa tanto en navegadores como en servidores (Node.js).

**¿Por qué aprenderlo?**
- Es el único lenguaje que funciona nativamente en navegadores
- Fácil de empezar: solo necesitas un navegador
- Enorme comunidad y recursos
- Puedes crear apps web completas solo con JS

**¿Dónde se usa?**
- Páginas web interactivas (todo lo que ves en internet)
- Aplicaciones web (Gmail, Facebook, Netflix)
- Servidores (con Node.js)
- Aplicaciones móviles (React Native)
- Aplicaciones de escritorio (Electron)

**Ejemplo simple:**
```javascript
console.log("Hola Mundo");

// También funciona en HTML:
alert("Hola Mundo");
```

---

## Comparación Rápida

| Característica | C | C++ | JavaScript |
|----------------|---|-----|------------|
| **Dificultad** | Media-Alta | Media-Alta | Baja-Media |
| **Velocidad** | Muy rápida | Muy rápida | Media |
| **Uso principal** | Sistemas | Software/Juegos | Web |
| **Compilado/Interpretado** | Compilado | Compilado | Interpretado |
| **Gestión memoria** | Manual | Manual | Automática |

## ¿Por Dónde Empezar?

**Si eres completamente nuevo:**
1. Comienza con **JavaScript** → Es más amigable y ves resultados inmediatos
2. Luego prueba **C** → Te enseña los fundamentos profundos
3. Finalmente **C++** → Combina lo mejor de ambos mundos

**Si quieres entender cómo funciona todo:**
1. Empieza con **C** → Bases sólidas desde el principio
2. Sigue con **C++** → Evolución natural
3. Aprende **JavaScript** → Será más fácil después de C/C++

## Consejo Final

No importa con cuál empieces: **la lógica de programación es universal**. Una vez que entiendas cómo pensar como programador (resolver problemas paso a paso), cambiar de lenguaje es solo cuestión de aprender nueva sintaxis.

**Lo importante es practicar**. Programa todos los días, aunque sea 30 minutos. La programación se aprende programando, no leyendo.

---

**Siguiente paso:** Ve a la carpeta del lenguaje que elegiste y comienza con los ejemplos básicos (carpeta `01-basico/`).

¡Suerte y bienvenido al mundo de la programación! �