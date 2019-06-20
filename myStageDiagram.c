//===========stage diagram===========
//This show how a simple stage diagram is coded

int main(){
    //setup();
    while(1){
        //loop();
        static enum {eStage1, eStage2, eStage3} eState = eStage3;
        switch (eState)
        {
            case eStage1:
                doStage1();
            break;

            case eStage2:
                doStage2();
            break;
                
            case eStage3:
                doStage3();
            break;

            default:
            break;
        }
    }
    return 0;
}

