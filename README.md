# BIZViperModuleGenerator

![alt tag](https://github.com/bizibizi/BIZViperModuleGenerator/blob/master/Cover.jpg)
![alt tag](https://github.com/bizibizi/BIZViperModuleGenerator/blob/master/Structure.png)


BIZViperModuleGenerator is a pack of files that will helps to create VIPER module faster.


# Installation

### Manually
 - Copy ```#ModuleName#``` folder to your project 


# Usage

- Replace folder's name ```#ModuleName#``` to the name of your Viper module.
```
#ModuleName#   --->   MyList 
```
- Replace names of all files from that folder with the names of your Viper module.
```
#ModuleName#Wireframe.h   --->   MyListWireframe.h
```
- Add that folder to your project
- Go throught all added files with Xcode and replace ```#ModuleName#``` with name of your Viper module inside every file. 
You can use group rename feature of Xcode: 
 - ```Alt``` + ```Cmd``` + ```F``` 
 - All matches will be highlighted. 
 - Click ```All``` button to rename it.
![alt tag](https://github.com/bizibizi/BIZViperModuleGenerator/blob/master/group%20rename%20sample.png)
```
@interface #ModuleName#Wireframe   --->   @interface MyListWireframe
``` 

# Contact

Igor Bizi
- https://www.linkedin.com/in/igorbizi
- igorbizi@mail.ru


# License
 
The MIT License (MIT)

Copyright (c) 2015-present Igor Bizi

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
