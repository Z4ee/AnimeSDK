#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/PlatformID.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Version; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_OPERATINGSYSTEM_CLONE_OFFSET UNITYSDK_OFFSET(0x18741490)
#define SYSTEM_OPERATINGSYSTEM_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x187414D0)
#define SYSTEM_OPERATINGSYSTEM_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x18741460)
#define SYSTEM_OPERATINGSYSTEM_GET_SERVICEPACK_OFFSET UNITYSDK_OFFSET(0x18741480)
#define SYSTEM_OPERATINGSYSTEM_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x18741470)
#define SYSTEM_OPERATINGSYSTEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18741640)
#define SYSTEM_OPERATINGSYSTEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18741300)
#define SYSTEM_OPERATINGSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18741190)

namespace System
{
	inline static constexpr unsigned int OperatingSystem_TypeDefinitionIndex = 414;

	class OperatingSystem : public ::System::Object
	{
	public:
		::System::String* _servicePack; // 0x10
		::System::Version* _version; // 0x18
		::System::PlatformID _platform; // 0x20

		::System::Void _ctor(::System::PlatformID a1, ::System::Version* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::PlatformID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::PlatformID get_Platform()
		{
			return ((::System::PlatformID(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_GET_PLATFORM_OFFSET))(this);
		}

		::System::Version* get_Version()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_GET_VERSION_OFFSET))(this);
		}

		::System::String* get_ServicePack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_GET_SERVICEPACK_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_CLONE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_TOSTRING_OFFSET))(this);
		}
	};
}
