/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:21:02 by sgah              #+#    #+#             */
/*   Updated: 2021/05/26 17:36:41 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

# include <iostream>

class Enemy {

	public:

		Enemy(int hp, std::string const & type);

		Enemy(Enemy const & src);
		virtual ~Enemy(void);

		Enemy &	operator=(const Enemy &rhs);
		
		std::string const &	getType(void) const;
		int					getHP(void) const;

		virtual void		takeDamage(int dmg);

	protected:
				int					_hp;
				std::string const &	_type;

};


#endif
