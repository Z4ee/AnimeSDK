#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_NET_VALIDATIONHELPER_EXCEPTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C07ECB0)
#define SYSTEM_NET_VALIDATIONHELPER_HASHSTRING_OFFSET UNITYSDK_OFFSET(0x1C07EEA0)
#define SYSTEM_NET_VALIDATIONHELPER_ISBLANKSTRING_OFFSET UNITYSDK_OFFSET(0x1C07EFB0)
#define SYSTEM_NET_VALIDATIONHELPER_ISINVALIDHTTPSTRING_OFFSET UNITYSDK_OFFSET(0x1C07EF30)
#define SYSTEM_NET_VALIDATIONHELPER_MAKEEMPTYARRAYNULL_OFFSET UNITYSDK_OFFSET(0x1C07EC80)
#define SYSTEM_NET_VALIDATIONHELPER_MAKESTRINGNULL_OFFSET UNITYSDK_OFFSET(0x1C07ECA0)
#define SYSTEM_NET_VALIDATIONHELPER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C07ED50)
#define SYSTEM_NET_VALIDATIONHELPER_VALIDATERANGE_OFFSET UNITYSDK_OFFSET(0x1C07EFD0)
#define SYSTEM_NET_VALIDATIONHELPER_VALIDATESEGMENT_OFFSET UNITYSDK_OFFSET(0x1C07EFE0)
#define SYSTEM_NET_VALIDATIONHELPER_VALIDATETCPPORT_OFFSET UNITYSDK_OFFSET(0x1C07EFC0)
#define SYSTEM_NET_VALIDATIONHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C07F090)

namespace System::Net
{
	inline static constexpr unsigned int ValidationHelper_TypeDefinitionIndex = 3296;

	class ValidationHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_InvalidParamChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(ValidationHelper_TypeDefinitionIndex)->GetStaticField(0x3A70);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_InvalidMethodChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(ValidationHelper_TypeDefinitionIndex)->GetStaticField(0x3A78);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ValidationHelper_TypeDefinitionIndex)->GetStaticField(0x3A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* MakeEmptyArrayNull(::Il2CppArray<::System::String*>* stringArray)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_MAKEEMPTYARRAYNULL_OFFSET))(stringArray);
		}

		static ::System::String* MakeStringNull(::System::String* stringValue)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_MAKESTRINGNULL_OFFSET))(stringValue);
		}

		static ::System::String* ExceptionMessage(::System::Exception* exception)
		{
			return ((::System::String*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_EXCEPTIONMESSAGE_OFFSET))(exception);
		}

		static ::System::String* ToString(::System::Object* objectValue)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_TOSTRING_OFFSET))(objectValue);
		}

		static ::System::String* HashString(::System::Object* objectValue)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_HASHSTRING_OFFSET))(objectValue);
		}

		static ::System::Boolean IsInvalidHttpString(::System::String* stringValue)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_ISINVALIDHTTPSTRING_OFFSET))(stringValue);
		}

		static ::System::Boolean IsBlankString(::System::String* stringValue)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_ISBLANKSTRING_OFFSET))(stringValue);
		}

		static ::System::Boolean ValidateTcpPort(::System::Int32 port)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_VALIDATETCPPORT_OFFSET))(port);
		}

		static ::System::Boolean ValidateRange(::System::Int32 actual, ::System::Int32 fromAllowed, ::System::Int32 toAllowed)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_VALIDATERANGE_OFFSET))(actual, fromAllowed, toAllowed);
		}

		static ::System::Void ValidateSegment(::System::ArraySegment_1<::System::Byte> segment)
		{
			return ((::System::Void(*)(::System::ArraySegment_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_VALIDATESEGMENT_OFFSET))(segment);
		}
	};
}
