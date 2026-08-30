#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AttributeUsageAttribute; }

#define SYSTEM_MONOCUSTOMATTRS_ATTRIBUTEINFO_GET_INHERITANCELEVEL_OFFSET UNITYSDK_OFFSET(0x1D4850A0)
#define SYSTEM_MONOCUSTOMATTRS_ATTRIBUTEINFO_GET_USAGE_OFFSET UNITYSDK_OFFSET(0x1D485090)
#define SYSTEM_MONOCUSTOMATTRS_ATTRIBUTEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D483F10)

namespace System
{
	inline static constexpr unsigned int MonoCustomAttrs_AttributeInfo_TypeDefinitionIndex = 407;

	class MonoCustomAttrs_AttributeInfo : public ::System::Object
	{
	public:
		::System::AttributeUsageAttribute* _usage; // 0x10
		::System::Int32 _inheritanceLevel; // 0x18

		::System::Void _ctor(::System::AttributeUsageAttribute* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::AttributeUsageAttribute*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_ATTRIBUTEINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::AttributeUsageAttribute* get_Usage()
		{
			return ((::System::AttributeUsageAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_ATTRIBUTEINFO_GET_USAGE_OFFSET))(this);
		}

		::System::Int32 get_InheritanceLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_ATTRIBUTEINFO_GET_INHERITANCELEVEL_OFFSET))(this);
		}
	};
}
