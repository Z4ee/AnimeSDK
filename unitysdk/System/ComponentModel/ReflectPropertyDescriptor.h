#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/BitVector32.h"
#include "unitysdk/System/ComponentModel/PropertyDescriptor.h"

namespace System { class Attribute; }
namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IList; }
namespace System::ComponentModel { class EventDescriptor; }
namespace System::ComponentModel { class IExtenderProvider; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::Diagnostics { class TraceSwitch; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_ADDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B1BB5B0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BCD10)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERCANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BB770)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERGETRECEIVERTYPE_OFFSET UNITYSDK_OFFSET(0x1B1BBC20)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERGETTYPE_OFFSET UNITYSDK_OFFSET(0x1B1BBC30)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERGETVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BBAC0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERRESETVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BBC40)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERSETVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BC1F0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERSHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BC750)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_FILLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B1BD680)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BCFF0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_AMBIENTVALUE_OFFSET UNITYSDK_OFFSET(0x1B1B9D50)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_CHANGEDEVENTVALUE_OFFSET UNITYSDK_OFFSET(0x1B1B9EA0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B1BA220)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BA230)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_GETMETHODVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BA440)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_IPROPCHANGEDEVENTVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BA030)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_ISEXTENDER_OFFSET UNITYSDK_OFFSET(0x1B1BA910)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1B1BA920)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1B1BAFE0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_RESETMETHODVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BAFF0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_SETMETHODVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BAA00)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_SHOULDSERIALIZEMETHODVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BB2D0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_SUPPORTSCHANGEEVENTS_OFFSET UNITYSDK_OFFSET(0x1B1BF3D0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_ONINOTIFYPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B1BE380)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B1BE520)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_REMOVEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B1BE630)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BE7F0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BECC0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_SET_IPROPCHANGEDEVENTVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BA1B0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1B1BD280)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1BF410)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1B98A0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B1B99B0)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B1B9A70)
#define SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B9560)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReflectPropertyDescriptor_TypeDefinitionIndex = 2971;

	class ReflectPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor
	{
	public:
		static ::System::Diagnostics::TraceSwitch** StaticGet_PropDescCreateSwitch()
		{
			return (::System::Diagnostics::TraceSwitch**)Il2CppClass::FromTypeDefinitionIndex(ReflectPropertyDescriptor_TypeDefinitionIndex)->GetStaticField(0x2BB0);
		}
		static ::System::Object** StaticGet_noValue()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ReflectPropertyDescriptor_TypeDefinitionIndex)->GetStaticField(0x2BB8);
		}
		static ::System::Diagnostics::TraceSwitch** StaticGet_PropDescUsageSwitch()
		{
			return (::System::Diagnostics::TraceSwitch**)Il2CppClass::FromTypeDefinitionIndex(ReflectPropertyDescriptor_TypeDefinitionIndex)->GetStaticField(0x2BC0);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_argsNone()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectPropertyDescriptor_TypeDefinitionIndex)->GetStaticField(0x2BC8);
		}
		static ::System::Int32* StaticGet_BitSetQueried()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReflectPropertyDescriptor_TypeDefinitionIndex)->GetStaticField(0x1110);
		}
		static ::System::Int32* StaticGet_BitGetQueried()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReflectPropertyDescriptor_TypeDefinitionIndex)->GetStaticField(0x1114);
		}
		static ::System::Int32* StaticGet_BitReadOnlyChecked()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReflectPropertyDescriptor_TypeDefinitionIndex)->GetStaticField(0x1118);
		}
		static ::System::Int32* StaticGet_BitResetQueried()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReflectPropertyDescriptor_TypeDefinitionIndex)->GetStaticField(0x111C);
		}
		static ::System::Int32* StaticGet_BitAmbientValueQueried()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReflectPropertyDescriptor_TypeDefinitionIndex)->GetStaticField(0x1120);
		}
		static ::System::Int32* StaticGet_BitIPropChangedQueried()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReflectPropertyDescriptor_TypeDefinitionIndex)->GetStaticField(0x1124);
		}
		static ::System::Int32* StaticGet_BitShouldSerializeQueried()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReflectPropertyDescriptor_TypeDefinitionIndex)->GetStaticField(0x1128);
		}
		static ::System::Int32* StaticGet_BitChangedQueried()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReflectPropertyDescriptor_TypeDefinitionIndex)->GetStaticField(0x112C);
		}
		static ::System::Int32* StaticGet_BitSetOnDemand()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReflectPropertyDescriptor_TypeDefinitionIndex)->GetStaticField(0x1130);
		}
		static ::System::Int32* StaticGet_BitDefaultValueQueried()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReflectPropertyDescriptor_TypeDefinitionIndex)->GetStaticField(0x1134);
		}
		::System::Object* defaultValue; // 0x88
		::System::Reflection::MethodInfo* shouldSerializeMethod; // 0x90
		::System::Reflection::PropertyInfo* propInfo; // 0x98
		::System::Reflection::MethodInfo* resetMethod; // 0xA0
		::System::Type* receiverType; // 0xA8
		::System::ComponentModel::EventDescriptor* realIPropChangedEvent; // 0xB0
		::System::Type* type; // 0xB8
		::System::Object* ambientValue; // 0xC0
		::System::Reflection::MethodInfo* getMethod; // 0xC8
		::System::Type* componentClass; // 0xD0
		::System::Reflection::MethodInfo* setMethod; // 0xD8
		::System::ComponentModel::EventDescriptor* realChangedEvent; // 0xE0
		::System::Collections::Specialized::BitVector32 state; // 0xE8

		::System::Void _ctor(::System::Type* componentClass, ::System::String* name, ::System::Type* type, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR__CTOR_OFFSET))(this, componentClass, name, type, attributes);
		}

		::System::Void _ctor_1(::System::Type* componentClass, ::System::String* name, ::System::Type* type, ::System::Reflection::PropertyInfo* propInfo, ::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod, ::Il2CppArray<::System::Attribute*>* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Type*, ::System::Reflection::PropertyInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR__CTOR_1_OFFSET))(this, componentClass, name, type, propInfo, getMethod, setMethod, attrs);
		}

		::System::Void _ctor_2(::System::Type* componentClass, ::System::String* name, ::System::Type* type, ::System::Type* receiverType, ::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod, ::Il2CppArray<::System::Attribute*>* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Type*, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR__CTOR_2_OFFSET))(this, componentClass, name, type, receiverType, getMethod, setMethod, attrs);
		}

		::System::Void _ctor_3(::System::Type* componentClass, ::System::ComponentModel::PropertyDescriptor* oldReflectPropertyDescriptor, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::ComponentModel::PropertyDescriptor*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR__CTOR_3_OFFSET))(this, componentClass, oldReflectPropertyDescriptor, attributes);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR__CCTOR_OFFSET))();
		}

		::System::Object* get_AmbientValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_AMBIENTVALUE_OFFSET))(this);
		}

		::System::ComponentModel::EventDescriptor* get_ChangedEventValue()
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_CHANGEDEVENTVALUE_OFFSET))(this);
		}

		::System::ComponentModel::EventDescriptor* get_IPropChangedEventValue()
		{
			return ((::System::ComponentModel::EventDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_IPROPCHANGEDEVENTVALUE_OFFSET))(this);
		}

		::System::Void set_IPropChangedEventValue(::System::ComponentModel::EventDescriptor* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::EventDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_SET_IPROPCHANGEDEVENTVALUE_OFFSET))(this, value);
		}

		::System::Type* get_ComponentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(this);
		}

		::System::Object* get_DefaultValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_GetMethodValue()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_GETMETHODVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsExtender()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_ISEXTENDER_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_ResetMethodValue()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_RESETMETHODVALUE_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_SetMethodValue()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_SETMETHODVALUE_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_ShouldSerializeMethodValue()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_SHOULDSERIALIZEMETHODVALUE_OFFSET))(this);
		}

		::System::Void AddValueChanged(::System::Object* component, ::System::EventHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_ADDVALUECHANGED_OFFSET))(this, component, handler);
		}

		::System::Boolean ExtenderCanResetValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::IExtenderProvider*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERCANRESETVALUE_OFFSET))(this, provider, component);
		}

		::System::Type* ExtenderGetReceiverType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERGETRECEIVERTYPE_OFFSET))(this);
		}

		::System::Type* ExtenderGetType(::System::ComponentModel::IExtenderProvider* provider)
		{
			return ((::System::Type*(*)(::PVOID, ::System::ComponentModel::IExtenderProvider*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERGETTYPE_OFFSET))(this, provider);
		}

		::System::Object* ExtenderGetValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::IExtenderProvider*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERGETVALUE_OFFSET))(this, provider, component);
		}

		::System::Void ExtenderResetValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component, ::System::ComponentModel::PropertyDescriptor* notifyDesc)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IExtenderProvider*, ::System::Object*, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERRESETVALUE_OFFSET))(this, provider, component, notifyDesc);
		}

		::System::Void ExtenderSetValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component, ::System::Object* value, ::System::ComponentModel::PropertyDescriptor* notifyDesc)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IExtenderProvider*, ::System::Object*, ::System::Object*, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERSETVALUE_OFFSET))(this, provider, component, value, notifyDesc);
		}

		::System::Boolean ExtenderShouldSerializeValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::IExtenderProvider*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_EXTENDERSHOULDSERIALIZEVALUE_OFFSET))(this, provider, component);
		}

		::System::Boolean CanResetValue(::System::Object* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(this, component);
		}

		::System::Void FillAttributes(::System::Collections::IList* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_FILLATTRIBUTES_OFFSET))(this, attributes);
		}

		::System::Object* GetValue(::System::Object* component)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(this, component);
		}

		::System::Void OnINotifyPropertyChanged(::System::Object* component, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_ONINOTIFYPROPERTYCHANGED_OFFSET))(this, component, e);
		}

		::System::Void OnValueChanged(::System::Object* component, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_ONVALUECHANGED_OFFSET))(this, component, e);
		}

		::System::Void RemoveValueChanged(::System::Object* component, ::System::EventHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_REMOVEVALUECHANGED_OFFSET))(this, component, handler);
		}

		::System::Void ResetValue(::System::Object* component)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(this, component);
		}

		::System::Void SetValue(::System::Object* component, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(this, component, value);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(this, component);
		}

		::System::Boolean get_SupportsChangeEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTPROPERTYDESCRIPTOR_GET_SUPPORTSCHANGEEVENTS_OFFSET))(this);
		}
	};
}
