#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define UNITYENGINE_ASSERTIONS_ASSERTIONEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1B27C5E0)
#define UNITYENGINE_ASSERTIONS_ASSERTIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27C110)

namespace UnityEngine::Assertions
{
	inline static constexpr unsigned int AssertionException_TypeDefinitionIndex = 4931;

	class AssertionException : public ::System::Exception
	{
	public:
		::System::String* m_UserMessage; // 0x88

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
