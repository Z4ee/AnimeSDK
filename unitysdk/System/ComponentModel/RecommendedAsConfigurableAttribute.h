#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D468A10)
#define SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D468A90)
#define SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_GET_RECOMMENDEDASCONFIGURABLE_OFFSET UNITYSDK_OFFSET(0x1D468A00)
#define SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D468AA0)
#define SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D468AB0)
#define SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4689F0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RecommendedAsConfigurableAttribute_TypeDefinitionIndex = 2967;

	class RecommendedAsConfigurableAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::RecommendedAsConfigurableAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::RecommendedAsConfigurableAttribute**)Il2CppClass::FromTypeDefinitionIndex(RecommendedAsConfigurableAttribute_TypeDefinitionIndex)->GetStaticField(0x39D0);
		}
		static ::System::ComponentModel::RecommendedAsConfigurableAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::RecommendedAsConfigurableAttribute**)Il2CppClass::FromTypeDefinitionIndex(RecommendedAsConfigurableAttribute_TypeDefinitionIndex)->GetStaticField(0x39D8);
		}
		static ::System::ComponentModel::RecommendedAsConfigurableAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::RecommendedAsConfigurableAttribute**)Il2CppClass::FromTypeDefinitionIndex(RecommendedAsConfigurableAttribute_TypeDefinitionIndex)->GetStaticField(0x39E0);
		}
		::System::Boolean recommendedAsConfigurable; // 0x10

		::System::Void _ctor(::System::Boolean recommendedAsConfigurable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE__CTOR_OFFSET))(this, recommendedAsConfigurable);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_RecommendedAsConfigurable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_GET_RECOMMENDEDASCONFIGURABLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
