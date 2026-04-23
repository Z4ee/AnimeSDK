#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_AUTHORIZATION_GET_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1A0F0770)
#define SYSTEM_NET_AUTHORIZATION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1A0F0760)
#define SYSTEM_NET_AUTHORIZATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0F0710)
#define SYSTEM_NET_AUTHORIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F06C0)

namespace System::Net
{
	inline static constexpr unsigned int Authorization_TypeDefinitionIndex = 2716;

	class Authorization : public ::System::Object
	{
	public:
		::System::String* m_Message; // 0x10
		::System::String* ModuleAuthenticationType; // 0x18
		::System::Boolean m_Complete; // 0x20

		::System::Void _ctor(::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION__CTOR_OFFSET))(this, token);
		}

		::System::Void _ctor_1(::System::String* token, ::System::Boolean finished)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION__CTOR_1_OFFSET))(this, token, finished);
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
