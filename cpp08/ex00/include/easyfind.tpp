/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:33:55 by folim             #+#    #+#             */
/*   Updated: 2024/08/09 09:33:56 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T> void easyfind(T &ptr, int nb){
    std::cout << "Finding " << nb << "...\n";
    std::find(ptr.begin(), ptr.end(), nb) != ptr.end()
        ? std::cout << "--Found--\n" : std::cout << "--Not Found--\n";
}
