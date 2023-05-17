namespace gas{
int return_one();

class GASApp {
public:
    GASApp() = default; // create the app
    virtual ~GASApp() {} // destroy the app

public:
    virtual void init() = 0; // init the app
    virtual bool tick() = 0; // run the logic tick and render tick, return if the app is running or not
    virtual void terminate() = 0; // terminate the app
};

}