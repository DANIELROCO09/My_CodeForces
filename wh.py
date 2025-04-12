import pywhatkit
import time
from datetime import datetime, timedelta

def enviar_mensajes_masivos():
    # Configuración
    numero = "+525560717988"  # Eliminé el espacio - formato internacional correcto
    mensaje_base = "Mensaje de prueba {} - Hora: {}"
    cantidad_mensajes = 10  # Cambia a 100 para prueba más extensa
    intervalo_minutos = 2   # Intervalo entre mensajes
    
    # Calcula la hora de inicio (1 minuto después de ahora)
    hora_inicio = datetime.now() + timedelta(minutes=1)
    
    try:
        for i in range(1, cantidad_mensajes + 1):
            # Formatea el mensaje
            hora_actual = datetime.now().strftime("%H:%M:%S")
            mensaje = mensaje_base.format(i, hora_actual)
            
            # Programa el envío
            hora_envio = hora_inicio.time()
            print(f"Programando mensaje {i} para las {hora_envio}")
            
            # Corrección en esta línea (había errores en los nombres de variables)
            pywhatkit.sendwhatmsg(numero, mensaje, hora_envio.hour, hora_envio.minute, 15, True, 5)
            
            # Actualiza la hora para el próximo mensaje
            hora_inicio += timedelta(minutes=intervalo_minutos)
            
            # Espera antes de programar el siguiente
            time.sleep(10)
            
        print(f"\nSe han programado {cantidad_mensajes} mensajes")
        
    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    print("ADVERTENCIA: El envío masivo puede violar los términos de WhatsApp")
    confirmacion = input("¿Estás seguro de continuar? (s/n): ").lower()
    
    if confirmacion == 's':
        enviar_mensajes_masivos()
    else:
        print("Operación cancelada")