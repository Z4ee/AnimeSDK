#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Dynamic { class ExpandoObject; }

#define SYSTEM_DYNAMIC_EXPANDOCLASS_FINDNEWCLASS_OFFSET UNITYSDK_OFFSET(0x17E17450)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GETTRANSITIONLIST_OFFSET UNITYSDK_OFFSET(0x17E179B0)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEXCASEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x17E17BD0)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEXCASESENSITIVE_OFFSET UNITYSDK_OFFSET(0x17E17E50)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEX_OFFSET UNITYSDK_OFFSET(0x17E17B40)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x17E17F60)
#define SYSTEM_DYNAMIC_EXPANDOCLASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E17F70)
#define SYSTEM_DYNAMIC_EXPANDOCLASS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E17440)
#define SYSTEM_DYNAMIC_EXPANDOCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x17E17420)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoClass_TypeDefinitionIndex = 3666;

	class ExpandoClass : public ::System::Object
	{
	public:
		static ::System::Dynamic::ExpandoClass** StaticGet_Empty()
		{
			return (::System::Dynamic::ExpandoClass**)Il2CppClass::FromTypeDefinitionIndex(ExpandoClass_TypeDefinitionIndex)->GetStaticField(0x313A0);
		}
		::Il2CppArray<::System::String*>* _keys; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::WeakReference*>*>* _transitions; // 0x18
		::System::Int32 _hashCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS__CCTOR_OFFSET))();
		}

		::System::Dynamic::ExpandoClass* FindNewClass(::System::String* a1)
		{
			return ((::System::Dynamic::ExpandoClass*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_FINDNEWCLASS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::WeakReference*>* GetTransitionList(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::WeakReference*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GETTRANSITIONLIST_OFFSET))(this, a1);
		}

		::System::Int32 GetValueIndex(::System::String* a1, ::System::Boolean a2, ::System::Dynamic::ExpandoObject* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Dynamic::ExpandoObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEX_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetValueIndexCaseSensitive(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEXCASESENSITIVE_OFFSET))(this, a1);
		}

		::System::Int32 GetValueIndexCaseInsensitive(::System::String* a1, ::System::Dynamic::ExpandoObject* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Dynamic::ExpandoObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEXCASEINSENSITIVE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::String*>* get_Keys()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GET_KEYS_OFFSET))(this);
		}
	};
}
