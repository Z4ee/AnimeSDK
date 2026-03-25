#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETEQUALITYMESSAGE_OFFSET UNITYSDK_OFFSET(0x189F0360)
#define UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETMESSAGE_1_OFFSET UNITYSDK_OFFSET(0x189F09F0)
#define UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x189F0810)

namespace UnityEngine::Assertions
{
	inline static constexpr unsigned int AssertionMessageUtil_TypeDefinitionIndex = 4750;

	class AssertionMessageUtil : public ::System::Object
	{
	public:
		static ::System::String* GetMessage(::System::String* failureMessage)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETMESSAGE_OFFSET))(failureMessage);
		}

		static ::System::String* GetMessage_1(::System::String* failureMessage, ::System::String* expected)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETMESSAGE_1_OFFSET))(failureMessage, expected);
		}

		static ::System::String* GetEqualityMessage(::System::Object* actual, ::System::Object* expected, ::System::Boolean expectEqual)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETEQUALITYMESSAGE_OFFSET))(actual, expected, expectEqual);
		}
	};
}
