#include <router.hpp>

int main(int argc, char const *argv[]){
    try
    {
        // variables for connecting to other router
        string router_address = argv[1];
        int port = stoi(argv[2]);    
        std::string address = argv[3];
        int port_con = stoi(argv[4]);    

        boost::asio::io_service io_service;
        boost::asio::io_service router_ioservice;

        //Start router
        Router router(io_service, router_address, port, address, port_con, router_ioservice);    
        cout << "------------ Router Started ------------" << endl;
        io_service.run();
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << endl;
    }

    return 0;

}