/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:51:41 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/23 14:30:02 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutanStack.hpp"

int main(void) {
    MutanStack<int> s1;

    s1.push(14);
    s1.push(93);
    s1.push(94);

    std::cout << "La taille est de : " << s1.size() << std::endl;
    
    MutanStack<int>::iterator it = s1.begin();
    MutanStack<int>::iterator ite = s1.end();

    while (it != ite)
    {        
        std::cout << "value is: " << *it << std::endl;
        it++;
    }

    s1.pop();
    std::cout << "La taille est de : " << s1.size() << std::endl;
    

    std::cout << "Let's do it again" << std::endl;
    it = s1.begin();
    ite = s1.end();
    while (it != ite)
    {        
        std::cout << "value is: " << *it << std::endl;
        it++;
    }
    while (!s1.empty())
    {
        s1.pop();
        std::cout << "top value poped" << std::endl;
    }
    std::cout << "La taille est de : " << s1.size() << std::endl;
    std::cout << "la stack est elle vide : " << s1.empty() << std::endl;


}