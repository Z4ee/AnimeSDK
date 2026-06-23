#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System { class IServiceProvider; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class EventDescriptor; }
namespace System::ComponentModel { class EventDescriptorCollection; }
namespace System::ComponentModel { class IComNativeDescriptorHandler; }
namespace System::ComponentModel { class IComponent; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }
namespace System::ComponentModel { class MemberDescriptor; }
namespace System::ComponentModel { class PropertyDescriptor; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::ComponentModel { class RefreshEventHandler; }
namespace System::ComponentModel { class TypeConverter; }
namespace System::ComponentModel { class TypeDescriptionProvider; }
namespace System::ComponentModel { class TypeDescriptor_TypeDescriptionNode; }
namespace System::ComponentModel { class WeakHashtable; }
namespace System::ComponentModel::Design { class IDesigner; }
namespace System::Diagnostics { class BooleanSwitch; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class Module; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1B3F0020)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B3EFEB0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDEDITORTABLE_OFFSET UNITYSDK_OFFSET(0x1B3F0530)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDPROVIDERTRANSPARENT_1_OFFSET UNITYSDK_OFFSET(0x1B3F2080)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDPROVIDERTRANSPARENT_OFFSET UNITYSDK_OFFSET(0x1B3F1FC0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDPROVIDER_1_OFFSET UNITYSDK_OFFSET(0x1B3F0200)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDPROVIDER_OFFSET UNITYSDK_OFFSET(0x1B3EFA30)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADD_REFRESHED_OFFSET UNITYSDK_OFFSET(0x1B3EFCF0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CHECKDEFAULTPROVIDER_OFFSET UNITYSDK_OFFSET(0x1B3F2140)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CREATEASSOCIATION_OFFSET UNITYSDK_OFFSET(0x1B3F2860)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CREATEDESIGNER_OFFSET UNITYSDK_OFFSET(0x1B3F32A0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CREATEEVENT_1_OFFSET UNITYSDK_OFFSET(0x1B3F38C0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CREATEEVENT_OFFSET UNITYSDK_OFFSET(0x1B3F3850)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B3F3990)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CREATEPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x1B3F3CA0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B3F3C30)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_1_OFFSET UNITYSDK_OFFSET(0x1B3F3DF0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_2_OFFSET UNITYSDK_OFFSET(0x1B3F3E00)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_3_OFFSET UNITYSDK_OFFSET(0x1B3F3E10)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_4_OFFSET UNITYSDK_OFFSET(0x1B3F3E20)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_5_OFFSET UNITYSDK_OFFSET(0x1B3F3E30)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_6_OFFSET UNITYSDK_OFFSET(0x1B3F3E40)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_7_OFFSET UNITYSDK_OFFSET(0x1B3F3E50)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_8_OFFSET UNITYSDK_OFFSET(0x1B3F3E60)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_9_OFFSET UNITYSDK_OFFSET(0x1B3F3E70)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B3F3DE0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_FILTERMEMBERS_OFFSET UNITYSDK_OFFSET(0x1B3F3E80)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETASSOCIATION_OFFSET UNITYSDK_OFFSET(0x1B3EB630)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1B3F37F0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_2_OFFSET UNITYSDK_OFFSET(0x1B3F45F0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B3F43D0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCACHE_OFFSET UNITYSDK_OFFSET(0x1B3F85E0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCLASSNAME_1_OFFSET UNITYSDK_OFFSET(0x1B3F92B0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCLASSNAME_2_OFFSET UNITYSDK_OFFSET(0x1B3F93C0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1B3F9250)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCOMPONENTNAME_1_OFFSET UNITYSDK_OFFSET(0x1B3F9530)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1B3F94D0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCONVERTER_1_OFFSET UNITYSDK_OFFSET(0x1B3F96A0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCONVERTER_2_OFFSET UNITYSDK_OFFSET(0x1B3F97B0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1B3F9640)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDEFAULTEVENT_1_OFFSET UNITYSDK_OFFSET(0x1B3F99D0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDEFAULTEVENT_2_OFFSET UNITYSDK_OFFSET(0x1B3F9A30)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x1B3F98C0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDEFAULTPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x1B3F9C50)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDEFAULTPROPERTY_2_OFFSET UNITYSDK_OFFSET(0x1B3F9CB0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B3F9B40)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDESCRIPTOR_1_OFFSET UNITYSDK_OFFSET(0x1B3F4AE0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B3F44F0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEDITOR_1_OFFSET UNITYSDK_OFFSET(0x1B3F9E30)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEDITOR_2_OFFSET UNITYSDK_OFFSET(0x1B3F9F70)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEDITOR_OFFSET UNITYSDK_OFFSET(0x1B3F9DC0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEVENTS_1_OFFSET UNITYSDK_OFFSET(0x1B3FA220)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEVENTS_2_OFFSET UNITYSDK_OFFSET(0x1B3FA4A0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEVENTS_3_OFFSET UNITYSDK_OFFSET(0x1B3FAB90)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEVENTS_4_OFFSET UNITYSDK_OFFSET(0x1B3FABF0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEVENTS_5_OFFSET UNITYSDK_OFFSET(0x1B3FA500)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x1B3FA0C0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEXTENDEDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B3F4D10)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEXTENDERCOLLISIONSUFFIX_OFFSET UNITYSDK_OFFSET(0x1B3FB4D0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETFULLCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1B3FB7E0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETNODEFORBASETYPE_OFFSET UNITYSDK_OFFSET(0x1B3FB8F0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROPERTIESIMPL_OFFSET UNITYSDK_OFFSET(0x1B3FBF50)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROPERTIES_1_OFFSET UNITYSDK_OFFSET(0x1B3FBBB0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROPERTIES_2_OFFSET UNITYSDK_OFFSET(0x1B3FBE30)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROPERTIES_3_OFFSET UNITYSDK_OFFSET(0x1B3FBEE0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROPERTIES_4_OFFSET UNITYSDK_OFFSET(0x1B3E9250)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROPERTIES_5_OFFSET UNITYSDK_OFFSET(0x1B3FC860)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B3FBA50)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROVIDERRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1B3FC8D0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROVIDER_1_OFFSET UNITYSDK_OFFSET(0x1B3F0180)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x1B3EFFA0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETREFLECTIONTYPE_1_OFFSET UNITYSDK_OFFSET(0x1B3FCA30)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B3FC930)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GET_COMNATIVEDESCRIPTORHANDLER_OFFSET UNITYSDK_OFFSET(0x1B3EF6F0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GET_COMOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1B3EF810)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GET_INTERFACETYPE_OFFSET UNITYSDK_OFFSET(0x1B3EFC60)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GET_METADATAVERSION_OFFSET UNITYSDK_OFFSET(0x1B3EFC90)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_1_OFFSET UNITYSDK_OFFSET(0x1B3F0590)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_2_OFFSET UNITYSDK_OFFSET(0x1B3F91F0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_3_OFFSET UNITYSDK_OFFSET(0x1B3F1280)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEFOR_OFFSET UNITYSDK_OFFSET(0x1B3EF840)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEREMOVE_OFFSET UNITYSDK_OFFSET(0x1B3FCB80)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEATTRIBUTEFILTER_OFFSET UNITYSDK_OFFSET(0x1B3FAC60)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEFILTER_OFFSET UNITYSDK_OFFSET(0x1B3F6600)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B3F8740)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEMERGE_OFFSET UNITYSDK_OFFSET(0x1B3F4E50)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_RAISEREFRESH_1_OFFSET UNITYSDK_OFFSET(0x1B3FD030)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_RAISEREFRESH_OFFSET UNITYSDK_OFFSET(0x1B3FCF10)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REFRESH_1_OFFSET UNITYSDK_OFFSET(0x1B3F1470)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REFRESH_2_OFFSET UNITYSDK_OFFSET(0x1B3F0B00)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REFRESH_3_OFFSET UNITYSDK_OFFSET(0x1B3FD170)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REFRESH_4_OFFSET UNITYSDK_OFFSET(0x1B3FDFC0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B3FD110)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REMOVEASSOCIATIONS_OFFSET UNITYSDK_OFFSET(0x1B3FE460)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REMOVEASSOCIATION_OFFSET UNITYSDK_OFFSET(0x1B3FE090)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REMOVEPROVIDERTRANSPARENT_1_OFFSET UNITYSDK_OFFSET(0x1B3FE940)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REMOVEPROVIDERTRANSPARENT_OFFSET UNITYSDK_OFFSET(0x1B3FE880)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REMOVEPROVIDER_1_OFFSET UNITYSDK_OFFSET(0x1B3FE6C0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REMOVEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1B3FE510)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REMOVE_REFRESHED_OFFSET UNITYSDK_OFFSET(0x1B3EFDD0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_SET_COMNATIVEDESCRIPTORHANDLER_OFFSET UNITYSDK_OFFSET(0x1B3EF8A0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_SHOULDHIDEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B3F4350)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_SORTDESCRIPTORARRAY_OFFSET UNITYSDK_OFFSET(0x1B3EE280)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TRACE_OFFSET UNITYSDK_OFFSET(0x1B3FEA00)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3FEA10)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3EF6E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_TypeDefinitionIndex = 2994;

	class TypeDescriptor : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet__defaultProviders()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x3710);
		}
		static ::System::ComponentModel::WeakHashtable** StaticGet__providerTable()
		{
			return (::System::ComponentModel::WeakHashtable**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x3718);
		}
		static ::System::ComponentModel::RefreshEventHandler** StaticGet_Refreshed()
		{
			return (::System::ComponentModel::RefreshEventHandler**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x3720);
		}
		static ::System::Object** StaticGet__internalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x3728);
		}
		static ::Il2CppArray<::System::Guid>** StaticGet__pipelineFilterKeys()
		{
			return (::Il2CppArray<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x3730);
		}
		static ::System::Collections::Hashtable** StaticGet__providerTypeTable()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x3738);
		}
		static ::Il2CppArray<::System::Guid>** StaticGet__pipelineAttributeFilterKeys()
		{
			return (::Il2CppArray<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x3740);
		}
		static ::Il2CppArray<::System::Guid>** StaticGet__pipelineMergeKeys()
		{
			return (::Il2CppArray<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x3748);
		}
		static ::Il2CppArray<::System::Guid>** StaticGet__pipelineInitializeKeys()
		{
			return (::Il2CppArray<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x3750);
		}
		static ::System::ComponentModel::WeakHashtable** StaticGet__associationTable()
		{
			return (::System::ComponentModel::WeakHashtable**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x3758);
		}
		static ::System::Diagnostics::BooleanSwitch** StaticGet_TraceDescriptor()
		{
			return (::System::Diagnostics::BooleanSwitch**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x3760);
		}
		static ::System::Int32* StaticGet__collisionIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x13F0);
		}
		static ::System::Int32* StaticGet__metadataVersion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_TypeDefinitionIndex)->GetStaticField(0x13F4);
		}
		// static const ::System::Int32 PIPELINE_ATTRIBUTES = 0x0; // 0x0
		// static const ::System::Int32 PIPELINE_PROPERTIES = 0x1; // 0x0
		// static const ::System::Int32 PIPELINE_EVENTS = 0x2; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR__CCTOR_OFFSET))();
		}

		static ::System::ComponentModel::IComNativeDescriptorHandler* get_ComNativeDescriptorHandler()
		{
			return ((::System::ComponentModel::IComNativeDescriptorHandler*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GET_COMNATIVEDESCRIPTORHANDLER_OFFSET))();
		}

		static ::System::Void set_ComNativeDescriptorHandler(::System::ComponentModel::IComNativeDescriptorHandler* value)
		{
			return ((::System::Void(*)(::System::ComponentModel::IComNativeDescriptorHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_SET_COMNATIVEDESCRIPTORHANDLER_OFFSET))(value);
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

		static ::System::Void add_Refreshed(::System::ComponentModel::RefreshEventHandler* value)
		{
			return ((::System::Void(*)(::System::ComponentModel::RefreshEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADD_REFRESHED_OFFSET))(value);
		}

		static ::System::Void remove_Refreshed(::System::ComponentModel::RefreshEventHandler* value)
		{
			return ((::System::Void(*)(::System::ComponentModel::RefreshEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REMOVE_REFRESHED_OFFSET))(value);
		}

		static ::System::ComponentModel::TypeDescriptionProvider* AddAttributes(::System::Type* type, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::TypeDescriptionProvider*(*)(::System::Type*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDATTRIBUTES_OFFSET))(type, attributes);
		}

		static ::System::ComponentModel::TypeDescriptionProvider* AddAttributes_1(::System::Object* instance, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::TypeDescriptionProvider*(*)(::System::Object*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDATTRIBUTES_1_OFFSET))(instance, attributes);
		}

		static ::System::Void AddEditorTable(::System::Type* editorBaseType, ::System::Collections::Hashtable* table)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDEDITORTABLE_OFFSET))(editorBaseType, table);
		}

