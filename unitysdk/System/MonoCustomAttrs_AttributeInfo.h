#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AttributeUsageAttribute; }

#define SYSTEM_MONOCUSTOMATTRS_ATTRIBUTEINFO_GET_INHERITANCELEVEL_OFFSET UNITYSDK_OFFSET(0x16355870)
#define SYSTEM_MONOCUSTOMATTRS_ATTRIBUTEINFO_GET_USAGE_OFFSET UNITYSDK_OFFSET(0x16355860)
#define SYSTEM_MONOCUSTOMATTRS_ATTRIBUTEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16354CC0)

namespace System
{
	inline static constexpr unsigned int MonoCustomAttrs_AttributeInfo_TypeDefinitionIndex = 405;

	class MonoCustomAttrs_AttributeInfo : public ::System::Object
	{
	public:
		::System::AttributeUsageAttribute* _usage; // 0x10
		::System::Int32 _inheritanceLevel; // 0x18

		::System::Void _ctor(::System::AttributeUsageAttribute* usage, ::System::Int32 inheritanceLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::AttributeUsageAttribute*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_ATTRIBUTEINFO__CTOR_OFFSET))(this, usage, inheritanceLevel);
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
