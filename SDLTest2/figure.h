#ifndef SHAPE_H
#define SHAPE_H

typedef struct Shape {
	float vertices[];

} Shape_t;

Shape_t * Shape_Init(float vertices[]);

#endif