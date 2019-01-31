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

  window.addEventListener("load", init, false);
  

  /* FUNCION PARA RECOGER LOS DATOS DEL XML */
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
        readXML(this);
    }
    };
    
    xhttp.open("GET", "moviles.xml", true);
    xhttp.send();

    function readXML(xml) {
        var x, i, xmlDoc, txt;
        xmlDoc = xml.responseXML;
        //txt = "";
        var txt = new Array();
        x = xmlDoc.getElementsByTagName('movil');
        
        for (i = 0; i < x.length; i++) {
            txt[i] = x[i].getAttribute('modelo');
            var moviles = [txt];
            //var sel = document.getElementById('moviles');
            writeToScreen("<input type='checkbox'>" + txt[i] + "<br>");
        }
            
        
    } 
  
  
  
