/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 20:36:18 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/06 20:55:06 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Account.hpp>

// ************************************************************************** //
//                          Public Instance Functions                         //
// ************************************************************************** //

Account::Account(int initial_deposit) 
{
	
}

Account::~Account(void) 
{
	
}

void	Account::makeDeposit(int deposit) 
{
	
}

bool	Account::makeWithdrawal(int withdrawal) 
{
	
}

int		Account::checkAmount(void) const 
{
	
}

void	Account::displayStatus(void) const 
{
	
}

// ************************************************************************** //
//                         Private Instance Functions                         //
// ************************************************************************** //

Account::Account(void) 
{
	
}

// ************************************************************************** //
//                           Public Class Functions                           //
// ************************************************************************** //

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) 
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void) 
{
	return Account::_totalAmount;
}

int Account::getNbDeposits(void) 
{
	return Account:_totalNbDeposits;
}

int Account::getNbWithdrawals(void) 
{
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) 
{
	
}

// ************************************************************************** //
//                          Private Class Functions                           //
// ************************************************************************** //

void	Account::_displayTimestamp(void) 
{
	
}
