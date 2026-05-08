#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Version; }

#define SYSTEM_NET_HTTPVERSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AF3D70)
#define SYSTEM_NET_HTTPVERSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF3D60)

namespace System::Net
{
	inline static constexpr unsigned int HttpVersion_TypeDefinitionIndex = 3282;

	class HttpVersion : public ::System::Object
	{
	public:
		static ::System::Version** StaticGet_Version11()
		{
			return (::System::Version**)Il2CppClass::FromTypeDefinitionIndex(HttpVersion_TypeDefinitionIndex)->GetStaticField(0x2E90);
		}
		static ::System::Version** StaticGet_Version10()
		{
			return (::System::Version**)Il2CppClass::FromTypeDefinitionIndex(HttpVersion_TypeDefinitionIndex)->GetStaticField(0x2E98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPVERSION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPVERSION__CCTOR_OFFSET))();
		}
	};
}
