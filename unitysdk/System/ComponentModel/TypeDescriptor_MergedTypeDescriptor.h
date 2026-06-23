#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class EventDescriptor; }
namespace System::ComponentModel { class EventDescriptorCollection; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }
namespace System::ComponentModel { class PropertyDescriptor; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::ComponentModel { class TypeConverter; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C00E6D0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1C00E840)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1C00E9C0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1C00EB40)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x1C00ECC0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C00EE40)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEDITOR_OFFSET UNITYSDK_OFFSET(0x1C00EFC0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEVENTS_1_OFFSET UNITYSDK_OFFSET(0x1C00F300)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x1C00F180)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTIES_1_OFFSET UNITYSDK_OFFSET(0x1C00F610)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C00F490)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTYOWNER_OFFSET UNITYSDK_OFFSET(0x1C00F7A0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C00E6C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_MergedTypeDescriptor_TypeDefinitionIndex = 3003;

	class TypeDescriptor_MergedTypeDescriptor : public ::System::Object
	{
	public:
		::System::ComponentModel::ICustomTypeDescriptor* _secondary; // 0x10
		::System::ComponentModel::ICustomTypeDescriptor* _primary; // 0x18

		::System::Void _ctor(::System::ComponentModel::ICustomTypeDescriptor* primary, ::System::ComponentModel::ICustomTypeDescriptor* secondary)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ICustomTypeDescriptor*, ::System::ComponentModel::ICustomTypeDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR__CTOR_OFFSET))(this, primary, secondary);
		}

		::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET))(this);
		}

		::System::String* System_ComponentModel_ICustomTypeDescriptor_GetClassName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCLASSNAME_OFFSET))(this);
		}

		::System::String* System_ComponentModel_ICustomTypeDescriptor_GetComponentName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCOMPONENTNAME_OFFSET))(this);
		}

		::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter()
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET))(this);
		}

		::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent()
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETDEFAULTEVENT_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty()
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETDEFAULTPROPERTY_OFFSET))(this);
		}

		::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEDITOR_OFFSET))(this, editorBaseType);
		}

		::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents()
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEVENTS_OFFSET))(this);
		}

		::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents_1(::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEVENTS_1_OFFSET))(this, attributes);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties()
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTIES_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties_1(::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTIES_1_OFFSET))(this, attributes);
		}

		::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTYOWNER_OFFSET))(this, pd);
		}
	};
}
