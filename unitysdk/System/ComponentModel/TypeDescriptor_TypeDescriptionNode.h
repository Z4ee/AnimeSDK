#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeDescriptionProvider.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETCACHE_OFFSET UNITYSDK_OFFSET(0x1869B1F0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETEXTENDEDTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1869B3A0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1869C4D0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1869C530)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18695820)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_TypeDescriptionNode_TypeDefinitionIndex = 2630;

	class TypeDescriptor_TypeDescriptionNode : public ::System::ComponentModel::TypeDescriptionProvider
	{
	public:
		::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* Next; // 0x20
		::System::ComponentModel::TypeDescriptionProvider* Provider; // 0x28

		::System::Void _ctor(::System::ComponentModel::TypeDescriptionProvider* provider)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::TypeDescriptionProvider*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE__CTOR_OFFSET))(this, provider);
		}

		::System::Collections::IDictionary* GetCache(::System::Object* instance)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETCACHE_OFFSET))(this, instance);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETEXTENDEDTYPEDESCRIPTOR_OFFSET))(this, instance);
		}

		::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETREFLECTIONTYPE_OFFSET))(this, objectType, instance);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETTYPEDESCRIPTOR_OFFSET))(this, objectType, instance);
		}
	};
}
