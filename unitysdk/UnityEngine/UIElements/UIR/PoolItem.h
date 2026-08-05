#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UIELEMENTS_UIR_POOLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D010000)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int PoolItem_TypeDefinitionIndex = 28217;

	class PoolItem : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_POOLITEM__CTOR_OFFSET))(this);
		}
	};
}
