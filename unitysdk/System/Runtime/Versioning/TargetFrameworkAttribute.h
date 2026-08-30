#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_VERSIONING_TARGETFRAMEWORKATTRIBUTE_SET_FRAMEWORKDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x19B9D1B0)
#define SYSTEM_RUNTIME_VERSIONING_TARGETFRAMEWORKATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9D140)

namespace System::Runtime::Versioning
{
	inline static constexpr unsigned int TargetFrameworkAttribute_TypeDefinitionIndex = 1092;

	class TargetFrameworkAttribute : public ::System::Attribute
	{
	public:
		::System::String* _frameworkDisplayName; // 0x10
		::System::String* _frameworkName; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_TARGETFRAMEWORKATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Void set_FrameworkDisplayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_TARGETFRAMEWORKATTRIBUTE_SET_FRAMEWORKDISPLAYNAME_OFFSET))(this, a1);
		}
	};
}
