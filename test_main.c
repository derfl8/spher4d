/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:43:46 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/19 17:49:34 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/spher4d.h"

int main(void)
{
	double		angle;
	t_vector	vec1 = {1, 1};
	t_vector	vec2 = {-1, 1};

	printf("~~~~~ Current Test Variables ~~~~~\n");
	printf("vec1 = (%f,%f)\n", vec1.x, vec1.y);
	printf("vec2 = (%f,%f)\n", vec2.x, vec2.y);

	printf("\n~~~~~ Testing vec_angle_between(vec1, vec2)  ~~~~~\n");
	angle = vec_angle_between(&vec1, &vec2);
	printf("angle in radians: %f\n", angle);
	printf("angle in degrees: %f\n", angle * (180.0 / M_PI));

	printf("\n~~~~~ Testing vec_angle(vec1)  ~~~~~\n");
	angle = vec_angle(&vec1);
	printf("angle in radians of vec1: %f\n", angle);
	printf("angle in degrees of vec1: %f\n", angle * (180.0 / M_PI));

	printf("\n~~~~~ Testing vec_angle(vec2)  ~~~~~\n");
	angle = vec_angle(&vec2);
	printf("angle in radians of vec2: %f\n", angle);
	printf("angle in degrees of vec2: %f\n", angle * (180.0 / M_PI));

	double dot;
	printf("\n~~~~~ Testing vec_dot_product(vec1, vec2)  ~~~~~\n");
	dot = vec_dot_product(&vec1, &vec2);
	printf("dot product between vec1 and vec2: %f\n", dot);

	/*
	double cross;
	printf("\n~~~~~ Testing vec_cross_product(vec1, vec2)  ~~~~~\n");
	cross = vec_cross_product(&vec1, &vec2);
	printf("cross product between vec1 and vec2: %f\n", dot);
	*/

}
