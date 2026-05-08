#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Reflection { class FieldInfo; }

#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE2AC20)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_FIELDINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BE2B420)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_FIELDINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE2B3B0)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BE2B4A0)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE2B410)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BE2B3C0)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BE2A8C0)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2A8A0)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1BE2AA60)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1BE2AB40)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int ReflectionExtensions__GetAllFieldsCore_d__6_TypeDefinitionIndex = 85667;

	class ReflectionExtensions__GetAllFieldsCore_d__6 : public ::System::Object
	{
	public:
		::System::Reflection::FieldInfo* __2__current; // 0x10
		::System::Type* type; // 0x18
		::System::Type* __3__type; // 0x20
		::System::Collections::Generic::HashSet_1<::System::String*>* nameCheck; // 0x28
		::System::Collections::Generic::IEnumerator_1<::System::Reflection::FieldInfo*>* __7__wrap1; // 0x30
		::System::Collections::Generic::HashSet_1<::System::String*>* __3__nameCheck; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Int32 __l__initialThreadId; // 0x44

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6___M__FINALLY2_OFFSET))(this);
		}

		::System::Reflection::FieldInfo* System_Collections_Generic_IEnumerator_System_Reflection_FieldInfo__get_Current()
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_FIELDINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Reflection::FieldInfo*>* System_Collections_Generic_IEnumerable_System_Reflection_FieldInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Reflection::FieldInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_FIELDINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLFIELDSCORE_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
