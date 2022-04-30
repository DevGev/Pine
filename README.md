<br><p align="center"><img src="https://i.postimg.cc/NFBnqHXd/pine.png" width="260px"></p>

## Description

Pine is a C++ web server inspired by Flask. It does not rely on any external libraries, and can therefore ensure quick compile speeds. Pine supports both dynamic and static routing whilst still being very minimalistic. Its easy installation process and many similarities to Flask, makes it a great drop-in replacement for those seeking to migrate their Python web server code into C++.

## Installation
```
git clone https://github.com/DevGev/Pine.git
cd Pine
./install.sh
```
This will create a dynamic library ```libpine.so``` and move it into ```/usr/lib```
and copy the Pine header files into ```/usr/include```

## Examples
```cpp
#include <pine/server.h>

void index(pine::request* request, pine::response* response) {
    response->set_text("index");
}

int main() {
    pine::server server(5000);
    server.route({ "/", index });
}
```
More comprehensive examples can be found [here](https://github.com/devgev/pine/tree/master/examples).
