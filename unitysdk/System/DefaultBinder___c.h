#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T> class Predicate_1; }

#define SYSTEM_DEFAULTBINDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162AF080)
#define SYSTEM_DEFAULTBINDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162AF0C0)
#define SYSTEM_DEFAULTBINDER___C__SELECTPROPERTY_B__3_0_OFFSET UNITYSDK_OFFSET(0x162AF0D0)

namespace System
{
	inline static constexpr unsigned int DefaultBinder___c_TypeDefinitionIndex = 232;

	class DefaultBinder___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::System::Type*>** StaticGet___9__3_0()
		{
			return (::System::Predicate_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultBinder___c_TypeDefinitionIndex)->GetStaticField(0x46B0);
		}
		static ::System::DefaultBinder___c** StaticGet___9()
		{
			return (::System::DefaultBinder___c**)Il2CppClass::FromTypeDefinitionIndex(DefaultBinder___c_TypeDefinitionIndex)->GetStaticField(0x46B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SelectProperty_b__3_0(::System::Type* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER___C__SELECTPROPERTY_B__3_0_OFFSET))(this, t);
		}
	};
}
