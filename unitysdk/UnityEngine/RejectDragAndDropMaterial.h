#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_REJECTDRAGANDDROPMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB7F40)

namespace UnityEngine
{
	inline static constexpr unsigned int RejectDragAndDropMaterial_TypeDefinitionIndex = 3693;

	class RejectDragAndDropMaterial : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REJECTDRAGANDDROPMATERIAL__CTOR_OFFSET))(this);
		}
	};
}
