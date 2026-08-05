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

#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1CBF84F0)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1CBF85F0)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1CBF86D0)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1CBF87B0)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x1CBF88A0)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1CBF8980)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETEDITOR_OFFSET UNITYSDK_OFFSET(0x1CBF8A60)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETEVENTS_1_OFFSET UNITYSDK_OFFSET(0x1CBF8C40)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x1CBF8B40)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETPROPERTIES_1_OFFSET UNITYSDK_OFFSET(0x1CBF8E40)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1CBF8D40)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETPROPERTYOWNER_OFFSET UNITYSDK_OFFSET(0x1CBF8F40)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBF84E0)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF84D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CustomTypeDescriptor_TypeDefinitionIndex = 2848;

	class CustomTypeDescriptor : public ::System::Object
	{
	public:
		::System::ComponentModel::ICustomTypeDescriptor* _parent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::ComponentModel::ICustomTypeDescriptor* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ICustomTypeDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR__CTOR_1_OFFSET))(this, parent);
		}

		::System::ComponentModel::AttributeCollection* GetAttributes()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET))(this);
		}

		::System::String* GetClassName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETCLASSNAME_OFFSET))(this);
		}

		::System::String* GetComponentName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETCOMPONENTNAME_OFFSET))(this);
		}

		::System::ComponentModel::TypeConverter* GetConverter()
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET))(this);
		}

		::System::ComponentModel::EventDescriptor* GetDefaultEvent()
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETDEFAULTEVENT_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptor* GetDefaultProperty()
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETDEFAULTPROPERTY_OFFSET))(this);
		}

		::System::Object* GetEditor(::System::Type* editorBaseType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETEDITOR_OFFSET))(this, editorBaseType);
		}

		::System::ComponentModel::EventDescriptorCollection* GetEvents()
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETEVENTS_OFFSET))(this);
		}

		::System::ComponentModel::EventDescriptorCollection* GetEvents_1(::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETEVENTS_1_OFFSET))(this, attributes);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties()
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETPROPERTIES_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties_1(::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETPROPERTIES_1_OFFSET))(this, attributes);
		}

		::System::Object* GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETPROPERTYOWNER_OFFSET))(this, pd);
		}
	};
}
