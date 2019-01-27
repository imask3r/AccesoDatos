    var wsUri = "ws://localhost:3344";
    var output;

  function init()
  {
    output = document.getElementById("output");
    testWebSocket();
  }

  function testWebSocket()
  {
    websocket = new WebSocket(wsUri);
    websocket.onopen = function(evt) { onOpen(evt) };
    websocket.onclose = function(evt) { onClose(evt) };
    websocket.onmessage = function(evt) { onMessage(evt) };
    websocket.onerror = function(evt) { onError(evt) };
  }

  function onOpen(evt)
  {
    writeToScreen("Sistema conectado correctamente");
    //doSend("Hola caracola");
  }

  function onClose(evt)
  {
    writeToScreen("Sistema desconectado correctamente");
  }

  function onMessage(evt)
  {
    writeToScreen('<span style="color: blue;">RESPONSE: ' + evt.data+'</span>');
    websocket.close();
  }

  function onError(evt)
  {
    writeToScreen('<span style="color: red;">ERROR:</span> ' + evt.data);
  }

  function doSend(message)
  {
    writeToScreen("SENT: " + message);
    websocket.send(message);
  }

  function writeToScreen(message)
  {
    var pre = document.createElement("p");
    pre.style.wordWrap = "break-word";
    pre.innerHTML = message;
    output.appendChild(pre);
  }
  
  //Función para recoger valores del input (WIP)
  function getValues() {
    $(document).ready(function(){
      $("#submit").on("click",function(){
        var nombre = document.getElementById("nombre");
        $("#text").html(test);
      })
    });
    doSend(nombre);
  }

  window.addEventListener("load", init, false);
