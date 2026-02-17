/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:17:57 by ssukhija          #+#    #+#             */
/*   Updated: 2026/02/11 17:17:57 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
private:
    std::string  first_name;
    std::string  last_name;
    std::string  nick_name;
    std::string  phone_Num;
    std::string  dark_Secret;
    
public:

    Contact();
    ~Contact();
    void    set_firstName(std::string);
    void    set_lastName(std::string);
    void    set_nickname(std::string);
    void    set_phoneNum(std::string);
    void    set_darkSecret(std::string);

    std::string  get_firstName();
    std::string  get_lastName();
    std::string  get_nickname();
    std::string  get_phoneNum();
    std::string  get_darkSecret();
};

#endif