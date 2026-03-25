#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Runtime/InteropServices/CallingConvention.h"
#include "unitysdk/System/Runtime/InteropServices/CharSet.h"

namespace System { class String; }
namespace System::Reflection { class RuntimeMethodInfo; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x163932E0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x16393460)
#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x16393420)
#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16393450)
#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x163933D0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int DllImportAttribute_TypeDefinitionIndex = 1409;

	class DllImportAttribute : public ::System::Attribute
	{
	public:
		::System::String* EntryPoint; // 0x10
		::System::String* _val; // 0x18
		::System::Runtime::InteropServices::CallingConvention CallingConvention; // 0x20
		::System::Boolean SetLastError; // 0x24
		::System::Boolean ExactSpelling; // 0x25
		::System::Boolean ThrowOnUnmappableChar; // 0x26
		::System::Runtime::InteropServices::CharSet CharSet; // 0x28
		::System::Boolean PreserveSig; // 0x2C
		::System::Boolean BestFitMapping; // 0x2D

		::System::Void _ctor(::System::String* dllName, ::System::String* entryPoint, ::System::Runtime::InteropServices::CharSet charSet, ::System::Boolean exactSpelling, ::System::Boolean setLastError, ::System::Boolean preserveSig, ::System::Runtime::InteropServices::CallingConvention callingConvention, ::System::Boolean bestFitMapping, ::System::Boolean throwOnUnmappableChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Runtime::InteropServices::CharSet, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Runtime::InteropServices::CallingConvention, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE__CTOR_OFFSET))(this, dllName, entryPoint, charSet, exactSpelling, setLastError, preserveSig, callingConvention, bestFitMapping, throwOnUnmappableChar);
		}

		::System::Void _ctor_1(::System::String* dllName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE__CTOR_1_OFFSET))(this, dllName);
		}

		static ::System::Attribute* GetCustomAttribute(::System::Reflection::RuntimeMethodInfo* method)
		{
			return ((::System::Attribute*(*)(::System::Reflection::RuntimeMethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET))(method);
		}

		static ::System::Boolean IsDefined(::System::Reflection::RuntimeMethodInfo* method)
		{
			return ((::System::Boolean(*)(::System::Reflection::RuntimeMethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_ISDEFINED_OFFSET))(method);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_GET_VALUE_OFFSET))(this);
		}
	};
}
