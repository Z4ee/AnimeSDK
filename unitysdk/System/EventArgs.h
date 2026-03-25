#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_EVENTARGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x162E84E0)
#define SYSTEM_EVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x162BA620)

namespace System
{
	inline static constexpr unsigned int EventArgs_TypeDefinitionIndex = 242;

	class EventArgs : public ::System::Object
	{
	public:
		static ::System::EventArgs** StaticGet_Empty()
		{
			return (::System::EventArgs**)Il2CppClass::FromTypeDefinitionIndex(EventArgs_TypeDefinitionIndex)->GetStaticField(0x4FF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EVENTARGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_EVENTARGS__CCTOR_OFFSET))();
		}
	};
}
