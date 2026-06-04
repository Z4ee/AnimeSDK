#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Reflection/MethodBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }

#define SYSTEM_REFLECTION_CONSTRUCTORINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1874AF50)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1874AF60)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1874AED0)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1874AEE0)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1874AF80)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1874AFB0)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1874AFE0)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1874AEB0)

namespace System::Reflection
{
	inline static constexpr unsigned int ConstructorInfo_TypeDefinitionIndex = 595;

	class ConstructorInfo : public ::System::Reflection::MethodBase
	{
	public:
		static ::System::String** StaticGet_ConstructorName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ConstructorInfo_TypeDefinitionIndex)->GetStaticField(0x97F0);
		}
		static ::System::String** StaticGet_TypeConstructorName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ConstructorInfo_TypeDefinitionIndex)->GetStaticField(0x97F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO__CCTOR_OFFSET))();
		}

		::System::Reflection::MemberTypes get_MemberType()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Object* Invoke(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_INVOKE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Reflection::ConstructorInfo* a1, ::System::Reflection::ConstructorInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::ConstructorInfo* a1, ::System::Reflection::ConstructorInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
