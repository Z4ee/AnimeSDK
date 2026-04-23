#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }
namespace System::ComponentModel { class TypeDescriptionProvider_EmptyCustomTypeDescriptor; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET UNITYSDK_OFFSET(0x1A0CF2F0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0CF310)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_1_OFFSET UNITYSDK_OFFSET(0x1A0CF3C0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A0CF3A0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0CF400)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_2_OFFSET UNITYSDK_OFFSET(0x1A0CF490)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0CF3E0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C99C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptionProvider_TypeDefinitionIndex = 2623;

	class TypeDescriptionProvider : public ::System::Object
	{
	public:
		::System::ComponentModel::TypeDescriptionProvider* _parent; // 0x10
		::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor* _emptyDescriptor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Collections::IDictionary* GetCache(::System::Object* instance)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET))(this, instance);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET))(this, instance);
		}

		::System::Type* GetReflectionType(::System::Type* objectType)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET))(this, objectType);
		}

		::System::Type* GetReflectionType_1(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_1_OFFSET))(this, objectType, instance);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(this, objectType);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor_1(::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_1_OFFSET))(this, instance);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor_2(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_2_OFFSET))(this, objectType, instance);
		}
	};
}
