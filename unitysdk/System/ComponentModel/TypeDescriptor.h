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

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDPROVIDER_OFFSET UNITYSDK_OFFSET(0x1AF378D0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CHECKDEFAULTPROVIDER_OFFSET UNITYSDK_OFFSET(0x1AF387D0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1AF35590)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_2_OFFSET UNITYSDK_OFFSET(0x1AF38E90)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AF35440)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCACHE_OFFSET UNITYSDK_OFFSET(0x1AF3D040)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1AF3DC40)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDESCRIPTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF39480)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AF38DF0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEXTENDEDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AF39680)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEXTENDERCOLLISIONSUFFIX_OFFSET UNITYSDK_OFFSET(0x1AF3DDF0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETNODEFORBASETYPE_OFFSET UNITYSDK_OFFSET(0x1AF3E120)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROVIDERRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1AF3E230)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AF2C460)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GET_COMOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1AF37840)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GET_INTERFACETYPE_OFFSET UNITYSDK_OFFSET(0x1AF37870)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GET_METADATAVERSION_OFFSET UNITYSDK_OFFSET(0x1AF378A0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_1_OFFSET UNITYSDK_OFFSET(0x1AF37B00)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_2_OFFSET UNITYSDK_OFFSET(0x1AF3DB80)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_3_OFFSET UNITYSDK_OFFSET(0x1AF3E260)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_OFFSET UNITYSDK_OFFSET(0x1AF3DD20)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEFILTER_OFFSET UNITYSDK_OFFSET(0x1AF3AFD0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AF3D110)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEMERGE_OFFSET UNITYSDK_OFFSET(0x1AF39780)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_RAISEREFRESH_OFFSET UNITYSDK_OFFSET(0x1AF3E3F0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REFRESH_OFFSET UNITYSDK_OFFSET(0x1AF38070)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_SORTDESCRIPTORARRAY_OFFSET UNITYSDK_OFFSET(0x1AF2D530)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF3E4A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_TypeDefinitionIndex = 2626;

	class TypeDescriptor : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet__providerTypeTable()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x234F0);
		}
		static ::System::Collections::Hashtable** StaticGet__defaultProviders()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x234F8);
		}
		static ::Il2CppArray<::System::Guid>** StaticGet__pipelineMergeKeys()
		{
			return (::Il2CppArray<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x23500);
		}
		static ::Il2CppArray<::System::Guid>** StaticGet__pipelineInitializeKeys()
		{
			return (::Il2CppArray<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x23508);
		}
		static ::System::Diagnostics::BooleanSwitch** StaticGet_TraceDescriptor()
		{
			return (::System::Diagnostics::BooleanSwitch**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x23510);
		}
		static ::Il2CppArray<::System::Guid>** StaticGet__pipelineAttributeFilterKeys()
		{
			return (::Il2CppArray<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x23518);
		}
		static ::System::Object** StaticGet__internalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x23520);
		}
		static ::Il2CppArray<::System::Guid>** StaticGet__pipelineFilterKeys()
		{
			return (::Il2CppArray<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x23528);
		}
		static ::System::ComponentModel::WeakHashtable** StaticGet__providerTable()
		{
			return (::System::ComponentModel::WeakHashtable**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x23530);
		}
		static ::System::ComponentModel::RefreshEventHandler** StaticGet_Refreshed()
		{
			return (::System::ComponentModel::RefreshEventHandler**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x23538);
		}
		static ::System::Int32* StaticGet__metadataVersion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x8F80);
		}
		static ::System::Int32* StaticGet__collisionIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x8F84);
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

		static ::System::Void AddProvider(::System::ComponentModel::TypeDescriptionProvider* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDPROVIDER_OFFSET))(a1, a2);
		}

		static ::System::Void CheckDefaultProvider(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CHECKDEFAULTPROVIDER_OFFSET))(a1);
		}

		static ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Type* a1)
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_OFFSET))(a1);
		}

		static ::System::ComponentModel::AttributeCollection* GetAttributes_1(::System::Object* a1)
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_1_OFFSET))(a1);
		}

		static ::System::ComponentModel::AttributeCollection* GetAttributes_2(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_2_OFFSET))(a1, a2);
		}

		static ::System::Collections::IDictionary* GetCache(::System::Object* a1)
		{
			return ((::System::Collections::IDictionary*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCACHE_OFFSET))(a1);
		}

		static ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* a1)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCONVERTER_OFFSET))(a1);
		}

		static ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDESCRIPTOR_OFFSET))(a1, a2);
		}

		static ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor_1(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDESCRIPTOR_1_OFFSET))(a1, a2);
		}

		static ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedDescriptor(::System::Object* a1)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEXTENDEDDESCRIPTOR_OFFSET))(a1);
		}

		static ::System::String* GetExtenderCollisionSuffix(::System::ComponentModel::MemberDescriptor* a1)
		{
			return ((::System::String*(*)(::System::ComponentModel::MemberDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEXTENDERCOLLISIONSUFFIX_OFFSET))(a1);
		}

		static ::System::Type* GetNodeForBaseType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETNODEFORBASETYPE_OFFSET))(a1);
		}

		static ::System::ComponentModel::TypeDescriptionProvider* GetProviderRecursive(::System::Type* a1)
		{
			return ((::System::ComponentModel::TypeDescriptionProvider*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROVIDERRECURSIVE_OFFSET))(a1);
		}

		static ::System::Type* GetReflectionType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETREFLECTIONTYPE_OFFSET))(a1);
		}

		static ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor(::System::Type* a1)
		{
			return ((::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_OFFSET))(a1);
		}

		static ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_1_OFFSET))(a1, a2);
		}

		static ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor_2(::System::Object* a1)
		{
			return ((::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_2_OFFSET))(a1);
		}

		static ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor_3(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_3_OFFSET))(a1, a2);
		}

		static ::System::Collections::ICollection* PipelineFilter(::System::Int32 a1, ::System::Collections::ICollection* a2, ::System::Object* a3, ::System::Collections::IDictionary* a4)
		{
			return ((::System::Collections::ICollection*(*)(::System::Int32, ::System::Collections::ICollection*, ::System::Object*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEFILTER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::ICollection* PipelineInitialize(::System::Int32 a1, ::System::Collections::ICollection* a2, ::System::Collections::IDictionary* a3)
		{
			return ((::System::Collections::ICollection*(*)(::System::Int32, ::System::Collections::ICollection*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEINITIALIZE_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::ICollection* PipelineMerge(::System::Int32 a1, ::System::Collections::ICollection* a2, ::System::Collections::ICollection* a3, ::System::Object* a4, ::System::Collections::IDictionary* a5)
		{
			return ((::System::Collections::ICollection*(*)(::System::Int32, ::System::Collections::ICollection*, ::System::Collections::ICollection*, ::System::Object*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEMERGE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void RaiseRefresh(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_RAISEREFRESH_OFFSET))(a1);
		}

		static ::System::Void Refresh(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REFRESH_OFFSET))(a1);
		}

		static ::System::Void SortDescriptorArray(::System::Collections::IList* a1)
		{
			return ((::System::Void(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_SORTDESCRIPTORARRAY_OFFSET))(a1);
		}
	};
}
