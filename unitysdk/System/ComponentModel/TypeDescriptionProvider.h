#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IServiceProvider; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }
namespace System::ComponentModel { class IExtenderProvider; }
namespace System::ComponentModel { class TypeDescriptionProvider_EmptyCustomTypeDescriptor; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B74FE50)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET UNITYSDK_OFFSET(0x1B74FF20)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B74FF40)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETEXTENDERPROVIDERS_OFFSET UNITYSDK_OFFSET(0x1B74FFC0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETFULLCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1B750060)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_1_OFFSET UNITYSDK_OFFSET(0x1B750290)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_2_OFFSET UNITYSDK_OFFSET(0x1B750320)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B750270)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETRUNTIMETYPE_OFFSET UNITYSDK_OFFSET(0x1B750340)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_1_OFFSET UNITYSDK_OFFSET(0x1B7501E0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_2_OFFSET UNITYSDK_OFFSET(0x1B7504E0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B7504C0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_ISSUPPORTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1B750560)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B74FE40)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B746D10)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptionProvider_TypeDefinitionIndex = 2991;

	class TypeDescriptionProvider : public ::System::Object
	{
	public:
		::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor* _emptyDescriptor; // 0x10
		::System::ComponentModel::TypeDescriptionProvider* _parent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::ComponentModel::TypeDescriptionProvider* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::TypeDescriptionProvider*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER__CTOR_1_OFFSET))(this, parent);
		}

		::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::Il2CppArray<::System::Type*>* argTypes, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IServiceProvider*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_OFFSET))(this, provider, objectType, argTypes, args);
		}

		::System::Collections::IDictionary* GetCache(::System::Object* instance)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET))(this, instance);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET))(this, instance);
		}

		::Il2CppArray<::System::ComponentModel::IExtenderProvider*>* GetExtenderProviders(::System::Object* instance)
		{
			return ((::Il2CppArray<::System::ComponentModel::IExtenderProvider*>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETEXTENDERPROVIDERS_OFFSET))(this, instance);
		}

		::System::String* GetFullComponentName(::System::Object* component)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETFULLCOMPONENTNAME_OFFSET))(this, component);
		}

		::System::Type* GetReflectionType(::System::Type* objectType)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET))(this, objectType);
		}

		::System::Type* GetReflectionType_1(::System::Object* instance)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_1_OFFSET))(this, instance);
		}

		::System::Type* GetReflectionType_2(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_2_OFFSET))(this, objectType, instance);
		}

		::System::Type* GetRuntimeType(::System::Type* reflectionType)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETRUNTIMETYPE_OFFSET))(this, reflectionType);
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

		::System::Boolean IsSupportedType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_ISSUPPORTEDTYPE_OFFSET))(this, type);
		}
	};
}
