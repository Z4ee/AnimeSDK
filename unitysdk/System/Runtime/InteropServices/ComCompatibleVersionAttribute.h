#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMCOMPATIBLEVERSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18770A40)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ComCompatibleVersionAttribute_TypeDefinitionIndex = 1413;

	class ComCompatibleVersionAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 _minor; // 0x10
		::System::Int32 _major; // 0x14
		::System::Int32 _build; // 0x18
		::System::Int32 _revision; // 0x1C

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMCOMPATIBLEVERSIONATTRIBUTE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
