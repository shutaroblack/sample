struct xxx {
    const char* Name[8]; //nameを格納するメンバ変数
    int Id;           //idを格納するメンバ変数
    int Score;        //scoreを格納するメンバ変数  
    
};

struct yyy {
    const char* Name; //nameを格納するメンバ変数
    int Id;           //idを格納するメンバ変数
    int Score;        //scoreを格納するメンバ変数   
};

struct zzz {
    const char* Name; //nameを格納するメンバ変数
    int Id;           //idを格納するメンバ変数
    int Score;        //scoreを格納するメンバ変数   
};

class XXX{
    private:
    xxx name_;
    xxx id_;
    xxx score_;
    int totalscore;
    
    public:
    XXX() { }
    xxx& getxxx() {
        return name_,id_,score_;
    }
    int settotalscore(int Score);
    int gettotalscore();
};

class YYY{
    private:
    yyy name_;
    yyy id_;
    yyy score_;
    int totalscore;
    
    public:
    YYY() { }
    yyy& getxxx() {
        return name_,id_,score_;
    }
    int settotalscore(int Score);
    int gettotalscore();
};

class ZZZ{
    private:
    zzz name_;
    zzz id_;
    zzz score_;
    int totalscore;
    
    public:
    ZZZ() { }
    zzz& getxxx() {
        return name_,id_,score_;
    }
    int settotalscore(int Score);
    int gettotalscore();
};