struct point{
	double x;
	double y;
};

point cal(point a,point b,point c){
	double x1 = a.x;double y1 = a.y;
	double x2 = b.x;double y2 = b.y;
	double x3 = c.x; double y3 = c.y;
	double a1 = 2*(x2-x1); double a2 = 2*(x3-x2);
	double b1 = 2*(y2-y1); double b2 = 2*(y3-y2);
	double c1 = x2*x2 + y2*y2 - x1*x1 - y1*y1;
	double c2 = x3*x3 + y3*y3 - x2*x2 - y2*y2;
	double rx = (c1*b2-c2*b1)/(a1*b2-a2*b1);
	double ry = (c2*a1-c1*a2)/(a1*b2-a2*b1);
	return point{rx,ry};
}