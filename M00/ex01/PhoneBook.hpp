/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:22:11 by ssukhija          #+#    #+#             */
/*   Updated: 2026/02/11 17:22:11 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook
{
private:
    Contact contact[8];
    int index;
    int count;

public:

    PhoneBook();
    ~PhoneBook();

    void    add_contact();
    void    list_contacts();
    void    show_contact();
    
};

#endif