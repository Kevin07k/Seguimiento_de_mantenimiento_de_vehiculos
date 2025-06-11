# NOMBRE PROYECTO

Seguimiento de mantenimiento de vehículos

## Introducción

El sistema para “AutoCheck Express” busca mejorar el control de servicios realizados y anticipar mantenimientos futuros, ofreciendo un seguimiento claro y ordenado.

### Descripción general del sistema

Permite registrar servicios por vehículo, guardar datos del cliente y programar alertas para el próximo mantenimiento, optimizando la gestión del taller.

### Objetivo General

Registrar servicios y alertar próximos mantenimientos.

### Objetivos específicos

1. Registrar y almacenar de forma organizada los servicios realizados a cada vehículo.

2. Programar automáticamente el próximo mantenimiento según el tipo de servicio.

3. Generar alertas que recuerden a los clientes y al taller los mantenimientos próximos.

---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 1

* **HU-01**: Como recepcionista quiero registrar un nuevo servicio para que quede guardado en el historial del vehículo.
  * ✅ El sistema guarda correctamente los datos del servicio con la fecha , tipo y observaciones.
  * ❌ Si falta un dato obligatorio, el sistema muestra un mensaje de advertencia.


* **HU-02**: Como recepcionista quiero seleccionar un vehículo registrado para asignarle un nuevo servicio.
  * ✅ El sistema muestra una lista de vehículos existentes para seleccionar.
  * ❌ Si el vehículo no existe, se muestra un mensaje que indique que debe registrarse primero.


* **HU-03**: Como recepcionista quiero ver un formulario claro para registrar servicios para evitar errores de ingreso.
  * ✅ El formulario incluye campos obligatorios como fecha, servicio realizado y observaciones.
  * ❌ Si el formulario se envía incompleto, se debe evitar el registro y mostrar los errores.


* **HU-04**: Como recepcionista quiero que los servicios registrados se guarden automáticamente en el historial del vehículo para un mejor seguimiento.
  * ✅ Al guardar un servicio, este aparece en el historial del vehículo correspondiente.
  * ❌ Si el sistema pierde la conexión, debe impedir el registro e informar el error.


* **HU-05**: Como administrador quiero consultar el historial de servicios por vehículo para verificar trabajos anteriores.
  * ✅ El sistema muestra todos los servicios previos con fecha y tipo de servicio.
  * ❌ Si el vehículo no tiene historial, debe indicarse con un mensaje claro.


* **HU-06**: Como recepcionista quiero registrar múltiples servicios en una sola visita para mayor eficiencia.
  * ✅ El sistema permite agregar varios servicios distintos antes de guardar el registro.
  * ❌ Si se intenta duplicar un servicio en la misma visita, debe mostrar una advertencia.

---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 2l

* **HU-07**: Como recepcionista quiero que el sistema sugiera la fecha del próximo mantenimiento según el tipo de servicio para ahorrar tiempo.
  * ✅ El sistema calcula automáticamente la fecha próxima basándose en el servicio realizado.
  * ❌ Si el tipo de servicio no tiene una periodicidad definida, el sistema debe solicitarla manualmente.


* **HU-08**: Como recepcionista quiero registrar la fecha del próximo mantenimiento para llevar un seguimiento más organizado.
  * ✅ El sistema permite guardar la fecha sugerida o modificarla antes de confirmar.
  * ❌ Si la fecha es anterior a la del servicio actual, el sistema debe impedir el registro.


* **HU-09**: Como cliente quiero saber cuándo será el próximo mantenimiento para no olvidarlo.
  * ✅ El sistema guarda y muestra la próxima fecha en el historial del vehículo.
  * ❌ Si el servicio no tiene fecha futura asignada, el sistema muestra un mensaje indicando que no se ha programado.


* **HU-10**: Como administrador quiero definir la periodicidad estándar de cada tipo de servicio para facilitar la programación.
  * ✅ El sistema permite establecer y editar los intervalos (por días o kilómetros) de mantenimiento.
  * ❌ Si se ingresa un valor no válido (por ejemplo, negativo), el sistema debe rechazarlo.


* **HU-11**: Como recepcionista quiero que el sistema me notifique si un vehículo ya tiene un mantenimiento programado antes de registrar otro.
  * ✅ El sistema muestra una advertencia si ya hay un mantenimiento programado para ese vehículo.
  * ❌ Si se omite esta validación, el sistema podría generar conflictos de programación.


* **HU-12**: Como recepcionista quiero que el sistema calcule el próximo mantenimiento también en base al kilometraje cuando aplique.
  * ✅ El sistema ofrece la opción de ingresar el kilometraje actual y calcula el próximo servicio.
  * ❌ Si el kilometraje ingresado es menor al anterior, el sistema muestra un error.



---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 3

* **HU-13**: Como recepcionista quiero recibir alertas diarias sobre los mantenimientos próximos para avisar a los clientes a tiempo.
  * ✅ El sistema muestra una lista diaria de vehículos con mantenimientos cercanos.
  * ❌ Si no hay mantenimientos programados, el sistema debe mostrar un mensaje indicando que no hay alertas.


* **HU-14**: Como cliente quiero recibir un recordatorio por mensaje o correo antes de la fecha de mantenimiento para no olvidarlo.
  * ✅ El sistema envía automáticamente un recordatorio unos días antes del mantenimiento.
  * ❌ Si el correo o número del cliente está vacío, el sistema debe impedir el envío y notificar al recepcionista.


* **HU-15**: Como recepcionista quiero ver una notificación visual en el sistema cuando un mantenimiento esté próximo para no pasarlo por alto.
  * ✅ El sistema muestra un ícono o alerta visible en el panel principal cuando hay mantenimientos cercanos.
  * ❌ Si la alerta persiste después de atender el mantenimiento, el sistema debe permitir marcarla como resuelta.


* **HU-16**: Como administrador quiero configurar cuántos días antes se deben generar las alertas para ajustar según la necesidad del taller.
  * ✅ El sistema permite modificar el número de días de anticipación para cada tipo de alerta.
  * ❌ Si se ingresa un valor no válido (ej. texto o número negativo), el sistema debe rechazarlo con un mensaje claro.


* **HU-17**: Como recepcionista quiero poder marcar una alerta como atendida para llevar un mejor control de seguimiento.
  * ✅ El sistema permite marcar una alerta como completada y la elimina del panel de pendientes.
  * ❌ Si se intenta marcar una alerta ya vencida sin servicio registrado, el sistema debe mostrar una advertencia.


* **HU-18**: Como cliente quiero confirmar la recepción de una alerta para asegurarme de que el taller sepa que estoy informado.
  * ✅ El sistema registra si el cliente abrió o respondió al mensaje de alerta.
  * ❌ Si el mensaje falla al enviarse, el sistema debe mostrar un error y registrar el intento fallido.
