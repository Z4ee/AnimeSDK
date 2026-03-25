#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }
namespace System::ComponentModel { class MemberDescriptor; }
namespace System::ComponentModel { class RefreshEventHandler; }
namespace System::ComponentModel { class TypeConverter; }
namespace System::ComponentModel { class TypeDescriptionProvider; }
namespace System::ComponentModel { class TypeDescriptor_TypeDescriptionNode; }
namespace System::ComponentModel { class WeakHashtable; }
namespace System::Diagnostics { class BooleanSwitch; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDPROVIDER_OFFSET UNITYSDK_OFFSET(0x18695090)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CHECKDEFAULTPROVIDER_OFFSET UNITYSDK_OFFSET(0x18695F40)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x18692850)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_2_OFFSET UNITYSDK_OFFSET(0x18696640)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x186926F0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCACHE_OFFSET UNITYSDK_OFFSET(0x1869A660)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1869B280)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDESCRIPTOR_1_OFFSET UNITYSDK_OFFSET(0x18696BF0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x186965A0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEXTENDEDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18696DE0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEXTENDERCOLLISIONSUFFIX_OFFSET UNITYSDK_OFFSET(0x1869B430)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETNODEFORBASETYPE_OFFSET UNITYSDK_OFFSET(0x1869B750)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROVIDERRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1869B870)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x18688A50)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GET_COMOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x18695000)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GET_INTERFACETYPE_OFFSET UNITYSDK_OFFSET(0x18695030)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GET_METADATAVERSION_OFFSET UNITYSDK_OFFSET(0x18695060)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_1_OFFSET UNITYSDK_OFFSET(0x186952C0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_2_OFFSET UNITYSDK_OFFSET(0x1869B1C0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_3_OFFSET UNITYSDK_OFFSET(0x1869B8A0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_OFFSET UNITYSDK_OFFSET(0x1869B360)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEFILTER_OFFSET UNITYSDK_OFFSET(0x18698720)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1869A730)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEMERGE_OFFSET UNITYSDK_OFFSET(0x18696EE0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_RAISEREFRESH_OFFSET UNITYSDK_OFFSET(0x1869BA30)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REFRESH_OFFSET UNITYSDK_OFFSET(0x18695830)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_SORTDESCRIPTORARRAY_OFFSET UNITYSDK_OFFSET(0x18689B70)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1869BAE0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_TypeDefinitionIndex = 2625;

	class TypeDescriptor : public ::System::Object
	{
	public:
		static ::System::Diagnostics::BooleanSwitch** StaticGet_TraceDescriptor()
		{
			return (::System::Diagnostics::BooleanSwitch**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x111A0);
		}
		static ::System::Collections::Hashtable** StaticGet__providerTypeTable()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x111A8);
		}
		static ::System::ComponentModel::RefreshEventHandler** StaticGet_Refreshed()
		{
			return (::System::ComponentModel::RefreshEventHandler**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x111B0);
		}
		static ::Il2CppArray<::System::Guid>** StaticGet__pipelineMergeKeys()
		{
			return (::Il2CppArray<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x111B8);
		}
		static ::System::Collections::Hashtable** StaticGet__defaultProviders()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x111C0);
		}
		static ::Il2CppArray<::System::Guid>** StaticGet__pipelineFilterKeys()
		{
			return (::Il2CppArray<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x111C8);
		}
		static ::System::Object** StaticGet__internalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x111D0);
		}
		static ::System::ComponentModel::WeakHashtable** StaticGet__providerTable()
		{
			return (::System::ComponentModel::WeakHashtable**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x111D8);
		}
		static ::Il2CppArray<::System::Guid>** StaticGet__pipelineInitializeKeys()
		{
			return (::Il2CppArray<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x111E0);
		}
		static ::Il2CppArray<::System::Guid>** StaticGet__pipelineAttributeFilterKeys()
		{
			return (::Il2CppArray<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x111E8);
		}
		static ::System::Int32* StaticGet__metadataVersion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x5360);
		}
		static ::System::Int32* StaticGet__collisionIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x5364);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR__CCTOR_OFFSET))();
		}

		static ::System::Type* get_ComObjectType()
		{
			return ((::System::Type*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GET_COMOBJECTTYPE_OFFSET))();
		}

		static ::System::Type* get_InterfaceType()
		{
			return ((::System::Type*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GET_INTERFACETYPE_OFFSET))();
		}

		static ::System::Int32 get_MetadataVersion()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GET_METADATAVERSION_OFFSET))();
		}

		static ::System::Void AddProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDPROVIDER_OFFSET))(provider, type);
		}

		static ::System::Void CheckDefaultProvider(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CHECKDEFAULTPROVIDER_OFFSET))(type);
		}

		static ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Type* componentType)
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_OFFSET))(componentType);
		}

		static ::System::ComponentModel::AttributeCollection* GetAttributes_1(::System::Object* component)
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_1_OFFSET))(component);
		}

		static ::System::ComponentModel::AttributeCollection* GetAttributes_2(::System::Object* component, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_2_OFFSET))(component, noCustomTypeDesc);
		}

		static ::System::Collections::IDictionary* GetCache(::System::Object* instance)
		{
			return ((::System::Collections::IDictionary*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCACHE_OFFSET))(instance);
		}

		static ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCONVERTER_OFFSET))(type);
		}

		static ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(::System::Type* type, ::System::String* typeName)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDESCRIPTOR_OFFSET))(type, typeName);
		}

		static ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor_1(::System::Object* component, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDESCRIPTOR_1_OFFSET))(component, noCustomTypeDesc);
		}

		static ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedDescriptor(::System::Object* component)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEXTENDEDDESCRIPTOR_OFFSET))(component);
		}

		static ::System::String* GetExtenderCollisionSuffix(::System::ComponentModel::MemberDescriptor* member)
		{
			return ((::System::String*(*)(::System::ComponentModel::MemberDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEXTENDERCOLLISIONSUFFIX_OFFSET))(member);
		}

		static ::System::Type* GetNodeForBaseType(::System::Type* searchType)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETNODEFORBASETYPE_OFFSET))(searchType);
		}

		static ::System::ComponentModel::TypeDescriptionProvider* GetProviderRecursive(::System::Type* type)
		{
			return ((::System::ComponentModel::TypeDescriptionProvider*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROVIDERRECURSIVE_OFFSET))(type);
		}

		static ::System::Type* GetReflectionType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETREFLECTIONTYPE_OFFSET))(type);
		}

		static ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor(::System::Type* type)
		{
			return ((::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_OFFSET))(type);
		}

		static ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor_1(::System::Type* type, ::System::Boolean createDelegator)
		{
			return ((::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_1_OFFSET))(type, createDelegator);
		}

		static ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor_2(::System::Object* instance)
		{
			return ((::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_2_OFFSET))(instance);
		}

		static ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor_3(::System::Object* instance, ::System::Boolean createDelegator)
		{
			return ((::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_3_OFFSET))(instance, createDelegator);
		}

		static ::System::Collections::ICollection* PipelineFilter(::System::Int32 pipelineType, ::System::Collections::ICollection* members, ::System::Object* instance, ::System::Collections::IDictionary* cache)
		{
			return ((::System::Collections::ICollection*(*)(::System::Int32, ::System::Collections::ICollection*, ::System::Object*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEFILTER_OFFSET))(pipelineType, members, instance, cache);
		}

		static ::System::Collections::ICollection* PipelineInitialize(::System::Int32 pipelineType, ::System::Collections::ICollection* members, ::System::Collections::IDictionary* cache)
		{
			return ((::System::Collections::ICollection*(*)(::System::Int32, ::System::Collections::ICollection*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEINITIALIZE_OFFSET))(pipelineType, members, cache);
		}

		static ::System::Collections::ICollection* PipelineMerge(::System::Int32 pipelineType, ::System::Collections::ICollection* primary, ::System::Collections::ICollection* secondary, ::System::Object* instance, ::System::Collections::IDictionary* cache)
		{
			return ((::System::Collections::ICollection*(*)(::System::Int32, ::System::Collections::ICollection*, ::System::Collections::ICollection*, ::System::Object*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEMERGE_OFFSET))(pipelineType, primary, secondary, instance, cache);
		}

		static ::System::Void RaiseRefresh(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_RAISEREFRESH_OFFSET))(type);
		}

		static ::System::Void Refresh(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REFRESH_OFFSET))(type);
		}

		static ::System::Void SortDescriptorArray(::System::Collections::IList* infos)
		{
			return ((::System::Void(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_SORTDESCRIPTORARRAY_OFFSET))(infos);
		}
	};
}
