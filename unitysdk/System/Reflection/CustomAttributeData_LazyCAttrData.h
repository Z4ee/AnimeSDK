#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class Assembly; }

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_LAZYCATTRDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1636A770)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeData_LazyCAttrData_TypeDefinitionIndex = 598;

	class CustomAttributeData_LazyCAttrData : public ::System::Object
	{
	public:
		::System::Reflection::Assembly* assembly; // 0x10
		::System::IntPtr data; // 0x18
		::System::UInt32 data_length; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_LAZYCATTRDATA__CTOR_OFFSET))(this);
		}
	};
}
