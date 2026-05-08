#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeDescriptionProvider.h"
#include "unitysdk/System/Guid.h"

namespace System { class Attribute; }
namespace System { class IServiceProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionary; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class EventDescriptor; }
namespace System::ComponentModel { class EventDescriptorCollection; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }
namespace System::ComponentModel { class IExtenderProvider; }
namespace System::ComponentModel { class PropertyDescriptor; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::ComponentModel { class ReflectTypeDescriptionProvider_ReflectedTypeData; }
namespace System::ComponentModel { class TypeConverter; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class Module; }

#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_ADDEDITORTABLE_OFFSET UNITYSDK_OFFSET(0x1939C080)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1939C540)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1939C2E0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1939C680)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET UNITYSDK_OFFSET(0x1939C970)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1939CDA0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1939CDE0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1939CE10)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x1939CE40)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1939CE70)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEDITORTABLE_OFFSET UNITYSDK_OFFSET(0x1939CEE0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEDITOR_OFFSET UNITYSDK_OFFSET(0x1939CEA0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x1939D430)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1939D460)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1939D4C0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1939D520)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDCONVERTER_OFFSET UNITYSDK_OFFSET(0x1939D570)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x1939D5C0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1939D5D0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDEDITOR_OFFSET UNITYSDK_OFFSET(0x1939D5E0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDEVENTS_OFFSET UNITYSDK_OFFSET(0x1939D640)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1939D6A0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDPROPERTYOWNER_OFFSET UNITYSDK_OFFSET(0x193A0370)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193A0450)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDERPROVIDERS_OFFSET UNITYSDK_OFFSET(0x1939DD20)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDERS_OFFSET UNITYSDK_OFFSET(0x1939F500)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETFULLCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x193A0460)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETPOPULATEDTYPES_OFFSET UNITYSDK_OFFSET(0x193A0670)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x193A0B70)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETPROPERTYOWNER_OFFSET UNITYSDK_OFFSET(0x193A03F0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x193A0BA0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETTYPEDATA_OFFSET UNITYSDK_OFFSET(0x1939C6B0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193A0BB0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETTYPEFROMNAME_OFFSET UNITYSDK_OFFSET(0x193A0BC0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GET_EXTENDERPROVIDERKEY_OFFSET UNITYSDK_OFFSET(0x1939B540)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GET_INTRINSICTYPECONVERTERS_OFFSET UNITYSDK_OFFSET(0x1939B5C0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_ISPOPULATED_OFFSET UNITYSDK_OFFSET(0x193A0D20)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTGETATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x193A12E0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTGETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x193A0D50)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTGETEVENTS_OFFSET UNITYSDK_OFFSET(0x193A1870)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTGETEXTENDEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1939E1A0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTGETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x193A22F0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFRESH_OFFSET UNITYSDK_OFFSET(0x193A2C10)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_SEARCHINTRINSICTABLE_OFFSET UNITYSDK_OFFSET(0x193A2C50)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x193A3810)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1939B5A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReflectTypeDescriptionProvider_TypeDefinitionIndex = 2973;

