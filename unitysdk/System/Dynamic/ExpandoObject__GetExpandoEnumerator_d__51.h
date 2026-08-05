#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Dynamic { class ExpandoObject; }
namespace System::Dynamic { class ExpandoObject_ExpandoData; }

#define SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F468870)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F468AE0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F468B40)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F468AF0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F468860)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51__CTOR_OFFSET UNITYSDK_OFFSET(0x1F468850)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoObject__GetExpandoEnumerator_d__51_TypeDefinitionIndex = 5001;

	class ExpandoObject__GetExpandoEnumerator_d__51 : public ::System::Object
	{
	public:
		::System::Dynamic::ExpandoObject_ExpandoData* data; // 0x10
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> __2__current; // 0x18
		::System::Dynamic::ExpandoObject* __4__this; // 0x28
		::System::Int32 _i_5__1; // 0x30
		::System::Int32 version; // 0x34
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_MOVENEXT_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT__GETEXPANDOENUMERATOR_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
