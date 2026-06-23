#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/ComponentModel/DesignerSerializationVisibility.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D5CC580)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D5CC5E0)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1D5CC570)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D5CC5F0)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5CC6B0)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CC560)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignerSerializationVisibilityAttribute_TypeDefinitionIndex = 2868;

	class DesignerSerializationVisibilityAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::DesignerSerializationVisibilityAttribute** StaticGet_Visible()
		{
			return (::System::ComponentModel::DesignerSerializationVisibilityAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignerSerializationVisibilityAttribute_TypeDefinitionIndex)->GetStaticField(0x2590);
		}
		static ::System::ComponentModel::DesignerSerializationVisibilityAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DesignerSerializationVisibilityAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignerSerializationVisibilityAttribute_TypeDefinitionIndex)->GetStaticField(0x2598);
		}
		static ::System::ComponentModel::DesignerSerializationVisibilityAttribute** StaticGet_Content()
		{
			return (::System::ComponentModel::DesignerSerializationVisibilityAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignerSerializationVisibilityAttribute_TypeDefinitionIndex)->GetStaticField(0x25A0);
		}
		static ::System::ComponentModel::DesignerSerializationVisibilityAttribute** StaticGet_Hidden()
		{
			return (::System::ComponentModel::DesignerSerializationVisibilityAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignerSerializationVisibilityAttribute_TypeDefinitionIndex)->GetStaticField(0x25A8);
		}
		::System::ComponentModel::DesignerSerializationVisibility visibility; // 0x10

		::System::Void _ctor(::System::ComponentModel::DesignerSerializationVisibility visibility)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::DesignerSerializationVisibility))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE__CTOR_OFFSET))(this, visibility);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::ComponentModel::DesignerSerializationVisibility get_Visibility()
		{
			return ((::System::ComponentModel::DesignerSerializationVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_EQUALS_OFFSET))(this, obj);
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
