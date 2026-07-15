#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_AUTHORIZATION_GET_COMPLETE_OFFSET UNITYSDK_OFFSET(0x19181B10)
#define SYSTEM_NET_AUTHORIZATION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x19181B00)
#define SYSTEM_NET_AUTHORIZATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19181AB0)
#define SYSTEM_NET_AUTHORIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19181A60)

namespace System::Net
{
	inline static constexpr unsigned int Authorization_TypeDefinitionIndex = 2720;

	class Authorization : public ::System::Object
	{
	public:
		::System::String* ModuleAuthenticationType; // 0x10
		::System::String* m_Message; // 0x18
		::System::Boolean m_Complete; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Boolean get_Complete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION_GET_COMPLETE_OFFSET))(this);
		}
	};
}
