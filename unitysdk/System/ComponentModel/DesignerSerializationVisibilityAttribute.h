#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/ComponentModel/DesignerSerializationVisibility.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AF29D30)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AF29D90)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1AF29D20)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AF29DA0)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF29E60)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF29D10)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignerSerializationVisibilityAttribute_TypeDefinitionIndex = 2574;

	class DesignerSerializationVisibilityAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::DesignerSerializationVisibilityAttribute** StaticGet_Visible()
		{
			return (::System::ComponentModel::DesignerSerializationVisibilityAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignerSerializationVisibilityAttribute_TypeDefinitionIndex)->GetStaticField(0x23030);
		}
		static ::System::ComponentModel::DesignerSerializationVisibilityAttribute** StaticGet_Hidden()
		{
			return (::System::ComponentModel::DesignerSerializationVisibilityAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignerSerializationVisibilityAttribute_TypeDefinitionIndex)->GetStaticField(0x23038);
		}
		static ::System::ComponentModel::DesignerSerializationVisibilityAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DesignerSerializationVisibilityAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignerSerializationVisibilityAttribute_TypeDefinitionIndex)->GetStaticField(0x23040);
		}
		static ::System::ComponentModel::DesignerSerializationVisibilityAttribute** StaticGet_Content()
		{
			return (::System::ComponentModel::DesignerSerializationVisibilityAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignerSerializationVisibilityAttribute_TypeDefinitionIndex)->GetStaticField(0x23048);
		}
		::System::ComponentModel::DesignerSerializationVisibility visibility; // 0x10

		::System::Void _ctor(::System::ComponentModel::DesignerSerializationVisibility a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::DesignerSerializationVisibility))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::ComponentModel::DesignerSerializationVisibility get_Visibility()
		{
			return ((::System::ComponentModel::DesignerSerializationVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
