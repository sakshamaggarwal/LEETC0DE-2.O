class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area=(abs(ay2-ay1)*abs(ax2-ax1))+(abs(by2-by1)*abs(bx2-bx1));

        int y1=max(by1,ay1);
        int y2=min(ay2,by2);
        int x2=min(bx2,ax2);
        int x1=max(ax1,bx1);

        int diffArea=abs(x1-x2)*abs(y1-y2);
        if(x2>x1&&y2>y1)
            area-=diffArea;
        return area;
    }
};
