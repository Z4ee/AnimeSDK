#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class EventDescriptorCollection; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::ComponentModel { class TypeConverter; }

#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AF33090)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1AF33C40)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETTYPEFROMNAME_OFFSET UNITYSDK_OFFSET(0x1AF355C0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GET_ISPOPULATED_OFFSET UNITYSDK_OFFSET(0x1AF34140)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x1AF346C0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF340F0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReflectTypeDescriptionProvider_ReflectedTypeData_TypeDefinitionIndex = 2611;

	class ReflectTypeDescriptionProvider_ReflectedTypeData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _editors; // 0x10
		::System::ComponentModel::TypeConverter* _converter; // 0x18
		::System::ComponentModel::PropertyDescriptorCollection* _properties; // 0x20
		::Il2CppArray<::System::Type*>* _editorTypes; // 0x28
		::System::ComponentModel::AttributeCollection* _attributes; // 0x30
		::System::ComponentModel::EventDescriptorCollection* _events; // 0x38
		::System::Type* _type; // 0x40
		::System::Int32 _editorCount; // 0x48

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPopulated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GET_ISPOPULATED_OFFSET))(this);
		}

		::System::ComponentModel::AttributeCollection* GetAttributes()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETATTRIBUTES_OFFSET))(this);
		}

		::System::ComponentModel::TypeConverter* GetConverter(::System::Object* a1)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETCONVERTER_OFFSET))(this, a1);
		}

		::System::Type* GetTypeFromName(::System::String* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_GETTYPEFROMNAME_OFFSET))(this, a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTEDTYPEDATA_REFRESH_OFFSET))(this);
		}
	};
}
