#include <stdio.h>

struct point
{
  int x;
  int y;
};

struct rect
{
  struct point pt1;
  struct point pt2;
};

struct point makepoint(int, int);
struct point addpoint(struct point p1, struct point p2);
int ptintrect(struct point p, struct rect r);

int main(int argc, char const *argv[])
{
  struct rect screen;
  struct point middle;

  screen.pt1 = makepoint(0, 0);
  screen.pt2 = makepoint(2, 2);

  middle = makepoint(screen.pt1.x + screen.pt2.y,
                     screen.pt1.y + screen.pt2.y);
  return 0;
}

/* makepoint: make a point from x and y components */
struct point makepoint(int x, int y)
{
  struct point temp;

  temp.x = x;
  temp.y = y;
  return temp;
}

/* addpoint: add two points */
struct point addpoint(struct point p1, struct point p2)
{
  p1.x += p2.x;
  p1.y += p2.y;
  return p1;
}

/* ptinrect:  return 1 if p in r, 0 if not */
int ptintrect(struct point p, struct rect r)
{
  return p.x >= r.pt1.x && p.x <= r.pt2.x
    && p.y >= r.pt1.y && p.y <= r.pt2.y;
}