#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B746980)
#define SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_GET_LICENSEDTYPE_OFFSET UNITYSDK_OFFSET(0x1B746970)
#define SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B7464E0)
#define SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B746430)
#define SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B746740)
#define SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B746800)
#define SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B746280)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicenseException_TypeDefinitionIndex = 2927;

	class LicenseException : public ::System::SystemException
	{
	public:
		::System::Object* instance; // 0x88
		::System::Type* type; // 0x90

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION__CTOR_OFFSET))(this, type);
		}

		::System::Void _ctor_1(::System::Type* type, ::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION__CTOR_1_OFFSET))(this, type, instance);
		}

		::System::Void _ctor_2(::System::Type* type, ::System::Object* instance, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION__CTOR_2_OFFSET))(this, type, instance, message);
		}

		::System::Void _ctor_3(::System::Type* type, ::System::Object* instance, ::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION__CTOR_3_OFFSET))(this, type, instance, message, innerException);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION__CTOR_4_OFFSET))(this, info, context);
		}

		::System::Type* get_LicensedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_GET_LICENSEDTYPE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
