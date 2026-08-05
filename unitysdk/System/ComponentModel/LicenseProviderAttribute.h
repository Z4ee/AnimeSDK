#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D3F0EC0)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D3F1100)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_GET_LICENSEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1D3F0DA0)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x1D3F0E50)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3F1110)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3F0D80)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D3F0D90)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F0D70)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicenseProviderAttribute_TypeDefinitionIndex = 2932;

	class LicenseProviderAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::LicenseProviderAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::LicenseProviderAttribute**)Il2CppClass::FromTypeDefinitionIndex(LicenseProviderAttribute_TypeDefinitionIndex)->GetStaticField(0x2D80);
		}
		::System::Type* licenseProviderType; // 0x10
		::System::String* licenseProviderName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* typeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE__CTOR_1_OFFSET))(this, typeName);
		}

		::System::Void _ctor_2(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE__CTOR_2_OFFSET))(this, type);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Type* get_LicenseProvider()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_GET_LICENSEPROVIDER_OFFSET))(this);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
