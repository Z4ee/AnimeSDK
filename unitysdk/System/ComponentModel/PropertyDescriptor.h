#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/DesignerSerializationVisibility.h"
#include "unitysdk/System/ComponentModel/MemberDescriptor.h"

namespace System { class Attribute; }
namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IList; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::ComponentModel { class TypeConverter; }

#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_ADDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A7DC1A0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A7DBDC0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7DC370)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_FILLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A7DC4E0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_1_OFFSET UNITYSDK_OFFSET(0x1A7DC510)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_2_OFFSET UNITYSDK_OFFSET(0x1A7DC530)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_3_OFFSET UNITYSDK_OFFSET(0x1A7DC550)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A7DC4F0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETEDITOR_OFFSET UNITYSDK_OFFSET(0x1A7DC6C0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7DCA70)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETINVOCATIONTARGET_OFFSET UNITYSDK_OFFSET(0x1A7DCAD0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETTYPEFROMNAME_OFFSET UNITYSDK_OFFSET(0x1A7DBB80)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETVALUECHANGEDHANDLER_OFFSET UNITYSDK_OFFSET(0x1A7DCDF0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x1A7DB9A0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_ISLOCALIZABLE_OFFSET UNITYSDK_OFFSET(0x1A7DBFF0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_SERIALIZATIONVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1A7DC100)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_SUPPORTSCHANGEEVENTS_OFFSET UNITYSDK_OFFSET(0x1A7DCE70)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A7DCBD0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_REMOVEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A7DCC60)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7DB980)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A7DB990)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DB970)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyDescriptor_TypeDefinitionIndex = 2963;

	class PropertyDescriptor : public ::System::ComponentModel::MemberDescriptor
	{
	public:
		::System::Collections::Hashtable* valueChangedHandlers; // 0x60
		::Il2CppArray<::System::Type*>* editorTypes; // 0x68
		::System::ComponentModel::TypeConverter* converter; // 0x70
		::Il2CppArray<::System::Object*>* editors; // 0x78
		::System::Int32 editorCount; // 0x80

		::System::Void _ctor(::System::String* name, ::Il2CppArray<::System::Attribute*>* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR__CTOR_OFFSET))(this, name, attrs);
		}

		::System::Void _ctor_1(::System::ComponentModel::MemberDescriptor* descr)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::MemberDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR__CTOR_1_OFFSET))(this, descr);
		}

		::System::Void _ctor_2(::System::ComponentModel::MemberDescriptor* descr, ::Il2CppArray<::System::Attribute*>* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::MemberDescriptor*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR__CTOR_2_OFFSET))(this, descr, attrs);
		}

		::System::ComponentModel::TypeConverter* get_Converter()
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_CONVERTER_OFFSET))(this);
		}

		::System::Boolean get_IsLocalizable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_ISLOCALIZABLE_OFFSET))(this);
		}

		::System::ComponentModel::DesignerSerializationVisibility get_SerializationVisibility()
		{
			return ((::System::ComponentModel::DesignerSerializationVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_SERIALIZATIONVISIBILITY_OFFSET))(this);
		}

		::System::Void AddValueChanged(::System::Object* component, ::System::EventHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_ADDVALUECHANGED_OFFSET))(this, component, handler);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_EQUALS_OFFSET))(this, obj);
		}

		::System::Object* CreateInstance(::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_CREATEINSTANCE_OFFSET))(this, type);
		}

		::System::Void FillAttributes(::System::Collections::IList* attributeList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_FILLATTRIBUTES_OFFSET))(this, attributeList);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties()
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties_1(::Il2CppArray<::System::Attribute*>* filter)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_1_OFFSET))(this, filter);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties_2(::System::Object* instance)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_2_OFFSET))(this, instance);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties_3(::System::Object* instance, ::Il2CppArray<::System::Attribute*>* filter)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETCHILDPROPERTIES_3_OFFSET))(this, instance, filter);
		}

		::System::Object* GetEditor(::System::Type* editorBaseType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETEDITOR_OFFSET))(this, editorBaseType);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Object* GetInvocationTarget(::System::Type* type, ::System::Object* instance)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETINVOCATIONTARGET_OFFSET))(this, type, instance);
		}

		::System::Type* GetTypeFromName(::System::String* typeName)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETTYPEFROMNAME_OFFSET))(this, typeName);
		}

		::System::Void OnValueChanged(::System::Object* component, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_ONVALUECHANGED_OFFSET))(this, component, e);
		}

		::System::Void RemoveValueChanged(::System::Object* component, ::System::EventHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_REMOVEVALUECHANGED_OFFSET))(this, component, handler);
		}

		::System::EventHandler* GetValueChangedHandler(::System::Object* component)
		{
			return ((::System::EventHandler*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETVALUECHANGEDHANDLER_OFFSET))(this, component);
		}

		::System::Boolean get_SupportsChangeEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GET_SUPPORTSCHANGEEVENTS_OFFSET))(this);
		}
	};
}
