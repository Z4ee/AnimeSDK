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

#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E27F200)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET UNITYSDK_OFFSET(0x1E27F320)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E27F4E0)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETEXTENDERPROVIDERS_OFFSET UNITYSDK_OFFSET(0x1E27F5C0)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETFULLCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1E27F400)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E27F6A0)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETRUNTIMETYPE_OFFSET UNITYSDK_OFFSET(0x1E27F790)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E27F870)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1E27F150)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_ISSUPPORTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1E27F960)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E27F140)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DelegatingTypeDescriptionProvider_TypeDefinitionIndex = 2861;

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

		::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::Il2CppArray<::System::Type*>* argTypes, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IServiceProvider*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_OFFSET))(this, provider, objectType, argTypes, args);
		}

		::System::Collections::IDictionary* GetCache(::System::Object* instance)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET))(this, instance);
		}

		::System::String* GetFullComponentName(::System::Object* component)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETFULLCOMPONENTNAME_OFFSET))(this, component);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET))(this, instance);
		}

		::Il2CppArray<::System::ComponentModel::IExtenderProvider*>* GetExtenderProviders(::System::Object* instance)
		{
			return ((::Il2CppArray<::System::ComponentModel::IExtenderProvider*>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETEXTENDERPROVIDERS_OFFSET))(this, instance);
		}

		::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET))(this, objectType, instance);
		}

		::System::Type* GetRuntimeType(::System::Type* objectType)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETRUNTIMETYPE_OFFSET))(this, objectType);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(this, objectType, instance);
		}

		::System::Boolean IsSupportedType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_ISSUPPORTEDTYPE_OFFSET))(this, type);
		}
	};
}
