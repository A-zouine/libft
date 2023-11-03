/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:53:06 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/03 13:36:16 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t s, size_t t)
{
	void	*ptr;
	char	*str;
	size_t	i;
	size_t	size_total;

	if (s == 0 || t == 0)
		return (0);
	size_total = (s * t);
	ptr = malloc(size_total);
	if (!ptr)
		return (0);
	str = (char *)ptr;
	i = 0;
	while (size_total > i)
	{
		str[i] = 0;
		i++;
	}
	return (ptr);
}

int main() {
    size_t num_elements = 5;
    size_t element_size = sizeof(char);
    char *array;

    // Appel de la fonction ft_calloc pour allouer un tableau de 5 entiers
    array = (char *)ft_calloc(num_elements, element_size);

    if (array == NULL) {
        printf("Erreur : allocation de mémoire a échoué.\n");
        return 1; // Quitte le programme avec un code d'erreur
    }

    // Utilisation du tableau alloué
    for (size_t i = 0; i < num_elements; ++i) {
        array[i] = i + 1;
    }

    // Affichage des éléments du tableau
    printf("Éléments du tableau :\n");
    for (size_t i = 0; i < num_elements; ++i) {
        printf("%d \t", array[i]);
    }
    printf("\n");

    // Libération de la mémoire allouée
    free(array);

    return 0; // Indique que le programme s'est exécuté avec succès
}
