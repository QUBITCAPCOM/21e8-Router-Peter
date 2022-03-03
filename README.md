# Router project for 21e8

- running "make" builds the router and gui for router
- then running "make prosumer" builds the prosumer that interacts with the router
- prosumer requires 2 folders in directory called "index" and "data" for the node (However node isn't fully realized in this yet")

# Dependencies
- nlohmann/json https://github.com/nlohmann/json
- imgui https://github.com/ocornut/imgui + GLFW
- crypto++ https://cryptopp.com/ ( sudo apt-get install libcrypto++-dev libcrypto++-doc libcrypto++-utils )
- TaskFlow https://github.com/taskflow/taskflow ( already included in repo )



# For minimal Router
- run make docker 
- once built run with the variables specified 
i.e. ```./router [ip adress router will run on] [port router will run on] [address of router to connect to] [port of router to connect to]```
- If router is run on port 8080 it will skip connecting to another router and will continue listining for client connections
- this can be changed on line 234 of router.hpp
