#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define UNITYENGINE_TIMELINE_SUPPORTSCHILDTRACKSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5FD60)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SupportsChildTracksAttribute_TypeDefinitionIndex = 32411;

	class SupportsChildTracksAttribute : public ::System::Attribute
	{
	public:
		::System::Type* childType; // 0x10
		::System::Int32 levels; // 0x18

		::System::Void _ctor(::System::Type* childType, ::System::Int32 levels)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SUPPORTSCHILDTRACKSATTRIBUTE__CTOR_OFFSET))(this, childType, levels);
		}
	};
}
