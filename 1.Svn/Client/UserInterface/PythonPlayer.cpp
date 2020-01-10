//Find
		CPythonNetworkStream& rkNetStream=CPythonNetworkStream::Instance();
		rkNetStream.SendItemPickUpPacket(dwIID);
		
///Add before
		CItemData* pItemData;
		if (!CItemManager::Instance().GetItemDataPointer(CPythonItem::Instance().GetVirtualNumberOfGroundItem(dwIID), &pItemData))
			return;

		std::string base = "sound/ui/";
		switch (pItemData->GetType()) {
		case CItemData::ITEM_TYPE_ELK:
			base += "money.wav";
			break;
		case CItemData::ITEM_TYPE_WEAPON:
			base += "bracelet.wav";
			break;
		case CItemData::ITEM_TYPE_ARMOR:
			base += "pickup_item_in_inventory.wav";
			break;
		default:
			base += "close.wav";
		}
		CSoundManager::Instance().PlaySound2D(base.c_str());
		
https://puu.sh/EYiMK/3667511882.png