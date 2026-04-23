#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeDescriptionProvider.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }

#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET UNITYSDK_OFFSET(0x1A0BF090)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0BF100)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A0BF170)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0BF1F0)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1A0BF040)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BF030)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DelegatingTypeDescriptionProvider_TypeDefinitionIndex = 2569;

	class DelegatingTypeDescriptionProvider : public ::System::ComponentModel::TypeDescriptionProvider
	{
	public:
		::System::Type* _type; // 0x20

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER__CTOR_OFFSET))(this, type);
		}

		::System::ComponentModel::TypeDescriptionProvider* get_Provider()
		{
			return ((::System::ComponentModel::TypeDescriptionProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GET_PROVIDER_OFFSET))(this);
		}

		::System::Collections::IDictionary* GetCache(::System::Object* instance)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET))(this, instance);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET))(this, instance);
		}

		::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET))(this, objectType, instance);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(this, objectType, instance);
		}
	};
}
