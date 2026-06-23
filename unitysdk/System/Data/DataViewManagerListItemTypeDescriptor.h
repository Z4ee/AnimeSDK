#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class EventDescriptor; }
namespace System::ComponentModel { class EventDescriptorCollection; }
namespace System::ComponentModel { class PropertyDescriptor; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::ComponentModel { class TypeConverter; }
namespace System::Data { class DataTable; }
namespace System::Data { class DataView; }
namespace System::Data { class DataViewManager; }

#define SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_GETDATAVIEW_OFFSET UNITYSDK_OFFSET(0x1E0AE320)
#define SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E0AE410)
#define SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1E0AE460)
#define SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1E0AE470)
#define SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1E0AE480)
#define SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x1E0AE490)
#define SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E0AE4A0)
#define SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEDITOR_OFFSET UNITYSDK_OFFSET(0x1E0AE4B0)
#define SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEVENTS_1_OFFSET UNITYSDK_OFFSET(0x1E0AE540)
#define SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x1E0AE4C0)
#define SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTIES_1_OFFSET UNITYSDK_OFFSET(0x1E0AE680)
#define SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E0AE5C0)
#define SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTYOWNER_OFFSET UNITYSDK_OFFSET(0x1E0AE900)
#define SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AE400)

namespace System::Data
{
	inline static constexpr unsigned int DataViewManagerListItemTypeDescriptor_TypeDefinitionIndex = 38620;

	class DataViewManagerListItemTypeDescriptor : public ::System::Object
	{
	public:
		::System::Data::DataViewManager* _dataViewManager; // 0x10
		::System::ComponentModel::PropertyDescriptorCollection* _propsCollection; // 0x18

		::System::Void _ctor(::System::Data::DataViewManager* dataViewManager)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataViewManager*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR__CTOR_OFFSET))(this, dataViewManager);
		}

		::System::Data::DataView* GetDataView(::System::Data::DataTable* table)
		{
			return ((::System::Data::DataView*(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_GETDATAVIEW_OFFSET))(this, table);
		}

		::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET))(this);
		}

		::System::String* System_ComponentModel_ICustomTypeDescriptor_GetClassName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCLASSNAME_OFFSET))(this);
		}

		::System::String* System_ComponentModel_ICustomTypeDescriptor_GetComponentName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCOMPONENTNAME_OFFSET))(this);
		}

		::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter()
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET))(this);
		}

		::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent()
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETDEFAULTEVENT_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty()
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETDEFAULTPROPERTY_OFFSET))(this);
		}

		::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEDITOR_OFFSET))(this, editorBaseType);
		}

		::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents()
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEVENTS_OFFSET))(this);
		}

		::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents_1(::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEVENTS_1_OFFSET))(this, attributes);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties()
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTIES_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties_1(::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTIES_1_OFFSET))(this, attributes);
		}

		::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGERLISTITEMTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTYOWNER_OFFSET))(this, pd);
		}
	};
}
