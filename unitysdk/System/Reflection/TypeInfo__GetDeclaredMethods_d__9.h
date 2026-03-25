#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16381690)
#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_METHODINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x163817F0)
#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_METHODINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16381780)
#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16381870)
#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x163817E0)
#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16381790)
#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16381680)
#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0x163815F0)

namespace System::Reflection
{
	inline static constexpr unsigned int TypeInfo__GetDeclaredMethods_d__9_TypeDefinitionIndex = 591;

	class TypeInfo__GetDeclaredMethods_d__9 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* __2__current; // 0x10
		::System::String* name; // 0x18
		::System::String* __3__name; // 0x20
		::System::Reflection::TypeInfo* __4__this; // 0x28
		::Il2CppArray<::System::Reflection::MethodInfo*>* __7__wrap1; // 0x30
		::System::Int32 __7__wrap2; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Int32 __l__initialThreadId; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* System_Collections_Generic_IEnumerator_System_Reflection_MethodInfo__get_Current()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_METHODINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Reflection::MethodInfo*>* System_Collections_Generic_IEnumerable_System_Reflection_MethodInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Reflection::MethodInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_METHODINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
