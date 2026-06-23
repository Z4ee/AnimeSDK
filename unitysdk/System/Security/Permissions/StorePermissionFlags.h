#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Permissions
{
	inline static constexpr unsigned int StorePermissionFlags_TypeDefinitionIndex = 4105;

	enum class StorePermissionFlags : ::System::Int32
	{
		AddToStore = 32,
		AllFlags = 247,
		CreateStore = 1,
		DeleteStore = 2,
		EnumerateCertificates = 128,
		EnumerateStores = 4,
		NoFlags = 0,
		OpenStore = 16,
		RemoveFromStore = 64,
	};
}
