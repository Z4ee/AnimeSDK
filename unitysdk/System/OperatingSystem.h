#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/PlatformID.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Version; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_OPERATINGSYSTEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8BC360)
#define SYSTEM_OPERATINGSYSTEM_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C8BC3C0)
#define SYSTEM_OPERATINGSYSTEM_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1C8BC340)
#define SYSTEM_OPERATINGSYSTEM_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1C8BC350)
#define SYSTEM_OPERATINGSYSTEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8BC540)
#define SYSTEM_OPERATINGSYSTEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8BC1D0)
#define SYSTEM_OPERATINGSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BC090)

namespace System
{
	inline static constexpr unsigned int OperatingSystem_TypeDefinitionIndex = 402;

	class OperatingSystem : public ::System::Object
	{
	public:
		::System::String* _servicePack; // 0x10
		::System::Version* _version; // 0x18
		::System::PlatformID _platform; // 0x20

		::System::Void _ctor(::System::PlatformID platform, ::System::Version* version)
		{
			return ((::System::Void(*)(::PVOID, ::System::PlatformID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM__CTOR_OFFSET))(this, platform, version);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* information, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM__CTOR_1_OFFSET))(this, information, context);
		}

		::System::PlatformID get_Platform()
		{
			return ((::System::PlatformID(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_GET_PLATFORM_OFFSET))(this);
		}

		::System::Version* get_Version()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_GET_VERSION_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_CLONE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_TOSTRING_OFFSET))(this);
		}
	};
}
