#define XPAINT_FULL
#include <xpaint.h>
#include <stdbool.h>

int main(){
    x_open(600, 600, "fig");
    x_set_viewer("eog");
    int x = 0;
    int y = 0;
    while(true){
        int x2, y2;
        scanf("%d %d", &x2, &y2);
        x_fill_line(x, y, x2, y2, 4);
        x_save();
        x = x2;
        y = y2;
    }    
    x_save();
    x_close();
}