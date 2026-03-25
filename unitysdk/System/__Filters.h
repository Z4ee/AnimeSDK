#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MemberInfo; }

#define SYSTEM___FILTERS_FILTERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x16278E90)
#define SYSTEM___FILTERS_FILTERIGNORECASE_OFFSET UNITYSDK_OFFSET(0x162793E0)
#define SYSTEM___FILTERS_FILTERNAME_OFFSET UNITYSDK_OFFSET(0x16279260)
#define SYSTEM___FILTERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16279570)
#define SYSTEM___FILTERS__CTOR_OFFSET UNITYSDK_OFFSET(0x16279560)

namespace System
{
	inline static constexpr unsigned int __Filters_TypeDefinitionIndex = 163;

	class __Filters : public ::System::Object
	{
	public:
		static ::System::__Filters** StaticGet_Instance()
		{
			return (::System::__Filters**)Il2CppClass::FromTypeDefinitionIndex(__Filters_TypeDefinitionIndex)->GetStaticField(0x60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___FILTERS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM___FILTERS__CCTOR_OFFSET))();
		}

		::System::Boolean FilterAttribute(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM___FILTERS_FILTERATTRIBUTE_OFFSET))(this, m, filterCriteria);
		}

		::System::Boolean FilterName(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM___FILTERS_FILTERNAME_OFFSET))(this, m, filterCriteria);
		}

		::System::Boolean FilterIgnoreCase(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM___FILTERS_FILTERIGNORECASE_OFFSET))(this, m, filterCriteria);
		}
	};
}
