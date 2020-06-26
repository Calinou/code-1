namespace integration {
    struct clientintegration {
        virtual int setup() { return 0; }
        virtual void cleanup() {}
        virtual void update() {}
        virtual void getappdir(char *installdir) {};

        virtual void cancelticket() {}
        virtual void getticket(int* ticket) {};
        virtual void getsteamid(char* id) {};
        virtual int getticketlength() { return 0; }

        virtual void setachievement(const char* achievement) {}

        virtual void createmapid() {}
        virtual void updatemapbyid(const char* id, const char* title, const char* content, const char* desc = NULL, const char* preview = NULL) {}
        virtual bool downloadmap(const char* id, int *status) { return false; }
    };

    struct serverintegration {
        virtual void setup(int unIP, int usGamePort) { }
        virtual void cleanup() {}
        virtual void update() {}

        virtual bool answerticket(char* steamid, int length, int* ticket) { return false; }
        virtual void endsession(char* steamid) {}
    };
}