		static ::System::Void AddProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDPROVIDER_OFFSET))(provider, type);
		}

		static ::System::Void AddProvider_1(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Object* instance)
		{
			return ((::System::Void(*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDPROVIDER_1_OFFSET))(provider, instance);
		}

		static ::System::Void AddProviderTransparent(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDPROVIDERTRANSPARENT_OFFSET))(provider, type);
		}

		static ::System::Void AddProviderTransparent_1(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Object* instance)
		{
			return ((::System::Void(*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ADDPROVIDERTRANSPARENT_1_OFFSET))(provider, instance);
		}

		static ::System::Void CheckDefaultProvider(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CHECKDEFAULTPROVIDER_OFFSET))(type);
		}

		static ::System::Void CreateAssociation(::System::Object* primary, ::System::Object* secondary)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CREATEASSOCIATION_OFFSET))(primary, secondary);
		}

		static ::System::ComponentModel::Design::IDesigner* CreateDesigner(::System::ComponentModel::IComponent* component, ::System::Type* designerBaseType)
		{
			return ((::System::ComponentModel::Design::IDesigner*(*)(::System::ComponentModel::IComponent*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CREATEDESIGNER_OFFSET))(component, designerBaseType);
		}

		static ::System::ComponentModel::EventDescriptor* CreateEvent(::System::Type* componentType, ::System::String* name, ::System::Type* type, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::System::Type*, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CREATEEVENT_OFFSET))(componentType, name, type, attributes);
		}

		static ::System::ComponentModel::EventDescriptor* CreateEvent_1(::System::Type* componentType, ::System::ComponentModel::EventDescriptor* oldEventDescriptor, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::System::Type*, ::System::ComponentModel::EventDescriptor*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CREATEEVENT_1_OFFSET))(componentType, oldEventDescriptor, attributes);
		}

		static ::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::Il2CppArray<::System::Type*>* argTypes, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::System::IServiceProvider*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CREATEINSTANCE_OFFSET))(provider, objectType, argTypes, args);
		}

		static ::System::ComponentModel::PropertyDescriptor* CreateProperty(::System::Type* componentType, ::System::String* name, ::System::Type* type, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::System::Type*, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CREATEPROPERTY_OFFSET))(componentType, name, type, attributes);
		}

		static ::System::ComponentModel::PropertyDescriptor* CreateProperty_1(::System::Type* componentType, ::System::ComponentModel::PropertyDescriptor* oldPropertyDescriptor, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::System::Type*, ::System::ComponentModel::PropertyDescriptor*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_CREATEPROPERTY_1_OFFSET))(componentType, oldPropertyDescriptor, attributes);
		}

		static ::System::Void DebugValidate(::System::Type* type, ::System::ComponentModel::AttributeCollection* attributes, ::System::ComponentModel::AttributeCollection* debugAttributes)
		{
			return ((::System::Void(*)(::System::Type*, ::System::ComponentModel::AttributeCollection*, ::System::ComponentModel::AttributeCollection*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_OFFSET))(type, attributes, debugAttributes);
		}

		static ::System::Void DebugValidate_1(::System::ComponentModel::AttributeCollection* attributes, ::System::ComponentModel::AttributeCollection* debugAttributes)
		{
			return ((::System::Void(*)(::System::ComponentModel::AttributeCollection*, ::System::ComponentModel::AttributeCollection*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_1_OFFSET))(attributes, debugAttributes);
		}

		static ::System::Void DebugValidate_2(::System::ComponentModel::AttributeCollection* attributes, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::ComponentModel::AttributeCollection*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_2_OFFSET))(attributes, type);
		}

		static ::System::Void DebugValidate_3(::System::ComponentModel::AttributeCollection* attributes, ::System::Object* instance, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::Void(*)(::System::ComponentModel::AttributeCollection*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_3_OFFSET))(attributes, instance, noCustomTypeDesc);
		}

		static ::System::Void DebugValidate_4(::System::ComponentModel::TypeConverter* converter, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::ComponentModel::TypeConverter*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_4_OFFSET))(converter, type);
		}

		static ::System::Void DebugValidate_5(::System::ComponentModel::TypeConverter* converter, ::System::Object* instance, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::Void(*)(::System::ComponentModel::TypeConverter*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_5_OFFSET))(converter, instance, noCustomTypeDesc);
		}

		static ::System::Void DebugValidate_6(::System::ComponentModel::EventDescriptorCollection* events, ::System::Type* type, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::System::ComponentModel::EventDescriptorCollection*, ::System::Type*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_6_OFFSET))(events, type, attributes);
		}

		static ::System::Void DebugValidate_7(::System::ComponentModel::EventDescriptorCollection* events, ::System::Object* instance, ::Il2CppArray<::System::Attribute*>* attributes, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::Void(*)(::System::ComponentModel::EventDescriptorCollection*, ::System::Object*, ::Il2CppArray<::System::Attribute*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_7_OFFSET))(events, instance, attributes, noCustomTypeDesc);
		}

		static ::System::Void DebugValidate_8(::System::ComponentModel::PropertyDescriptorCollection* properties, ::System::Type* type, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::System::ComponentModel::PropertyDescriptorCollection*, ::System::Type*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_8_OFFSET))(properties, type, attributes);
		}

		static ::System::Void DebugValidate_9(::System::ComponentModel::PropertyDescriptorCollection* properties, ::System::Object* instance, ::Il2CppArray<::System::Attribute*>* attributes, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::Void(*)(::System::ComponentModel::PropertyDescriptorCollection*, ::System::Object*, ::Il2CppArray<::System::Attribute*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_DEBUGVALIDATE_9_OFFSET))(properties, instance, attributes, noCustomTypeDesc);
		}

		static ::System::Collections::ArrayList* FilterMembers(::System::Collections::IList* members, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Collections::ArrayList*(*)(::System::Collections::IList*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_FILTERMEMBERS_OFFSET))(members, attributes);
		}

		static ::System::Object* GetAssociation(::System::Type* type, ::System::Object* primary)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETASSOCIATION_OFFSET))(type, primary);
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

		static ::System::String* GetClassName(::System::Object* component)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCLASSNAME_OFFSET))(component);
		}

		static ::System::String* GetClassName_1(::System::Object* component, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCLASSNAME_1_OFFSET))(component, noCustomTypeDesc);
		}

		static ::System::String* GetClassName_2(::System::Type* componentType)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCLASSNAME_2_OFFSET))(componentType);
		}

		static ::System::String* GetComponentName(::System::Object* component)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCOMPONENTNAME_OFFSET))(component);
		}

		static ::System::String* GetComponentName_1(::System::Object* component, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCOMPONENTNAME_1_OFFSET))(component, noCustomTypeDesc);
		}

		static ::System::ComponentModel::TypeConverter* GetConverter(::System::Object* component)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCONVERTER_OFFSET))(component);
		}

		static ::System::ComponentModel::TypeConverter* GetConverter_1(::System::Object* component, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCONVERTER_1_OFFSET))(component, noCustomTypeDesc);
		}

		static ::System::ComponentModel::TypeConverter* GetConverter_2(::System::Type* type)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETCONVERTER_2_OFFSET))(type);
		}

		static ::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Type* componentType)
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDEFAULTEVENT_OFFSET))(componentType);
		}

		static ::System::ComponentModel::EventDescriptor* GetDefaultEvent_1(::System::Object* component)
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDEFAULTEVENT_1_OFFSET))(component);
		}

		static ::System::ComponentModel::EventDescriptor* GetDefaultEvent_2(::System::Object* component, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDEFAULTEVENT_2_OFFSET))(component, noCustomTypeDesc);
		}

		static ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Type* componentType)
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDEFAULTPROPERTY_OFFSET))(componentType);
		}

		static ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty_1(::System::Object* component)
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDEFAULTPROPERTY_1_OFFSET))(component);
		}

		static ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty_2(::System::Object* component, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETDEFAULTPROPERTY_2_OFFSET))(component, noCustomTypeDesc);
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

		static ::System::Object* GetEditor(::System::Object* component, ::System::Type* editorBaseType)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEDITOR_OFFSET))(component, editorBaseType);
		}

		static ::System::Object* GetEditor_1(::System::Object* component, ::System::Type* editorBaseType, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEDITOR_1_OFFSET))(component, editorBaseType, noCustomTypeDesc);
		}

		static ::System::Object* GetEditor_2(::System::Type* type, ::System::Type* editorBaseType)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEDITOR_2_OFFSET))(type, editorBaseType);
		}

		static ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Type* componentType)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEVENTS_OFFSET))(componentType);
		}

		static ::System::ComponentModel::EventDescriptorCollection* GetEvents_1(::System::Type* componentType, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::System::Type*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEVENTS_1_OFFSET))(componentType, attributes);
		}

		static ::System::ComponentModel::EventDescriptorCollection* GetEvents_2(::System::Object* component)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEVENTS_2_OFFSET))(component);
		}

		static ::System::ComponentModel::EventDescriptorCollection* GetEvents_3(::System::Object* component, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEVENTS_3_OFFSET))(component, noCustomTypeDesc);
		}

		static ::System::ComponentModel::EventDescriptorCollection* GetEvents_4(::System::Object* component, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::System::Object*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEVENTS_4_OFFSET))(component, attributes);
		}

		static ::System::ComponentModel::EventDescriptorCollection* GetEvents_5(::System::Object* component, ::Il2CppArray<::System::Attribute*>* attributes, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::System::Object*, ::Il2CppArray<::System::Attribute*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEVENTS_5_OFFSET))(component, attributes, noCustomTypeDesc);
		}

		static ::System::String* GetExtenderCollisionSuffix(::System::ComponentModel::MemberDescriptor* member)
		{
			return ((::System::String*(*)(::System::ComponentModel::MemberDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETEXTENDERCOLLISIONSUFFIX_OFFSET))(member);
		}

		static ::System::String* GetFullComponentName(::System::Object* component)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETFULLCOMPONENTNAME_OFFSET))(component);
		}

		static ::System::Type* GetNodeForBaseType(::System::Type* searchType)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETNODEFORBASETYPE_OFFSET))(searchType);
		}

		static ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Type* componentType)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROPERTIES_OFFSET))(componentType);
		}

		static ::System::ComponentModel::PropertyDescriptorCollection* GetProperties_1(::System::Type* componentType, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::Type*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROPERTIES_1_OFFSET))(componentType, attributes);
		}

		static ::System::ComponentModel::PropertyDescriptorCollection* GetProperties_2(::System::Object* component)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROPERTIES_2_OFFSET))(component);
		}

		static ::System::ComponentModel::PropertyDescriptorCollection* GetProperties_3(::System::Object* component, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROPERTIES_3_OFFSET))(component, noCustomTypeDesc);
		}

		static ::System::ComponentModel::PropertyDescriptorCollection* GetProperties_4(::System::Object* component, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::Object*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROPERTIES_4_OFFSET))(component, attributes);
		}

		static ::System::ComponentModel::PropertyDescriptorCollection* GetProperties_5(::System::Object* component, ::Il2CppArray<::System::Attribute*>* attributes, ::System::Boolean noCustomTypeDesc)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::Object*, ::Il2CppArray<::System::Attribute*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROPERTIES_5_OFFSET))(component, attributes, noCustomTypeDesc);
		}

		static ::System::ComponentModel::PropertyDescriptorCollection* GetPropertiesImpl(::System::Object* component, ::Il2CppArray<::System::Attribute*>* attributes, ::System::Boolean noCustomTypeDesc, ::System::Boolean noAttributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::Object*, ::Il2CppArray<::System::Attribute*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROPERTIESIMPL_OFFSET))(component, attributes, noCustomTypeDesc, noAttributes);
		}

		static ::System::ComponentModel::TypeDescriptionProvider* GetProvider(::System::Type* type)
		{
			return ((::System::ComponentModel::TypeDescriptionProvider*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROVIDER_OFFSET))(type);
		}

		static ::System::ComponentModel::TypeDescriptionProvider* GetProvider_1(::System::Object* instance)
		{
			return ((::System::ComponentModel::TypeDescriptionProvider*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROVIDER_1_OFFSET))(instance);
		}

		static ::System::ComponentModel::TypeDescriptionProvider* GetProviderRecursive(::System::Type* type)
		{
			return ((::System::ComponentModel::TypeDescriptionProvider*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETPROVIDERRECURSIVE_OFFSET))(type);
		}

		static ::System::Type* GetReflectionType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETREFLECTIONTYPE_OFFSET))(type);
		}

		static ::System::Type* GetReflectionType_1(::System::Object* instance)
		{
			return ((::System::Type*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_GETREFLECTIONTYPE_1_OFFSET))(instance);
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

		static ::System::Void NodeRemove(::System::Object* key, ::System::ComponentModel::TypeDescriptionProvider* provider)
		{
			return ((::System::Void(*)(::System::Object*, ::System::ComponentModel::TypeDescriptionProvider*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_NODEREMOVE_OFFSET))(key, provider);
		}

		static ::System::Collections::ICollection* PipelineAttributeFilter(::System::Int32 pipelineType, ::System::Collections::ICollection* members, ::Il2CppArray<::System::Attribute*>* filter, ::System::Object* instance, ::System::Collections::IDictionary* cache)
		{
			return ((::System::Collections::ICollection*(*)(::System::Int32, ::System::Collections::ICollection*, ::Il2CppArray<::System::Attribute*>*, ::System::Object*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_PIPELINEATTRIBUTEFILTER_OFFSET))(pipelineType, members, filter, instance, cache);
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

		static ::System::Void RaiseRefresh(::System::Object* component)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_RAISEREFRESH_OFFSET))(component);
		}

		static ::System::Void RaiseRefresh_1(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_RAISEREFRESH_1_OFFSET))(type);
		}

		static ::System::Void Refresh(::System::Object* component)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REFRESH_OFFSET))(component);
		}

		static ::System::Void Refresh_1(::System::Object* component, ::System::Boolean refreshReflectionProvider)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REFRESH_1_OFFSET))(component, refreshReflectionProvider);
		}

		static ::System::Void Refresh_2(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REFRESH_2_OFFSET))(type);
		}

		static ::System::Void Refresh_3(::System::Reflection::Module* module)
		{
			return ((::System::Void(*)(::System::Reflection::Module*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REFRESH_3_OFFSET))(module);
		}

		static ::System::Void Refresh_4(::System::Reflection::Assembly* assembly)
		{
			return ((::System::Void(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REFRESH_4_OFFSET))(assembly);
		}

		static ::System::Void RemoveAssociation(::System::Object* primary, ::System::Object* secondary)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REMOVEASSOCIATION_OFFSET))(primary, secondary);
		}

		static ::System::Void RemoveAssociations(::System::Object* primary)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REMOVEASSOCIATIONS_OFFSET))(primary);
		}

		static ::System::Void RemoveProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REMOVEPROVIDER_OFFSET))(provider, type);
		}

		static ::System::Void RemoveProvider_1(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Object* instance)
		{
			return ((::System::Void(*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REMOVEPROVIDER_1_OFFSET))(provider, instance);
		}

		static ::System::Void RemoveProviderTransparent(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REMOVEPROVIDERTRANSPARENT_OFFSET))(provider, type);
		}

		static ::System::Void RemoveProviderTransparent_1(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Object* instance)
		{
			return ((::System::Void(*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_REMOVEPROVIDERTRANSPARENT_1_OFFSET))(provider, instance);
		}

		static ::System::Boolean ShouldHideMember(::System::ComponentModel::MemberDescriptor* member, ::System::Attribute* attribute)
		{
			return ((::System::Boolean(*)(::System::ComponentModel::MemberDescriptor*, ::System::Attribute*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_SHOULDHIDEMEMBER_OFFSET))(member, attribute);
		}

		static ::System::Void SortDescriptorArray(::System::Collections::IList* infos)
		{
			return ((::System::Void(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_SORTDESCRIPTORARRAY_OFFSET))(infos);
		}

		static ::System::Void Trace(::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TRACE_OFFSET))(message, args);
		}
	};
}
