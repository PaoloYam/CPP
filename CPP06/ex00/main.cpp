/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:30:28 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/21 10:36:26 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char **argv) {
    if (argc != 2)
    {
            std::cout << "Please, enter one and only one litteral" << std::endl;
            return (0);
    }

    convert(argv[1]);
}
