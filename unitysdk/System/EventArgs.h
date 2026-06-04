#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_EVENTARGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x186CAE20)
#define SYSTEM_EVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1869F450)

namespace System
{
	inline static constexpr unsigned int EventArgs_TypeDefinitionIndex = 241;

	class EventArgs : public ::System::Object
	{
	public:
		static ::System::EventArgs** StaticGet_Empty()
		{
			return (::System::EventArgs**)Il2CppClass::FromTypeDefinitionIndex(EventArgs_TypeDefinitionIndex)->GetStaticField(0x6060);
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
