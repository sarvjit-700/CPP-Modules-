/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:16:25 by ssukhija          #+#    #+#             */
/*   Updated: 2026/02/11 17:16:25 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void    Contact::set_firstName(std::string first_name)
{
    this->first_name = first_name;
}

void    Contact::set_lastName(std::string last_name)
{
    this->last_name = last_name;
}

void    Contact::set_nickname(std::string nick_name)
{
    this->nick_name = nick_name;
}

void    Contact::set_phoneNum(std::string phone_Num)
{
    this->phone_Num = phone_Num;
}

void    Contact::set_darkSecret(std::string dark_Secret)
{
    this->dark_Secret = dark_Secret;
}


std::string Contact::get_firstName()
{
    return (this->first_name);
}

std::string Contact::get_lastName()
{
    return (this->last_name);
}

std::string  Contact::get_nickname()
{
    return (this->nick_name);
}

std::string  Contact::get_phoneNum()
{
    return (this->phone_Num);
}

std::string  Contact::get_darkSecret()
{
    return (this->dark_Secret);
}