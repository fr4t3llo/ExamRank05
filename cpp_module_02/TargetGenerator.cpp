/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:26:17 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:26:30 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator(){
    std::map<std::string , ATarget *>::iterator it = mymap.begin();
    while (it != mymap.end())
    {
        delete it->second;
        it++;
    }
    mymap.clear();
}
TargetGenerator &TargetGenerator::operator=(TargetGenerator const &obj){
    this->mymap = obj.mymap;
    return *this;
}
void TargetGenerator::learnTargetType(ATarget *ptr){
    if (ptr)
        mymap.insert(std::pair<std::string, ATarget *>(ptr->getType(), ptr->clone()));
}
void TargetGenerator::forgetTargetType(std::string const &obj){
    std::map<std::string , ATarget *>::iterator fd = mymap.find(obj);
    if (fd != mymap.end())
    {
        delete fd->second;
    }
    mymap.erase(obj);
}
ATarget* TargetGenerator::createTarget(std::string const &obj){
    std::map<std::string, ATarget *>::iterator it = mymap.find(obj);
    if (it != mymap.end())
    {
        return mymap[obj];
    }
    return NULL;
}