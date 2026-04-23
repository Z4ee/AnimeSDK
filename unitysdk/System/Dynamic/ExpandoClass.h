#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Dynamic { class ExpandoObject; }

#define SYSTEM_DYNAMIC_EXPANDOCLASS_FINDNEWCLASS_OFFSET UNITYSDK_OFFSET(0x19EB6B60)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GETTRANSITIONLIST_OFFSET UNITYSDK_OFFSET(0x19EB7050)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEXCASEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x19EB72B0)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEXCASESENSITIVE_OFFSET UNITYSDK_OFFSET(0x19EB74A0)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEX_OFFSET UNITYSDK_OFFSET(0x19EB7210)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x19EB75C0)
#define SYSTEM_DYNAMIC_EXPANDOCLASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EB75D0)
#define SYSTEM_DYNAMIC_EXPANDOCLASS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19EB6B50)
#define SYSTEM_DYNAMIC_EXPANDOCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB6B30)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoClass_TypeDefinitionIndex = 3661;

	class ExpandoClass : public ::System::Object
	{
	public:
		static ::System::Dynamic::ExpandoClass** StaticGet_Empty()
		{
			return (::System::Dynamic::ExpandoClass**)Il2CppClass::FromTypeDefinitionIndex(ExpandoClass_TypeDefinitionIndex)->GetStaticField(0x116E0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::WeakReference*>*>* _transitions; // 0x10
		::Il2CppArray<::System::String*>* _keys; // 0x18
		::System::Int32 _hashCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::String*>* keys, ::System::Int32 hashCode)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS__CTOR_1_OFFSET))(this, keys, hashCode);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS__CCTOR_OFFSET))();
		}

		::System::Dynamic::ExpandoClass* FindNewClass(::System::String* newKey)
		{
			return ((::System::Dynamic::ExpandoClass*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_FINDNEWCLASS_OFFSET))(this, newKey);
		}

		::System::Collections::Generic::List_1<::System::WeakReference*>* GetTransitionList(::System::Int32 hashCode)
		{
			return ((::System::Collections::Generic::List_1<::System::WeakReference*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GETTRANSITIONLIST_OFFSET))(this, hashCode);
		}

		::System::Int32 GetValueIndex(::System::String* name, ::System::Boolean caseInsensitive, ::System::Dynamic::ExpandoObject* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Dynamic::ExpandoObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEX_OFFSET))(this, name, caseInsensitive, obj);
		}

		::System::Int32 GetValueIndexCaseSensitive(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEXCASESENSITIVE_OFFSET))(this, name);
		}

		::System::Int32 GetValueIndexCaseInsensitive(::System::String* name, ::System::Dynamic::ExpandoObject* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Dynamic::ExpandoObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEXCASEINSENSITIVE_OFFSET))(this, name, obj);
		}

		::Il2CppArray<::System::String*>* get_Keys()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GET_KEYS_OFFSET))(this);
		}
	};
}
