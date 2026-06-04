#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }
namespace System::ComponentModel { class TypeDescriptionProvider_EmptyCustomTypeDescriptor; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET UNITYSDK_OFFSET(0x1AF37520)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AF37540)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_1_OFFSET UNITYSDK_OFFSET(0x1AF375F0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AF375D0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF37630)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_2_OFFSET UNITYSDK_OFFSET(0x1AF376C0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AF37610)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF322C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptionProvider_TypeDefinitionIndex = 2623;

	class TypeDescriptionProvider : public ::System::Object
	{
	public:
		::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor* _emptyDescriptor; // 0x10
		::System::ComponentModel::TypeDescriptionProvider* _parent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Collections::IDictionary* GetCache(::System::Object* a1)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET))(this, a1);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* a1)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET))(this, a1);
		}

		::System::Type* GetReflectionType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET))(this, a1);
		}

		::System::Type* GetReflectionType_1(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_1_OFFSET))(this, a1, a2);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* a1)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(this, a1);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor_1(::System::Object* a1)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_1_OFFSET))(this, a1);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor_2(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
