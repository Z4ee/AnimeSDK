#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MemberInfo; }

#define SYSTEM___FILTERS_FILTERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1ACA1150)
#define SYSTEM___FILTERS_FILTERIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1ACA1730)
#define SYSTEM___FILTERS_FILTERNAME_OFFSET UNITYSDK_OFFSET(0x1ACA1520)
#define SYSTEM___FILTERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACA1910)
#define SYSTEM___FILTERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACA1900)

namespace System
{
	inline static constexpr unsigned int __Filters_TypeDefinitionIndex = 150;

	class __Filters : public ::System::Object
	{
	public:
		static ::System::__Filters** StaticGet_Instance()
		{
			return (::System::__Filters**)Il2CppClass::FromTypeDefinitionIndex(__Filters_TypeDefinitionIndex)->GetStaticField(0x620);
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
