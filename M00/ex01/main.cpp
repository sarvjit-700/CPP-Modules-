/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:43:20 by ssukhija          #+#    #+#             */
/*   Updated: 2026/02/11 20:43:20 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	show_menu()
{
    std::cout << "\n" << "---------------------------------" << "\n" 
        << "       MAIN PHONEBOOK MENU       " << "\n"
        << "---------------------------------" << "\n"
        << std::setw(14) << std::left << "COMMAND" << "| DESCRIPTION" << "\n"
        << "---------------------------------" << "\n"
        << std::setw(14) << std::left << "ADD" << "| Add a contact" << "\n"
        << std::setw(14) << std::left << "SEARCH" << "| Search contacts" << "\n"
        << std::setw(14) << std::left << "EXIT" << "| Exit Phonebook!" << "\n"
        << "\nMake your choice (ADD, SEARCH, EXIT) : \n> ";
}


void    get_choice(PhoneBook pb)
{
    std::string choice;

    while (std::getline(std::cin, choice))
    {
        if (choice == "ADD")
        {
            std::cout << "\n** Add a Contact **" << "\n" 
                << "--------------------";
            pb.add_contact();
        }
        else if (choice == "SEARCH")
        {
            std::cout << "\n";
            pb.list_contacts();
        }
        else if (choice == "EXIT")
        {
            std::cout << "EXITING PHONEBOOK...bye, bye. " << "\n";
            return ;
        }
        else
        {
            std::cout << "Please choose ADD, SEARCH or EXIT..." << "\n> ";
            continue ;
        }
        show_menu();
    }

}

int main()
{
    PhoneBook   pb;

    std::cout << "\n*** WELCOME TO MY PHONEBOOK! *** \n";
    show_menu();
    get_choice(pb);

    return (0);
}