#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class EditorAttribute; }
namespace System::ComponentModel { class EventDescriptor; }
namespace System::ComponentModel { class EventDescriptorCollection; }
namespace System::ComponentModel { class PropertyDescriptor; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::ComponentModel { class TypeConverter; }

#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D3F2170)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1D3F2910)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1D3F2940)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1D3F2B80)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x1D3F31F0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D3F3440)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETEDITORATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D3F3E10)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETEDITOR_OFFSET UNITYSDK_OFFSET(0x1D3F36F0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x1D3F4240)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D3F4660)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETTYPEFROMNAME_OFFSET UNITYSDK_OFFSET(0x1D3F3040)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GET_ISPOPULATED_OFFSET UNITYSDK_OFFSET(0x1D3F2160)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x1D3F4A80)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F2150)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReflectTypeDescriptionProvider_ReflectedTypeData_TypeDefinitionIndex = 2973;

	class ReflectTypeDescriptionProvider_ReflectedTypeData : public ::System::Object
	{
	public:
		::System::ComponentModel::TypeConverter* _converter; // 0x10
		::Il2CppArray<::System::Object*>* _editors; // 0x18
		::System::Type* _type; // 0x20
		::System::ComponentModel::EventDescriptorCollection* _events; // 0x28
		::System::ComponentModel::AttributeCollection* _attributes; // 0x30
		::System::ComponentModel::PropertyDescriptorCollection* _properties; // 0x38
		::Il2CppArray<::System::Type*>* _editorTypes; // 0x40
		::System::Int32 _editorCount; // 0x48

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA__CTOR_OFFSET))(this, type);
		}

		::System::Boolean get_IsPopulated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GET_ISPOPULATED_OFFSET))(this);
		}

		::System::ComponentModel::AttributeCollection* GetAttributes()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETATTRIBUTES_OFFSET))(this);
		}

		::System::String* GetClassName(::System::Object* instance)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETCLASSNAME_OFFSET))(this, instance);
		}

		::System::String* GetComponentName(::System::Object* instance)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETCOMPONENTNAME_OFFSET))(this, instance);
		}

		::System::ComponentModel::TypeConverter* GetConverter(::System::Object* instance)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETCONVERTER_OFFSET))(this, instance);
		}

		::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Object* instance)
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETDEFAULTEVENT_OFFSET))(this, instance);
		}

		::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Object* instance)
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETDEFAULTPROPERTY_OFFSET))(this, instance);
		}

		::System::Object* GetEditor(::System::Object* instance, ::System::Type* editorBaseType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETEDITOR_OFFSET))(this, instance, editorBaseType);
		}

		static ::System::ComponentModel::EditorAttribute* GetEditorAttribute(::System::ComponentModel::AttributeCollection* attributes, ::System::Type* editorBaseType)
		{
			return ((::System::ComponentModel::EditorAttribute*(*)(::System::ComponentModel::AttributeCollection*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETEDITORATTRIBUTE_OFFSET))(attributes, editorBaseType);
		}

		::System::ComponentModel::EventDescriptorCollection* GetEvents()
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETEVENTS_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties()
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETPROPERTIES_OFFSET))(this);
		}

		::System::Type* GetTypeFromName(::System::String* typeName)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETTYPEFROMNAME_OFFSET))(this, typeName);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_REFRESH_OFFSET))(this);
		}
	};
}
