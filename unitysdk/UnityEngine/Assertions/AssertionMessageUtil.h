#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_BOOLEANFAILUREMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D6A1420)
#define UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETEQUALITYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D6A0EF0)
#define UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETMESSAGE_1_OFFSET UNITYSDK_OFFSET(0x1D6A0C10)
#define UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D6A0A90)
#define UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_NULLFAILUREMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D6A1200)
#define UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A14D0)

namespace UnityEngine::Assertions
{
	inline static constexpr unsigned int AssertionMessageUtil_TypeDefinitionIndex = 6352;

	class AssertionMessageUtil : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL__CTOR_OFFSET))(this);
		}

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

		static ::System::String* NullFailureMessage(::System::Object* value, ::System::Boolean expectNull)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_NULLFAILUREMESSAGE_OFFSET))(value, expectNull);
		}

		static ::System::String* BooleanFailureMessage(::System::Boolean expected)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONMESSAGEUTIL_BOOLEANFAILUREMESSAGE_OFFSET))(expected);
		}
	};
}
