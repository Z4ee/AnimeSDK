#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class EventDescriptor; }
namespace System::ComponentModel { class EventDescriptorCollection; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }
namespace System::ComponentModel { class PropertyDescriptor; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::ComponentModel { class TypeConverter; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRelation; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataView; }

#define SYSTEM_DATA_DATAROWVIEW_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B8FCAD0)
#define SYSTEM_DATA_DATAROWVIEW_BEGINEDIT_OFFSET UNITYSDK_OFFSET(0x1B8FC9F0)
#define SYSTEM_DATA_DATAROWVIEW_CANCELEDIT_OFFSET UNITYSDK_OFFSET(0x1B8FCA00)
#define SYSTEM_DATA_DATAROWVIEW_CREATECHILDVIEW_1_OFFSET UNITYSDK_OFFSET(0x1B8FC3C0)
#define SYSTEM_DATA_DATAROWVIEW_CREATECHILDVIEW_OFFSET UNITYSDK_OFFSET(0x1B8FC7E0)
#define SYSTEM_DATA_DATAROWVIEW_ENDEDIT_OFFSET UNITYSDK_OFFSET(0x1B8FCA80)
#define SYSTEM_DATA_DATAROWVIEW_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B8FC410)
#define SYSTEM_DATA_DATAROWVIEW_GETCOLUMNVALUE_OFFSET UNITYSDK_OFFSET(0x1B8FC670)
#define SYSTEM_DATA_DATAROWVIEW_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B8FC420)
#define SYSTEM_DATA_DATAROWVIEW_GETRECORD_OFFSET UNITYSDK_OFFSET(0x1B8FC510)
#define SYSTEM_DATA_DATAROWVIEW_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1B8FCA50)
#define SYSTEM_DATA_DATAROWVIEW_GET_ROWVERSIONDEFAULT_OFFSET UNITYSDK_OFFSET(0x1B8FC4B0)
#define SYSTEM_DATA_DATAROWVIEW_HASRECORD_OFFSET UNITYSDK_OFFSET(0x1B8FC580)
#define SYSTEM_DATA_DATAROWVIEW_RAISEPROPERTYCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x1B8FCBD0)
#define SYSTEM_DATA_DATAROWVIEW_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B8FCB50)
#define SYSTEM_DATA_DATAROWVIEW_SETCOLUMNVALUE_OFFSET UNITYSDK_OFFSET(0x1B8FC720)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B8FCC80)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1B8FCCD0)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1B8FCCE0)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1B8FCCF0)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x1B8FCD00)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B8FCD10)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEDITOR_OFFSET UNITYSDK_OFFSET(0x1B8FCD20)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEVENTS_1_OFFSET UNITYSDK_OFFSET(0x1B8FCDB0)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x1B8FCD30)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTIES_1_OFFSET UNITYSDK_OFFSET(0x1B8FCEF0)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B8FCE30)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTYOWNER_OFFSET UNITYSDK_OFFSET(0x1B8FCF80)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_IDATAERRORINFO_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1B8FC470)
#define SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_IDATAERRORINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B8FC450)
#define SYSTEM_DATA_DATAROWVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8FCF90)
#define SYSTEM_DATA_DATAROWVIEW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B8FD020)
#define SYSTEM_DATA_DATAROWVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8FC400)

namespace System::Data
{
	inline static constexpr unsigned int DataRowView_TypeDefinitionIndex = 36985;

	class DataRowView : public ::System::Object
	{
	public:
		static ::System::ComponentModel::PropertyDescriptorCollection** StaticGet_s_zeroPropertyDescriptorCollection()
		{
			return (::System::ComponentModel::PropertyDescriptorCollection**)Il2CppClass::FromTypeDefinitionIndex(DataRowView_TypeDefinitionIndex)->GetStaticField(0x27520);
		}
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x10
		::System::Data::DataView* _dataView; // 0x18
		::System::Data::DataRow* _row; // 0x20
		::System::Boolean _delayBeginEdit; // 0x28

		::System::Void _ctor(::System::Data::DataView* dataView, ::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataView*, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW__CTOR_OFFSET))(this, dataView, row);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW__CTOR_1_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_GETHASHCODE_OFFSET))(this);
		}

		::System::String* System_ComponentModel_IDataErrorInfo_get_Item(::System::String* colName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_IDATAERRORINFO_GET_ITEM_OFFSET))(this, colName);
		}

		::System::String* System_ComponentModel_IDataErrorInfo_get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_IDATAERRORINFO_GET_ERROR_OFFSET))(this);
		}

		::System::Data::DataRowVersion get_RowVersionDefault()
		{
			return ((::System::Data::DataRowVersion(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_GET_ROWVERSIONDEFAULT_OFFSET))(this);
		}

		::System::Int32 GetRecord()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_GETRECORD_OFFSET))(this);
		}

		::System::Boolean HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_HASRECORD_OFFSET))(this);
		}

		::System::Object* GetColumnValue(::System::Data::DataColumn* column)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_GETCOLUMNVALUE_OFFSET))(this, column);
		}

		::System::Void SetColumnValue(::System::Data::DataColumn* column, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SETCOLUMNVALUE_OFFSET))(this, column, value);
		}

		::System::Data::DataView* CreateChildView(::System::Data::DataRelation* relation, ::System::Boolean followParent)
		{
			return ((::System::Data::DataView*(*)(::PVOID, ::System::Data::DataRelation*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_CREATECHILDVIEW_OFFSET))(this, relation, followParent);
		}

		::System::Data::DataView* CreateChildView_1(::System::Data::DataRelation* relation)
		{
			return ((::System::Data::DataView*(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_CREATECHILDVIEW_1_OFFSET))(this, relation);
		}

		::System::Void BeginEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_BEGINEDIT_OFFSET))(this);
		}

		::System::Void CancelEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_CANCELEDIT_OFFSET))(this);
		}

		::System::Void EndEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_ENDEDIT_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_GET_ISNEW_OFFSET))(this);
		}

		::System::Void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_ADD_PROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_REMOVE_PROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Void RaisePropertyChangedEvent(::System::String* propName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_RAISEPROPERTYCHANGEDEVENT_OFFSET))(this, propName);
		}

		::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET))(this);
		}

		::System::String* System_ComponentModel_ICustomTypeDescriptor_GetClassName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCLASSNAME_OFFSET))(this);
		}

		::System::String* System_ComponentModel_ICustomTypeDescriptor_GetComponentName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCOMPONENTNAME_OFFSET))(this);
		}

		::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter()
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET))(this);
		}

		::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent()
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETDEFAULTEVENT_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty()
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETDEFAULTPROPERTY_OFFSET))(this);
		}

		::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEDITOR_OFFSET))(this, editorBaseType);
		}

		::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents()
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEVENTS_OFFSET))(this);
		}

		::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents_1(::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETEVENTS_1_OFFSET))(this, attributes);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties()
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTIES_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties_1(::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTIES_1_OFFSET))(this, attributes);
		}

		::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWVIEW_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETPROPERTYOWNER_OFFSET))(this, pd);
		}
	};
}
