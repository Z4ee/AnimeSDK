#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D3F0880)
#define SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D3F08E0)
#define SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1D3F0870)
#define SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D3F0950)
#define SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3F09E0)
#define SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3F0860)
#define SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F0850)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignTimeVisibleAttribute_TypeDefinitionIndex = 2864;

	class DesignTimeVisibleAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::DesignTimeVisibleAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::DesignTimeVisibleAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignTimeVisibleAttribute_TypeDefinitionIndex)->GetStaticField(0x2D50);
		}
		static ::System::ComponentModel::DesignTimeVisibleAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::DesignTimeVisibleAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignTimeVisibleAttribute_TypeDefinitionIndex)->GetStaticField(0x2D58);
		}
		static ::System::ComponentModel::DesignTimeVisibleAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DesignTimeVisibleAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignTimeVisibleAttribute_TypeDefinitionIndex)->GetStaticField(0x2D60);
		}
		::System::Boolean visible; // 0x10

		::System::Void _ctor(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE__CTOR_OFFSET))(this, visible);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE__CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_Visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_GET_VISIBLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
