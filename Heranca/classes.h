#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED


class veiculo{
    public:
       int vel;
       int blind;
       int rodas;
       void settipo (int tp);
       void setvelMax (int vm);
       void setarma (bool ar);

    private:
        int tipo; // 1=moto 2= carro 3=caminhao 4=tanque
        int velMax;
        bool arma;

};
    void veiculo:: settipo (int tp){
        tipo=tp;
    }
    void veiculo:: setvelMax (int vm){
        velmax=vm;
    }
    void veiculo:: setarma (bool ar){
        arma=ar;
    }
    class moto:public veiculo{
    }
    {
        public:
            moto();
    };

    moto::moto(){
        vel=0;
        blind=0;
        rodas=2;
        settipo(1);
        setvelMax(120);
        setarma(false);


    }

#endif // CLASSES_H_INCLUDED
