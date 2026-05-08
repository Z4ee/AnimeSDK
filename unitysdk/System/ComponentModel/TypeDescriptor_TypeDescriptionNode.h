#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeDescriptionProvider.h"

namespace System { class IServiceProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }
namespace System::ComponentModel { class IExtenderProvider; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A56FDE0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETCACHE_OFFSET UNITYSDK_OFFSET(0x1A56FF40)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETEXTENDEDTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A56FFD0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETEXTENDERPROVIDERS_OFFSET UNITYSDK_OFFSET(0x1A570060)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETFULLCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1A5700F0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A570180)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETRUNTIMETYPE_OFFSET UNITYSDK_OFFSET(0x1A570210)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A5702A0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_ISSUPPORTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1A570380)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A56FDD0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_TypeDescriptionNode_TypeDefinitionIndex = 3005;

	class TypeDescriptor_TypeDescriptionNode : public ::System::ComponentModel::TypeDescriptionProvider
	{
	public:
		::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* Next; // 0x20
		::System::ComponentModel::TypeDescriptionProvider* Provider; // 0x28

		::System::Void _ctor(::System::ComponentModel::TypeDescriptionProvider* provider)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::TypeDescriptionProvider*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE__CTOR_OFFSET))(this, provider);
		}

		::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::Il2CppArray<::System::Type*>* argTypes, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IServiceProvider*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_CREATEINSTANCE_OFFSET))(this, provider, objectType, argTypes, args);
		}

		::System::Collections::IDictionary* GetCache(::System::Object* instance)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETCACHE_OFFSET))(this, instance);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETEXTENDEDTYPEDESCRIPTOR_OFFSET))(this, instance);
		}

		::Il2CppArray<::System::ComponentModel::IExtenderProvider*>* GetExtenderProviders(::System::Object* instance)
		{
			return ((::Il2CppArray<::System::ComponentModel::IExtenderProvider*>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETEXTENDERPROVIDERS_OFFSET))(this, instance);
		}

		::System::String* GetFullComponentName(::System::Object* component)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETFULLCOMPONENTNAME_OFFSET))(this, component);
		}

		::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETREFLECTIONTYPE_OFFSET))(this, objectType, instance);
		}

		::System::Type* GetRuntimeType(::System::Type* objectType)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETRUNTIMETYPE_OFFSET))(this, objectType);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_GETTYPEDESCRIPTOR_OFFSET))(this, objectType, instance);
		}

		::System::Boolean IsSupportedType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_ISSUPPORTEDTYPE_OFFSET))(this, type);
		}
	};
}
