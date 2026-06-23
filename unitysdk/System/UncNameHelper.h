#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_UNCNAMEHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1B1D9FC0)
#define SYSTEM_UNCNAMEHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x1B1D9FB0)
#define SYSTEM_UNCNAMEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D9FA0)

namespace System
{
	inline static constexpr unsigned int UncNameHelper_TypeDefinitionIndex = 2693;

	class UncNameHelper : public ::System::Object
	{
	public:
		// static const ::System::Int32 MaximumInternetNameLength = 0x100; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNCNAMEHELPER__CTOR_OFFSET))(this);
		}

		static ::System::String* ParseCanonicalName(::System::String* str, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& loopback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_UNCNAMEHELPER_PARSECANONICALNAME_OFFSET))(str, start, end, loopback);
		}

		static ::System::Boolean IsValid(::System::Char* name, ::System::UInt16 start, ::System::Int32& returnedEnd, ::System::Boolean notImplicitFile)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::UInt16, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_UNCNAMEHELPER_ISVALID_OFFSET))(name, start, returnedEnd, notImplicitFile);
		}
	};
}
