#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_REJECTDRAGANDDROPMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F00F8D0)

namespace UnityEngine
{
	inline static constexpr unsigned int RejectDragAndDropMaterial_TypeDefinitionIndex = 3714;

	class RejectDragAndDropMaterial : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REJECTDRAGANDDROPMATERIAL__CTOR_OFFSET))(this);
		}
	};
}
