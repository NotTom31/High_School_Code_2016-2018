#pragma once
class VendingMachine
{
private:
	int itemCount();
	std::string itemName();
	int itemPrice();
public:
	VendingMachine();
	~VendingMachine();
	std::string GetItemName();
	int GetItemCount();
	int GetItemPrice();
	int SellItem();
};