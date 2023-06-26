/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:03:11 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/21 11:03:14 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <iostream> 

class Base
{
    public:
    
       virtual ~Base(void);

};

class A : public Base
{

};
class B : public Base
{

};
class C : public Base
{

};
Base    *generate(void);
void	identify(Base &p);
void	identify(Base *p);

#endif