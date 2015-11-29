# Chroma for Node
This is a native C++ Wrapper for the Chroma SDK. It currently only supports Keyboard as a proof of concept but will include more and more features in the Future. It also allows making Desktop apps with for example Electron!

### Version
0.0.1

### Preperation
After checkout create a folder called "sdk" and include the following files from the Razer SDK:

- RzChromaSDKDefines.h
- RzChromaSDKTypes.h
- RzErrors.h

To build:
```
npm install
npm run configure
npm run build

To test:
node chroma_example.js

```

### Example
``` js
var Chroma = require('chrode');

// Initialize Chroma
var init = Chroma.InitChroma();
if(init){
    // Chroma initalized
    var customGrid = [];
    
    // Make all rows and columns glow red
    for(var r=0; r<6; r++){
    	customGrid[r]=[];
    	for(var c=0; c<22; c++){
    		customGrid[r][c]={
    					Red: 255,
    					Green: 0,
    					Blue: 0		
    		};
    	}	
    }
    
    setTimeout(function(){
        // Uninitialize Chroma
		console.log(Chroma.UnInitChroma());
	},30000);
}
```