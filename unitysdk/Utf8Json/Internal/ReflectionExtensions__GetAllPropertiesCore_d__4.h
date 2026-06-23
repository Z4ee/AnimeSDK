#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Reflection { class PropertyInfo; }

#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E7ED5E0)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_PROPERTYINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E7EDDE0)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_PROPERTYINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E7EDD70)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E7EDE60)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E7EDDD0)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E7EDD80)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7ED280)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7ED260)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1E7ED420)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1E7ED500)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int ReflectionExtensions__GetAllPropertiesCore_d__4_TypeDefinitionIndex = 91240;

	class ReflectionExtensions__GetAllPropertiesCore_d__4 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Reflection::PropertyInfo*>* __7__wrap1; // 0x10
		::System::Type* __3__type; // 0x18
		::System::Reflection::PropertyInfo* __2__current; // 0x20
		::System::Type* type; // 0x28
		::System::Collections::Generic::HashSet_1<::System::String*>* nameCheck; // 0x30
		::System::Collections::Generic::HashSet_1<::System::String*>* __3__nameCheck; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Int32 __l__initialThreadId; // 0x44

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4___M__FINALLY2_OFFSET))(this);
		}

		::System::Reflection::PropertyInfo* System_Collections_Generic_IEnumerator_System_Reflection_PropertyInfo__get_Current()
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_PROPERTYINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Reflection::PropertyInfo*>* System_Collections_Generic_IEnumerable_System_Reflection_PropertyInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Reflection::PropertyInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_PROPERTYINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS__GETALLPROPERTIESCORE_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
