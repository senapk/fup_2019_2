#define XPAINT_FULL //voce precisa dessa declaração antes do include
#include <xpaint.h> //voce precisa instalar o xpaint localmente ou globalmente

int main(){
    x_open(800, 600, "aula");
    int raio = 150;
    int x_centro = 400;
    int y_centro = 300;
    x_set_font_size(50);
    for(int ang_orelha = 0; ang_orelha <= 90; ang_orelha += 10){
        x_set_color(X_COLOR_WHITE);
        x_clear();
        x_set_color(X_COLOR_BLACK);
        x_write(0, 0, "Meu nome eh Myqueih");
        x_fill_circle(400, 300, raio);
        x_fill_circle(xm_cos(ang_orelha) * raio * 1.35 + x_centro, 
                    -xm_sin(ang_orelha) * raio * 1.35 + y_centro, 90);
        x_fill_circle(xm_cos(180 - ang_orelha) * raio * 1.35 + x_centro, 
                    -xm_sin(180 - ang_orelha) * raio * 1.35 + y_centro, 90);
        x_save();
    }
    x_save();
    x_close();
}