	class ReflectTypeDescriptionProvider : public ::System::ComponentModel::TypeDescriptionProvider
	{
	public:
		static ::System::Collections::Hashtable** StaticGet__attributeCache()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x2D90);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet__skipInterfaceAttributeList()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x2D98);
		}
		static ::System::Collections::Hashtable** StaticGet__intrinsicTypeConverters()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x2DA0);
		}
		static ::System::Collections::Hashtable** StaticGet__extendedPropertyCache()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x2DA8);
		}
		static ::System::Collections::Hashtable** StaticGet__propertyCache()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x2DB0);
		}
		static ::System::Object** StaticGet__internalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x2DB8);
		}
		static ::System::Object** StaticGet__intrinsicReferenceKey()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x2DC0);
		}
		static ::System::Collections::Hashtable** StaticGet__editorTables()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x2DC8);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet__typeConstructor()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x2DD0);
		}
		static ::System::Collections::Hashtable** StaticGet__eventCache()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x2DD8);
		}
		static ::System::Object** StaticGet__intrinsicNullableKey()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x2DE0);
		}
		static ::System::Object** StaticGet__dictionaryKey()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x2DE8);
		}
		static ::System::Guid* StaticGet__extenderPropertiesKey()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x1180);
		}
		static ::System::Guid* StaticGet__extenderProviderKey()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x1190);
		}
		static ::System::Guid* StaticGet__extenderProviderPropertiesKey()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(ReflectTypeDescriptionProvider_TypeDefinitionIndex)->GetStaticField(0x11A0);
		}
		::System::Collections::Hashtable* _typeData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER__CCTOR_OFFSET))();
		}

		static ::System::Guid get_ExtenderProviderKey()
		{
			return ((::System::Guid(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GET_EXTENDERPROVIDERKEY_OFFSET))();
		}

		static ::System::Collections::Hashtable* get_IntrinsicTypeConverters()
		{
			return ((::System::Collections::Hashtable*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GET_INTRINSICTYPECONVERTERS_OFFSET))();
		}

		static ::System::Void AddEditorTable(::System::Type* editorBaseType, ::System::Collections::Hashtable* table)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_ADDEDITORTABLE_OFFSET))(editorBaseType, table);
		}

		::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::Il2CppArray<::System::Type*>* argTypes, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IServiceProvider*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_OFFSET))(this, provider, objectType, argTypes, args);
		}

		static ::System::Object* CreateInstance_1(::System::Type* objectType, ::System::Type* callingType)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_1_OFFSET))(objectType, callingType);
		}

		::System::ComponentModel::AttributeCollection* GetAttributes(::System::Type* type)
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETATTRIBUTES_OFFSET))(this, type);
		}

		::System::Collections::IDictionary* GetCache(::System::Object* instance)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET))(this, instance);
		}

		::System::String* GetClassName(::System::Type* type)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCLASSNAME_OFFSET))(this, type);
		}

		::System::String* GetComponentName(::System::Type* type, ::System::Object* instance)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCOMPONENTNAME_OFFSET))(this, type, instance);
		}

		::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type, ::System::Object* instance)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCONVERTER_OFFSET))(this, type, instance);
		}

		::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Type* type, ::System::Object* instance)
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETDEFAULTEVENT_OFFSET))(this, type, instance);
		}

		::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Type* type, ::System::Object* instance)
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETDEFAULTPROPERTY_OFFSET))(this, type, instance);
		}

		::System::Object* GetEditor(::System::Type* type, ::System::Object* instance, ::System::Type* editorBaseType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEDITOR_OFFSET))(this, type, instance, editorBaseType);
		}

		static ::System::Collections::Hashtable* GetEditorTable(::System::Type* editorBaseType)
		{
			return ((::System::Collections::Hashtable*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEDITORTABLE_OFFSET))(editorBaseType);
		}

		::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Type* type)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEVENTS_OFFSET))(this, type);
		}

		::System::ComponentModel::AttributeCollection* GetExtendedAttributes(::System::Object* instance)
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDATTRIBUTES_OFFSET))(this, instance);
		}

		::System::String* GetExtendedClassName(::System::Object* instance)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDCLASSNAME_OFFSET))(this, instance);
		}

		::System::String* GetExtendedComponentName(::System::Object* instance)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDCOMPONENTNAME_OFFSET))(this, instance);
		}

		::System::ComponentModel::TypeConverter* GetExtendedConverter(::System::Object* instance)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDCONVERTER_OFFSET))(this, instance);
		}

		::System::ComponentModel::EventDescriptor* GetExtendedDefaultEvent(::System::Object* instance)
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDDEFAULTEVENT_OFFSET))(this, instance);
		}

		::System::ComponentModel::PropertyDescriptor* GetExtendedDefaultProperty(::System::Object* instance)
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDDEFAULTPROPERTY_OFFSET))(this, instance);
		}

		::System::Object* GetExtendedEditor(::System::Object* instance, ::System::Type* editorBaseType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDEDITOR_OFFSET))(this, instance, editorBaseType);
		}

		::System::ComponentModel::EventDescriptorCollection* GetExtendedEvents(::System::Object* instance)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDEVENTS_OFFSET))(this, instance);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetExtendedProperties(::System::Object* instance)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDPROPERTIES_OFFSET))(this, instance);
		}

		::Il2CppArray<::System::ComponentModel::IExtenderProvider*>* GetExtenderProviders(::System::Object* instance)
		{
			return ((::Il2CppArray<::System::ComponentModel::IExtenderProvider*>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDERPROVIDERS_OFFSET))(this, instance);
		}

		static ::Il2CppArray<::System::ComponentModel::IExtenderProvider*>* GetExtenders(::System::Collections::ICollection* components, ::System::Object* instance, ::System::Collections::IDictionary* cache)
		{
			return ((::Il2CppArray<::System::ComponentModel::IExtenderProvider*>*(*)(::System::Collections::ICollection*, ::System::Object*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDERS_OFFSET))(components, instance, cache);
		}

		::System::Object* GetExtendedPropertyOwner(::System::Object* instance, ::System::ComponentModel::PropertyDescriptor* pd)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDPROPERTYOWNER_OFFSET))(this, instance, pd);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET))(this, instance);
		}

		::System::String* GetFullComponentName(::System::Object* component)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETFULLCOMPONENTNAME_OFFSET))(this, component);
		}

		::Il2CppArray<::System::Type*>* GetPopulatedTypes(::System::Reflection::Module* module)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Reflection::Module*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETPOPULATEDTYPES_OFFSET))(this, module);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Type* type)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETPROPERTIES_OFFSET))(this, type);
		}

		::System::Object* GetPropertyOwner(::System::Type* type, ::System::Object* instance, ::System::ComponentModel::PropertyDescriptor* pd)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::Object*, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETPROPERTYOWNER_OFFSET))(this, type, instance, pd);
		}

		::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET))(this, objectType, instance);
		}

		::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData* GetTypeData(::System::Type* type, ::System::Boolean createIfNeeded)
		{
			return ((::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETTYPEDATA_OFFSET))(this, type, createIfNeeded);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(this, objectType, instance);
		}

		static ::System::Type* GetTypeFromName(::System::String* typeName)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETTYPEFROMNAME_OFFSET))(typeName);
		}

		::System::Boolean IsPopulated(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_ISPOPULATED_OFFSET))(this, type);
		}

		static ::Il2CppArray<::System::Attribute*>* ReflectGetAttributes(::System::Type* type)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTGETATTRIBUTES_OFFSET))(type);
		}

		static ::Il2CppArray<::System::Attribute*>* ReflectGetAttributes_1(::System::Reflection::MemberInfo* member)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTGETATTRIBUTES_1_OFFSET))(member);
		}

		static ::Il2CppArray<::System::ComponentModel::EventDescriptor*>* ReflectGetEvents(::System::Type* type)
		{
			return ((::Il2CppArray<::System::ComponentModel::EventDescriptor*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTGETEVENTS_OFFSET))(type);
		}

		static ::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>* ReflectGetExtendedProperties(::System::ComponentModel::IExtenderProvider* provider)
		{
			return ((::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>*(*)(::System::ComponentModel::IExtenderProvider*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTGETEXTENDEDPROPERTIES_OFFSET))(provider);
		}

		static ::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>* ReflectGetProperties(::System::Type* type)
		{
			return ((::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTGETPROPERTIES_OFFSET))(type);
		}

		::System::Void Refresh(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFRESH_OFFSET))(this, type);
		}

		static ::System::Object* SearchIntrinsicTable(::System::Collections::Hashtable* table, ::System::Type* callingType)
		{
			return ((::System::Object*(*)(::System::Collections::Hashtable*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_SEARCHINTRINSICTABLE_OFFSET))(table, callingType);
		}
	};
}
