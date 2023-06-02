#pragma once
class CashRegister
{
private:
	int cashOnHand();
public:
	CashRegister();
	~CashRegister();
	int AddCash();
	int GetCashOnHand();
};